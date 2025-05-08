#include "My_BTDecorator_RandomLoop.h"

#include "BehaviorTree/BTCompositeNode.h"
#include "BehaviorTree/Composites/BTComposite_SimpleParallel.h"
#include "BehaviorTree/Decorators/BTDecorator_Loop.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(My_BTDecorator_RandomLoop)

UMy_BTDecorator_RandomLoop::UMy_BTDecorator_RandomLoop(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	NodeName = "RandomLoop";
	NumLoopsMin = 1;
	NumLoopsMax = 2;
	INIT_DECORATOR_NODE_NOTIFY_FLAGS();

	bAllowAbortNone = false;
	bAllowAbortLowerPri = false;
	bAllowAbortChildNodes = false;
}

void UMy_BTDecorator_RandomLoop::OnNodeActivation(FBehaviorTreeSearchData& SearchData)
{
	FBTLoopDecoratorMemory* DecoratorMemory = GetNodeMemory<FBTLoopDecoratorMemory>(SearchData);
	FBTCompositeMemory* ParentMemory = GetParentNode()->GetNodeMemory<FBTCompositeMemory>(SearchData);
	const bool bIsSpecialNode = GetParentNode()->IsA(UBTComposite_SimpleParallel::StaticClass());

	if ((bIsSpecialNode && ParentMemory->CurrentChild == BTSpecialChild::NotInitialized) ||
		(!bIsSpecialNode && ParentMemory->CurrentChild != ChildIndex))
	{
		// initialize counter if it's first activation, with RANDOM LOOP COUNT
		int32 numLoops = FMath::RandRange(NumLoopsMin, NumLoopsMax);
		DecoratorMemory->RemainingExecutions = IntCastChecked<uint8>(numLoops);
		DecoratorMemory->TimeStarted = GetWorld()->GetTimeSeconds();
	}

	bool bShouldLoop = false;
	if (DecoratorMemory->RemainingExecutions > 0)
	{
		DecoratorMemory->RemainingExecutions--;
	}
	bShouldLoop = DecoratorMemory->RemainingExecutions > 0;

	// set child selection overrides
	if (bShouldLoop)
	{
		GetParentNode()->SetChildOverride(SearchData, ChildIndex);
	}
}

FString UMy_BTDecorator_RandomLoop::GetStaticDescription() const
{
	// basic info: num loops
	return FString::Printf(TEXT("%s: %d-%d loops"), *Super::GetStaticDescription(), NumLoopsMin, NumLoopsMax);
}

void UMy_BTDecorator_RandomLoop::DescribeRuntimeValues(const UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTDescriptionVerbosity::Type Verbosity, TArray<FString>& Values) const
{
	Super::DescribeRuntimeValues(OwnerComp, NodeMemory, Verbosity, Values);

	FBTLoopDecoratorMemory* DecoratorMemory = (FBTLoopDecoratorMemory*)NodeMemory;
	Values.Add(FString::Printf(TEXT("loops remaining: %d"), DecoratorMemory->RemainingExecutions));
}

uint16 UMy_BTDecorator_RandomLoop::GetInstanceMemorySize() const
{
	return sizeof(FBTLoopDecoratorMemory);
}

void UMy_BTDecorator_RandomLoop::InitializeMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTMemoryInit::Type InitType) const
{
	InitializeNodeMemory<FBTLoopDecoratorMemory>(NodeMemory, InitType);
}

void UMy_BTDecorator_RandomLoop::CleanupMemory(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTMemoryClear::Type CleanupType) const
{
	CleanupNodeMemory<FBTLoopDecoratorMemory>(NodeMemory, CleanupType);
}

#if WITH_EDITOR

FName UMy_BTDecorator_RandomLoop::GetNodeIconName() const
{
	return FName("BTEditor.Graph.BTNode.Decorator.Loop.Icon");
}

#endif	// WITH_EDITOR
