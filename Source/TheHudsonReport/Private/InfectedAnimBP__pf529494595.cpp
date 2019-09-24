#include "TheHudsonReport.h"
#include "InfectedAnimBP__pf529494595.h"
#include "GeneratedCodeHelpers.h"
#include "Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "InfectedAnimBP__pf529494595.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/BlendSpaceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "InfectedxAI__pfG897084639.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Animation/BlendSpace1D.h"
#include "MyChar__pf2980937819.h"
#include "LoadingScreenxWesternOak__pfG3933423829.h"
#include "DeadScreen__pf122804083.h"
#include "InGameUI__pf122804083.h"
#include "BP_CrosshairShoot__pf122804083.h"
#include "BP_Crosshair__pf122804083.h"
#include "MyAnimBP_Mannequin__pf2980937819.h"
#include "HandgunBullet__pf3442503945.h"
#include "M9xwxFlashlight__pfGG2403237688.h"
#include "RunCamShake__pf2403237688.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
UInfectedAnimBP_C__pf529494595::UInfectedAnimBP_C__pf529494595(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UInfectedAnimBP_C__pf529494595::StaticClass() == GetClass()))
	{
		UInfectedAnimBP_C__pf529494595::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__AnimGraphNode_Root_1314B4BD46D37F6B19B0D9AC16ECBA93__pf.Result.LinkID = 13;
	bpv__AnimGraphNode_TransitionResult_EE5C163644DE1DA5FAB4E1B34451CBA0__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_EE5C163644DE1DA5FAB4E1B34451CBA0"));
	bpv__AnimGraphNode_TransitionResult_35D5D07F4BE9F4C94E9EAB85E81818D6__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_35D5D07F4BE9F4C94E9EAB85E81818D6"));
	bpv__AnimGraphNode_TransitionResult_6F4AD6994C7B3EA573F63A9207EC7390__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_6F4AD6994C7B3EA573F63A9207EC7390"));
	bpv__AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__0 = bpv__AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__0.SourcePropertyName = FName(TEXT("IsAttacking"));
	__Local__0.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__0.Size = 1;
	bpv__AnimGraphNode_SequencePlayer_E2E18128476BE8AE6AC5CF944FAD40F2__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UInfectedAnimBP_C__pf529494595::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_E2E18128476BE8AE6AC5CF944FAD40F2__pf.PlayRate = 0.300000f;
	bpv__AnimGraphNode_StateResult_4FD0C1E04E05296B60AD84A78381F943__pf.Result.LinkID = 5;
	bpv__AnimGraphNode_SequencePlayer_AB484E1942A879DCB7554584B9B52731__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UInfectedAnimBP_C__pf529494595::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_AB484E1942A879DCB7554584B9B52731__pf.PlayRate = 2.000000f;
	bpv__AnimGraphNode_StateResult_DB8735AE40B241516821C3B025581D99__pf.Result.LinkID = 7;
	bpv__AnimGraphNode_SequencePlayer_FE08114D4D7510F30FC354BF48840261__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UInfectedAnimBP_C__pf529494595::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_FE08114D4D7510F30FC354BF48840261__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_B40A86724B96E6D5DEFAB09FCDAA9048__pf.Result.LinkID = 9;
	bpv__AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(UInfectedAnimBP_C__pf529494595::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__1 = bpv__AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__1.SourcePropertyName = FName(TEXT("Speed"));
	__Local__1.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("X"));
	__Local__1.Size = 4;
	bpv__AnimGraphNode_StateResult_8AE8C9FA4E936916EE4751ADBEDBC204__pf.Result.LinkID = 11;
	bpv__IsInAirx__pfzy = false;
	bpv__Speed__pf = 0.000000f;
	bpv__Direction__pf = 0.000000f;
	bpv__IsAttacking__pf = false;
	bpv__AIxHealth__pfG = 0.000000f;
	bpv__PlayerHealth__pf = 0.000000f;
}
void UInfectedAnimBP_C__pf529494595::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UInfectedAnimBP_C__pf529494595::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	extern UClass* Z_Construct_UClass_AInfectedxAI_C__pfG897084639();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AInfectedxAI_C__pfG897084639());
	extern UClass* Z_Construct_UClass_AMyChar_C__pf2980937819();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AMyChar_C__pf2980937819());
	extern UClass* Z_Construct_UClass_ULoadingScreenxWesternOak_C__pfG3933423829();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_ULoadingScreenxWesternOak_C__pfG3933423829());
	extern UClass* Z_Construct_UClass_UDeadScreen_C__pf122804083();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UDeadScreen_C__pf122804083());
	extern UClass* Z_Construct_UClass_UInGameUI_C__pf122804083();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInGameUI_C__pf122804083());
	extern UClass* Z_Construct_UClass_UBP_CrosshairShoot_C__pf122804083();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBP_CrosshairShoot_C__pf122804083());
	extern UClass* Z_Construct_UClass_UBP_Crosshair_C__pf122804083();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UBP_Crosshair_C__pf122804083());
	extern UClass* Z_Construct_UClass_UMyAnimBP_Mannequin_C__pf2980937819();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UMyAnimBP_Mannequin_C__pf2980937819());
	extern UClass* Z_Construct_UClass_AHandgunBullet_C__pf3442503945();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AHandgunBullet_C__pf3442503945());
	extern UClass* Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688());
	extern UClass* Z_Construct_UClass_URunCamShake_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_URunCamShake_C__pf2403237688());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__2 = NewObject<UAnimClassData>(InDynamicClass, TEXT("AnimClassData"));
	__Local__2->BakedStateMachines = TArray<FBakedAnimationStateMachine> ();
	__Local__2->BakedStateMachines.AddUninitialized(1);
	FBakedAnimationStateMachine::StaticStruct()->InitializeStruct(__Local__2->BakedStateMachines.GetData(), 1);
	auto& __Local__3 = __Local__2->BakedStateMachines[0];
	__Local__3.MachineName = FName(TEXT("Movement"));
	__Local__3.InitialState = 0;
	__Local__3.States = TArray<FBakedAnimationState> ();
	__Local__3.States.AddUninitialized(4);
	FBakedAnimationState::StaticStruct()->InitializeStruct(__Local__3.States.GetData(), 4);
	auto& __Local__4 = __Local__3.States[0];
	__Local__4.StateName = FName(TEXT("idle/walk/run"));
	__Local__4.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__4.Transitions.AddUninitialized(2);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__4.Transitions.GetData(), 2);
	auto& __Local__5 = __Local__4.Transitions[0];
	__Local__5.CanTakeDelegateIndex = 9;
	__Local__5.TransitionIndex = 1;
	auto& __Local__6 = __Local__4.Transitions[1];
	__Local__6.CanTakeDelegateIndex = 10;
	__Local__6.TransitionIndex = 0;
	__Local__4.StateRootNodeIndex = 1;
	__Local__4.PlayerNodeIndices = TArray<int32> ();
	__Local__4.PlayerNodeIndices.Reserve(1);
	__Local__4.PlayerNodeIndices.Add(2);
	auto& __Local__7 = __Local__3.States[1];
	__Local__7.StateName = FName(TEXT("Dead"));
	__Local__7.StateRootNodeIndex = 3;
	__Local__7.PlayerNodeIndices = TArray<int32> ();
	__Local__7.PlayerNodeIndices.Reserve(1);
	__Local__7.PlayerNodeIndices.Add(4);
	auto& __Local__8 = __Local__3.States[2];
	__Local__8.StateName = FName(TEXT("Attack"));
	__Local__8.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__8.Transitions.AddUninitialized(2);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__8.Transitions.GetData(), 2);
	auto& __Local__9 = __Local__8.Transitions[0];
	__Local__9.CanTakeDelegateIndex = 11;
	__Local__9.TransitionIndex = 3;
	auto& __Local__10 = __Local__8.Transitions[1];
	__Local__10.CanTakeDelegateIndex = 12;
	__Local__10.TransitionIndex = 2;
	__Local__8.StateRootNodeIndex = 5;
	__Local__8.PlayerNodeIndices = TArray<int32> ();
	__Local__8.PlayerNodeIndices.Reserve(1);
	__Local__8.PlayerNodeIndices.Add(6);
	auto& __Local__11 = __Local__3.States[3];
	__Local__11.StateName = FName(TEXT("PlayerHasDied"));
	__Local__11.StateRootNodeIndex = 7;
	__Local__11.PlayerNodeIndices = TArray<int32> ();
	__Local__11.PlayerNodeIndices.Reserve(1);
	__Local__11.PlayerNodeIndices.Add(8);
	__Local__3.Transitions = TArray<FAnimationTransitionBetweenStates> ();
	__Local__3.Transitions.AddUninitialized(4);
	FAnimationTransitionBetweenStates::StaticStruct()->InitializeStruct(__Local__3.Transitions.GetData(), 4);
	auto& __Local__12 = __Local__3.Transitions[0];
	__Local__12.PreviousState = 0;
	__Local__12.NextState = 1;
	__Local__12.CrossfadeDuration = 0.200000f;
	__Local__12.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__13 = __Local__3.Transitions[1];
	__Local__13.PreviousState = 0;
	__Local__13.NextState = 2;
	__Local__13.CrossfadeDuration = 0.200000f;
	__Local__13.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__14 = __Local__3.Transitions[2];
	__Local__14.PreviousState = 2;
	__Local__14.NextState = 0;
	__Local__14.CrossfadeDuration = 0.200000f;
	__Local__14.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__15 = __Local__3.Transitions[3];
	__Local__15.PreviousState = 2;
	__Local__15.NextState = 3;
	__Local__15.CrossfadeDuration = 0.200000f;
	__Local__15.BlendMode = EAlphaBlendOption::HermiteCubic;
	__Local__2->TargetSkeleton = CastChecked<USkeleton>(CastChecked<UDynamicClass>(UInfectedAnimBP_C__pf529494595::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__2->RootAnimNodeIndex = 13;
	__Local__2->RootAnimNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_1314B4BD46D37F6B19B0D9AC16ECBA93"));
	__Local__2->AnimNodeProperties = TArray<UStructProperty*> ();
	__Local__2->AnimNodeProperties.Reserve(14);
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_1314B4BD46D37F6B19B0D9AC16ECBA93")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_EE5C163644DE1DA5FAB4E1B34451CBA0")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_35D5D07F4BE9F4C94E9EAB85E81818D6")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_6F4AD6994C7B3EA573F63A9207EC7390")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_E2E18128476BE8AE6AC5CF944FAD40F2")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_4FD0C1E04E05296B60AD84A78381F943")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_AB484E1942A879DCB7554584B9B52731")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_DB8735AE40B241516821C3B025581D99")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_FE08114D4D7510F30FC354BF48840261")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_B40A86724B96E6D5DEFAB09FCDAA9048")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_8AE8C9FA4E936916EE4751ADBEDBC204")));
	__Local__2->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateMachine_3EB9C6A349D32C1D30DA64995F223FFE")));
	InDynamicClass->AnimClassImplementation = __Local__2;
}
void UInfectedAnimBP_C__pf529494595::bpf__ExecuteUbergraph_InfectedAnimBP__pf_0(int32 bpp__EntryPoint__pf)
{
	APawn* bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	FVector bpv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	UPawnMovementComponent* bpv__CallFunc_GetMovementComponent_ReturnValue__pf{};
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	bool bpv__CallFunc_IsFalling_ReturnValue__pf{};
	APawn* bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf{};
	FRotator bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetVelocity_ReturnValue2__pf(EForceInit::ForceInit);
	float bpv__CallFunc_CalculateDirection_ReturnValue__pf{};
	APawn* bpv__CallFunc_TryGetPawnOwner_ReturnValue3__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bool  __Local__16 = false;
				bpv__IsAttacking__pf = ((IsValid(b0l__K2Node_DynamicCast_AsInfected__AI__pf)) ? (b0l__K2Node_DynamicCast_AsInfected__AI__pf->bpv__IsAttackingx__pfzy) : (__Local__16));
			}
		case 2:
			{
				float  __Local__17 = 0.000000;
				bpv__PlayerHealth__pf = ((IsValid(b0l__K2Node_DynamicCast_AsInfected__AI__pf)) ? (b0l__K2Node_DynamicCast_AsInfected__AI__pf->bpv__PlayerHealth__pf) : (__Local__17));
				CurrentState = -1;
				break;
			}
		case 3:
			{
				float  __Local__18 = 0.000000;
				bpv__AIxHealth__pfG = ((IsValid(b0l__K2Node_DynamicCast_AsInfected__AI__pf)) ? (b0l__K2Node_DynamicCast_AsInfected__AI__pf->bpv__ZombieHealth__pf) : (__Local__18));
				CurrentState = 1;
				break;
			}
		case 4:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue3__pf = TryGetPawnOwner();
				b0l__K2Node_DynamicCast_AsInfected__AI__pf = Cast<AInfectedxAI_C__pfG897084639>(bpv__CallFunc_TryGetPawnOwner_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsInfected__AI__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 3;
				break;
			}
		case 5:
			{
				bpv__Direction__pf = bpv__CallFunc_CalculateDirection_ReturnValue__pf;
			}
		case 6:
			{
				CurrentState = 4;
				break;
			}
		case 7:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf = TryGetPawnOwner();
				if(IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf))
				{
					bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf = bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf->AActor::K2_GetActorRotation();
				}
				if(IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf))
				{
					bpv__CallFunc_GetVelocity_ReturnValue2__pf = bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf->GetVelocity();
				}
				bpv__CallFunc_CalculateDirection_ReturnValue__pf = UAnimInstance::CalculateDirection(bpv__CallFunc_GetVelocity_ReturnValue2__pf, bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf);
				CurrentState = 5;
				break;
			}
		case 9:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				if(IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf))
				{
					bpv__CallFunc_GetMovementComponent_ReturnValue__pf = bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf->GetMovementComponent();
				}
				if(IsValid(bpv__CallFunc_GetMovementComponent_ReturnValue__pf))
				{
					bpv__CallFunc_IsFalling_ReturnValue__pf = bpv__CallFunc_GetMovementComponent_ReturnValue__pf->IsFalling();
				}
				bpv__IsInAirx__pfzy = bpv__CallFunc_IsFalling_ReturnValue__pf;
			}
		case 10:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				if(IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf))
				{
					bpv__CallFunc_GetVelocity_ReturnValue__pf = bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf->GetVelocity();
				}
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_GetVelocity_ReturnValue__pf);
				bpv__Speed__pf = bpv__CallFunc_VSize_ReturnValue__pf;
				CurrentState = 7;
				break;
			}
		case 12:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 9;
				break;
			}
		case 13:
			{
				CurrentState = 12;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void UInfectedAnimBP_C__pf529494595::bpf__ExecuteUbergraph_InfectedAnimBP__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 19);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(6);
	bpv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue__pf, 0.100000);
	bpv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsAttacking__pf);
	bpv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_Less_FloatFloat_ReturnValue__pf, bpv__CallFunc_Not_PreBool_ReturnValue__pf);
	bpv__AnimGraphNode_TransitionResult_EE5C163644DE1DA5FAB4E1B34451CBA0__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UInfectedAnimBP_C__pf529494595::bpf__ExecuteUbergraph_InfectedAnimBP__pf_2(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 14);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__PlayerHealth__pf, 0.000000);
	bpv__AnimGraphNode_TransitionResult_35D5D07F4BE9F4C94E9EAB85E81818D6__pf.bCanEnterTransition = bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf;
	return; // KCST_GotoReturn
}
void UInfectedAnimBP_C__pf529494595::bpf__ExecuteUbergraph_InfectedAnimBP__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	return; // KCST_GotoReturn
}
void UInfectedAnimBP_C__pf529494595::bpf__ExecuteUbergraph_InfectedAnimBP__pf_4(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 17);
	bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__AIxHealth__pfG, 0.000000);
	bpv__AnimGraphNode_TransitionResult_6F4AD6994C7B3EA573F63A9207EC7390__pf.bCanEnterTransition = bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void UInfectedAnimBP_C__pf529494595::bpf__ExecuteUbergraph_InfectedAnimBP__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 20);
	return; // KCST_GotoReturn
}
void UInfectedAnimBP_C__pf529494595::bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
{
	b0l__K2Node_Event_DeltaTimeX__pf = bpp__DeltaTimeX__pf;
	bpf__ExecuteUbergraph_InfectedAnimBP__pf_0(13);
}
void UInfectedAnimBP_C__pf529494595::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_35D5D07F4BE9F4C94E9EAB85E81818D6__pf()
{
	bpf__ExecuteUbergraph_InfectedAnimBP__pf_2(14);
}
void UInfectedAnimBP_C__pf529494595::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124__pf()
{
	bpf__ExecuteUbergraph_InfectedAnimBP__pf_3(15);
}
void UInfectedAnimBP_C__pf529494595::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_EE5C163644DE1DA5FAB4E1B34451CBA0__pf()
{
	bpf__ExecuteUbergraph_InfectedAnimBP__pf_1(19);
}
void UInfectedAnimBP_C__pf529494595::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3__pf()
{
	bpf__ExecuteUbergraph_InfectedAnimBP__pf_5(20);
}
void UInfectedAnimBP_C__pf529494595::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_6F4AD6994C7B3EA573F63A9207EC7390__pf()
{
	bpf__ExecuteUbergraph_InfectedAnimBP__pf_4(17);
}
void UInfectedAnimBP_C__pf529494595::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__19 = TEXT("/Game/ZombieMixamoModels/Animations/ZombieCop");
	const TCHAR* __Local__20 = TEXT("/Game/ZombieMixamoModels/BlendSpace");
	const TCHAR* __Local__21 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__19, TEXT("zombie_biting"), TEXT("zombie_biting"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("zombie_attack"), TEXT("zombie_attack"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("zombie_dying"), TEXT("zombie_dying"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__20, TEXT("SimpleBlendSpace"), TEXT("SimpleBlendSpace"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__21, TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void UInfectedAnimBP_C__pf529494595::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void UInfectedAnimBP_C__pf529494595::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__22 = TEXT("/Game/Audio/Zombie-Sounds");
	const TCHAR* __Local__23 = TEXT("/Game/Audio/SoundAttenuation");
	const TCHAR* __Local__24 = TEXT("/Game/Weapons");
	const TCHAR* __Local__25 = TEXT("/Game/Images");
	const TCHAR* __Local__26 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__27 = TEXT("/Game/Fonts");
	const TCHAR* __Local__28 = TEXT("/Game/OldTrainFactory/Textures/build");
	const TCHAR* __Local__29 = TEXT("/Game/Audio");
	const TCHAR* __Local__30 = TEXT("/Game/UI/Hud");
	const TCHAR* __Local__31 = TEXT("/Game/Mannequin/Character/Mesh");
	const TCHAR* __Local__32 = TEXT("/Game/Audio/walking-sounds");
	const TCHAR* __Local__33 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__34 = TEXT("/Game/Mannequin/MovementAnimPack");
	const TCHAR* __Local__35 = TEXT("/Game/Mannequin/Animations");
	const TCHAR* __Local__36 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__37 = TEXT("/Game/Mannequin/AngrosEdit");
	const TCHAR* __Local__38 = TEXT("/Game/BulletVFX/Meshes");
	const TCHAR* __Local__39 = TEXT("/Game/Materials");
	const TCHAR* __Local__40 = TEXT("/Game/BulletVFX/Particles");
	const TCHAR* __Local__41 = TEXT("/Game/Mannequin");
	const TCHAR* __Local__42 = TEXT("/Game/Soldier_ru_01/Meshes");
	const TCHAR* __Local__43 = TEXT("/Game/Audio/injured-sounds");
	const TCHAR* __Local__44 = TEXT("/Game/Zombie_01/Animation/Root_Motion");
	const TCHAR* __Local__45 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	const TCHAR* __Local__46 = TEXT("/Game/Mannequin/AngrosEdit/InfectedBlueprints");
	const TCHAR* __Local__47 = TEXT("/Game/UI/LoadingScreens");
	const TCHAR* __Local__48 = TEXT("/Game/UI");
	const TCHAR* __Local__49 = TEXT("/Game/Blueprints");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__22, TEXT("zombie-idle"), TEXT("zombie-idle"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__23, TEXT("3dSound"), TEXT("3dSound"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__22, TEXT("Zombie_-_attack"), TEXT("Zombie_-_attack"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__22, TEXT("zombie-dies"), TEXT("zombie-dies"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__22, TEXT("zombie-idle-2"), TEXT("zombie-idle-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__22, TEXT("zombie-idle-3"), TEXT("zombie-idle-3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__22, TEXT("zombie-detect"), TEXT("zombie-detect"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__22, TEXT("zombie-detect-2"), TEXT("zombie-detect-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__22, TEXT("zombie-dies-02"), TEXT("zombie-dies-02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__24, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__25, TEXT("LoadingScreen-Town"), TEXT("LoadingScreen-Town"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__26, TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__27, TEXT("ADOBESONGSTD-LIGHT"), TEXT("ADOBESONGSTD-LIGHT"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__28, TEXT("Wood_01_D"), TEXT("Wood_01_D"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__29, TEXT("onClick"), TEXT("onClick"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__29, TEXT("hoverSound"), TEXT("hoverSound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__25, TEXT("LowHealthScreen"), TEXT("LowHealthScreen"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__30, TEXT("handgun_img"), TEXT("handgun_img"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__30, TEXT("HealthBar_Full"), TEXT("HealthBar_Full"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__25, TEXT("grunge-01-transparent"), TEXT("grunge-01-transparent"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__27, TEXT("corbel"), TEXT("corbel"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__27, TEXT("corbelb"), TEXT("corbelb"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__29, TEXT("Scary_impact"), TEXT("Scary_impact"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__30, TEXT("Crosshair_HUD"), TEXT("Crosshair_HUD"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__30, TEXT("Crosshair_HUD_Shoot"), TEXT("Crosshair_HUD_Shoot"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__31, TEXT("UE4_Mannequin_Skeleton"), TEXT("UE4_Mannequin_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__32, TEXT("footsteps"), TEXT("footsteps"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__33, TEXT("Pistol_Reload"), TEXT("Pistol_Reload"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__33, TEXT("Pistol_ShootOnce_Montage"), TEXT("Pistol_ShootOnce_Montage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__34, TEXT("ConsoleUse_LH"), TEXT("ConsoleUse_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("CrouchLoop_new"), TEXT("CrouchLoop_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("Crouch2Idle_new"), TEXT("Crouch2Idle_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("PickUp_LH"), TEXT("PickUp_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("Fists_Hit_Right"), TEXT("Fists_Hit_Right"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("Death_1"), TEXT("Death_1"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__33, TEXT("Pistol_SprintStart"), TEXT("Pistol_SprintStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("RunFwdStart"), TEXT("RunFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("JumpRun_LU_Land2Run"), TEXT("JumpRun_LU_Land2Run"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("JumpWalk_RU_Land2Walk"), TEXT("JumpWalk_RU_Land2Walk"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("JumpWalk_RU_Land"), TEXT("JumpWalk_RU_Land"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__35, TEXT("ThirdPersonJump_Loop"), TEXT("ThirdPersonJump_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__36, TEXT("WalkFwdStop_LU"), TEXT("WalkFwdStop_LU"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__36, TEXT("WalkFwdStart"), TEXT("WalkFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("PistolGunUp_IdleToRun"), TEXT("PistolGunUp_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__37, TEXT("Pistol_IdleToRun"), TEXT("Pistol_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__34, TEXT("TurnLt90_Loop"), TEXT("TurnLt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("TurnRt90_Loop"), TEXT("TurnRt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("idleToRun"), TEXT("idleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__37, TEXT("PistolAO"), TEXT("PistolAO"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__37, TEXT("LookAround_1D"), TEXT("LookAround_1D"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__38, TEXT("SM_BulletCasing"), TEXT("SM_BulletCasing"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__39, TEXT("BulletPhysicalMaterial"), TEXT("BulletPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__29, TEXT("Dramatic_Hit_Hard_10"), TEXT("Dramatic_Hit_Hard_10"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__29, TEXT("Death_Scream"), TEXT("Death_Scream"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__29, TEXT("LostIt"), TEXT("LostIt"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__33, TEXT("PistolEquipMontage"), TEXT("PistolEquipMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__29, TEXT("Player_Heal"), TEXT("Player_Heal"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__29, TEXT("SlowHeartbeat"), TEXT("SlowHeartbeat"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__33, TEXT("PistolEquipWeaponAnimMontage"), TEXT("PistolEquipWeaponAnimMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__29, TEXT("Flashlight_ON"), TEXT("Flashlight_ON"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__29, TEXT("Flashlight_OFF"), TEXT("Flashlight_OFF"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__40, TEXT("VFX_Impact_Flesh"), TEXT("VFX_Impact_Flesh"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__40, TEXT("VFX_Impact_Concrete"), TEXT("VFX_Impact_Concrete"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__29, TEXT("Trigger_click_empty"), TEXT("Trigger_click_empty"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__41, TEXT("Climbing"), TEXT("Climbing"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__36, TEXT("Pistol_Idle"), TEXT("Pistol_Idle"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__42, TEXT("Soldier_ru_01"), TEXT("Soldier_ru_01"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__39, TEXT("HumanPhysicalMaterial"), TEXT("HumanPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__43, TEXT("injured-sounds"), TEXT("injured-sounds"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__44, TEXT("Zombie_Chase_1_Full_Loop"), TEXT("Zombie_Chase_1_Full_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__45, TEXT("Copzombie_L_Actisdato"), TEXT("Copzombie_L_Actisdato"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__46, TEXT("Infected-AI"), TEXT("Infected-AI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__37, TEXT("MyChar"), TEXT("MyChar_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__47, TEXT("LoadingScreen-WesternOak"), TEXT("LoadingScreen-WesternOak_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__48, TEXT("DeadScreen"), TEXT("DeadScreen_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__48, TEXT("InGameUI"), TEXT("InGameUI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__48, TEXT("BP_CrosshairShoot"), TEXT("BP_CrosshairShoot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__48, TEXT("BP_Crosshair"), TEXT("BP_Crosshair_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__37, TEXT("MyAnimBP_Mannequin"), TEXT("MyAnimBP_Mannequin_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__24, TEXT("HandgunBullet"), TEXT("HandgunBullet_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__49, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__49, TEXT("RunCamShake"), TEXT("RunCamShake_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__UInfectedAnimBP_C__pf529494595
{
	FRegisterHelper__UInfectedAnimBP_C__pf529494595()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/ZombieMixamoModels/InfectedAnimBP"), &UInfectedAnimBP_C__pf529494595::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UInfectedAnimBP_C__pf529494595 Instance;
};
FRegisterHelper__UInfectedAnimBP_C__pf529494595 FRegisterHelper__UInfectedAnimBP_C__pf529494595::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
