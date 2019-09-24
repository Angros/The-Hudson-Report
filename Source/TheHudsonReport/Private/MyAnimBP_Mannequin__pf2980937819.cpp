#include "TheHudsonReport.h"
#include "MyAnimBP_Mannequin__pf2980937819.h"
#include "GeneratedCodeHelpers.h"
#include "Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "MyAnimBP_Mannequin__pf2980937819.h"
#include "MyChar__pf2980937819.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
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
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
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
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
#include "Runtime/Engine/Classes/Animation/BlendSpaceBase.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "DmgTypeBP_Environmental__pf2398200284.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "LoadingScreenxWesternOak__pfG3933423829.h"
#include "DeadScreen__pf122804083.h"
#include "InGameUI__pf122804083.h"
#include "BP_CrosshairShoot__pf122804083.h"
#include "BP_Crosshair__pf122804083.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Animation/BlendSpace.h"
#include "Runtime/Engine/Classes/Animation/AimOffsetBlendSpace1D.h"
#include "HandgunBullet__pf3442503945.h"
#include "InfectedxAI__pfG897084639.h"
#include "InfectedAnimBP__pf529494595.h"
#include "M9xwxFlashlight__pfGG2403237688.h"
#include "RunCamShake__pf2403237688.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
UMyAnimBP_Mannequin_C__pf2980937819::UMyAnimBP_Mannequin_C__pf2980937819(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UMyAnimBP_Mannequin_C__pf2980937819::StaticClass() == GetClass()))
	{
		UMyAnimBP_Mannequin_C__pf2980937819::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__AnimGraphNode_Root_7C3702D2409F925B55A820AA3C0C38C0__pf.Result.LinkID = 93;
	bpv__AnimGraphNode_TransitionResult_0FD3FBA14003DBA0180ABEA9725B3765__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_0FD3FBA14003DBA0180ABEA9725B3765"));
	bpv__AnimGraphNode_TransitionResult_4F64279D46062EF9B7CF6193BC453E92__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_4F64279D46062EF9B7CF6193BC453E92"));
	bpv__AnimGraphNode_TransitionResult_73D39B2F4792CEB3225C6FA9E8681F49__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_73D39B2F4792CEB3225C6FA9E8681F49__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_73D39B2F4792CEB3225C6FA9E8681F49__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__0 = bpv__AnimGraphNode_TransitionResult_73D39B2F4792CEB3225C6FA9E8681F49__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__0.SourcePropertyName = FName(TEXT("BeginFirstLevelAnim"));
	__Local__0.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__0.Size = 1;
	__Local__0.PostCopyOperation = EPostCopyOperation::LogicalNegateBool;
	bpv__AnimGraphNode_TransitionResult_9151297B4C7C62EC73B8B39A62573AEC__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_9151297B4C7C62EC73B8B39A62573AEC"));
	bpv__AnimGraphNode_TransitionResult_22030C3F4ED87A965B2D15BFF400D9C6__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_22030C3F4ED87A965B2D15BFF400D9C6"));
	bpv__AnimGraphNode_TransitionResult_A8B9D8FC41C94781152744B97EBCA1E9__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_A8B9D8FC41C94781152744B97EBCA1E9"));
	bpv__AnimGraphNode_TransitionResult_9B7A8A864F9C88552BD0078BB0DDAD92__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_9B7A8A864F9C88552BD0078BB0DDAD92"));
	bpv__AnimGraphNode_TransitionResult_C0ABE6AF4014212EADB33AA12E45020F__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_C0ABE6AF4014212EADB33AA12E45020F"));
	bpv__AnimGraphNode_TransitionResult_573282D44A09426CBF622995F0B295CB__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_573282D44A09426CBF622995F0B295CB"));
	bpv__AnimGraphNode_TransitionResult_715F148B43E79664E6BDF0B7ABF76C5F__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_715F148B43E79664E6BDF0B7ABF76C5F"));
	bpv__AnimGraphNode_TransitionResult_FFF022D6461C925CF15D698AE02BDCBF__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_FFF022D6461C925CF15D698AE02BDCBF__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_FFF022D6461C925CF15D698AE02BDCBF__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__1 = bpv__AnimGraphNode_TransitionResult_FFF022D6461C925CF15D698AE02BDCBF__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__1.SourcePropertyName = FName(TEXT("TakingDamage"));
	__Local__1.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__1.Size = 1;
	__Local__1.PostCopyOperation = EPostCopyOperation::LogicalNegateBool;
	bpv__AnimGraphNode_TransitionResult_CF25E4A5461BD67D94F54EBF2EF70865__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_CF25E4A5461BD67D94F54EBF2EF70865"));
	bpv__AnimGraphNode_TransitionResult_ADD12AAA4CA4D7BEEB74D1B5926E8929__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_ADD12AAA4CA4D7BEEB74D1B5926E8929"));
	bpv__AnimGraphNode_TransitionResult_8B3C658E45EB197AE10FC4A800E1A6C6__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_8B3C658E45EB197AE10FC4A800E1A6C6"));
	bpv__AnimGraphNode_TransitionResult_109DE5334665BB241501758A61E1EB92__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_109DE5334665BB241501758A61E1EB92"));
	bpv__AnimGraphNode_TransitionResult_383B1D2C42A7821657AD00BD0BC916C4__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_383B1D2C42A7821657AD00BD0BC916C4"));
	bpv__AnimGraphNode_TransitionResult_6AE1654D4E4311DC093F1AA942AA8139__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_6AE1654D4E4311DC093F1AA942AA8139"));
	bpv__AnimGraphNode_TransitionResult_D92607A3416CD8B1A466C9BE25D2D90C__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_D92607A3416CD8B1A466C9BE25D2D90C"));
	bpv__AnimGraphNode_TransitionResult_44BB57B24B6A10042A6561A52C90824B__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_44BB57B24B6A10042A6561A52C90824B"));
	bpv__AnimGraphNode_TransitionResult_F154AFE44FB3D5E7372300B8B2B61400__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_F154AFE44FB3D5E7372300B8B2B61400"));
	bpv__AnimGraphNode_TransitionResult_6E4E6E584D879006C8D684923D3ACB8E__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_6E4E6E584D879006C8D684923D3ACB8E"));
	bpv__AnimGraphNode_TransitionResult_7635C58146417CAC541DADBD8E586CF7__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_7635C58146417CAC541DADBD8E586CF7"));
	bpv__AnimGraphNode_TransitionResult_3E2FA962449AFBA8E195E5A7D9BF7105__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_3E2FA962449AFBA8E195E5A7D9BF7105__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_3E2FA962449AFBA8E195E5A7D9BF7105__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__2 = bpv__AnimGraphNode_TransitionResult_3E2FA962449AFBA8E195E5A7D9BF7105__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__2.SourcePropertyName = FName(TEXT("HasAWeapon?"));
	__Local__2.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__2.Size = 1;
	__Local__2.PostCopyOperation = EPostCopyOperation::LogicalNegateBool;
	bpv__AnimGraphNode_TransitionResult_534EC2F2464CDFCDCF516B8C5DBAACC4__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_534EC2F2464CDFCDCF516B8C5DBAACC4"));
	bpv__AnimGraphNode_TransitionResult_0BA5EB7542D89A5026301EB9DFE9B98F__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_0BA5EB7542D89A5026301EB9DFE9B98F"));
	bpv__AnimGraphNode_TransitionResult_71750ECA4BFC231CAEEEE9A8BE87DCE3__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_71750ECA4BFC231CAEEEE9A8BE87DCE3"));
	bpv__AnimGraphNode_TransitionResult_A182F3B84BBB4ABA051F99BFB9AAAB07__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_A182F3B84BBB4ABA051F99BFB9AAAB07__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_A182F3B84BBB4ABA051F99BFB9AAAB07__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__3 = bpv__AnimGraphNode_TransitionResult_A182F3B84BBB4ABA051F99BFB9AAAB07__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__3.SourcePropertyName = FName(TEXT("TakingDamage"));
	__Local__3.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__3.Size = 1;
	bpv__AnimGraphNode_TransitionResult_9F933FC74BB2C4482B440DBAC079AC1C__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_9F933FC74BB2C4482B440DBAC079AC1C"));
	bpv__AnimGraphNode_TransitionResult_B26D2A3246A77C89752F02A65E2B9B49__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_B26D2A3246A77C89752F02A65E2B9B49__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_B26D2A3246A77C89752F02A65E2B9B49__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__4 = bpv__AnimGraphNode_TransitionResult_B26D2A3246A77C89752F02A65E2B9B49__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__4.SourcePropertyName = FName(TEXT("IsInAir?"));
	__Local__4.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__4.Size = 1;
	bpv__AnimGraphNode_TransitionResult_11A6AAD04D031EFE6A63EBAFD7A3A221__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_11A6AAD04D031EFE6A63EBAFD7A3A221"));
	bpv__AnimGraphNode_TransitionResult_4355FD1E459E8D9D4F822CB7A9516D5A__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_4355FD1E459E8D9D4F822CB7A9516D5A"));
	bpv__AnimGraphNode_TransitionResult_5821A86440622115833E14B4B9CF7779__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_5821A86440622115833E14B4B9CF7779"));
	bpv__AnimGraphNode_TransitionResult_ED0CC38E4BCCEAB2F8423099BA852C1D__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_ED0CC38E4BCCEAB2F8423099BA852C1D"));
	bpv__AnimGraphNode_TransitionResult_67E9587544A620987F03D3AA7E92AF8B__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_67E9587544A620987F03D3AA7E92AF8B__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_67E9587544A620987F03D3AA7E92AF8B__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__5 = bpv__AnimGraphNode_TransitionResult_67E9587544A620987F03D3AA7E92AF8B__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__5.SourcePropertyName = FName(TEXT("BeginFirstLevelAnim"));
	__Local__5.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__5.Size = 1;
	bpv__AnimGraphNode_TransitionResult_1CA6E21240EA51CCC3DB3B970B016FCE__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_1CA6E21240EA51CCC3DB3B970B016FCE"));
	bpv__AnimGraphNode_TransitionResult_29799D5846B680C6C5038787D85A2F48__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_29799D5846B680C6C5038787D85A2F48"));
	bpv__AnimGraphNode_TransitionResult_1B46A7F247E1AE873843409C1C410636__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_1B46A7F247E1AE873843409C1C410636__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_1B46A7F247E1AE873843409C1C410636__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__6 = bpv__AnimGraphNode_TransitionResult_1B46A7F247E1AE873843409C1C410636__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__6.SourcePropertyName = FName(TEXT("TakingDamage"));
	__Local__6.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__6.Size = 1;
	bpv__AnimGraphNode_TransitionResult_5C25FDFB46F185AED2903A9986BF5824__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_5C25FDFB46F185AED2903A9986BF5824"));
	bpv__AnimGraphNode_TransitionResult_3C19255E4FC60B71EDF658B59DD8FF1F__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_3C19255E4FC60B71EDF658B59DD8FF1F"));
	bpv__AnimGraphNode_TransitionResult_FE0F46CC410BB79D87ECF68F1E09139E__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_FE0F46CC410BB79D87ECF68F1E09139E__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_FE0F46CC410BB79D87ECF68F1E09139E__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__7 = bpv__AnimGraphNode_TransitionResult_FE0F46CC410BB79D87ECF68F1E09139E__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__7.SourcePropertyName = FName(TEXT("IsInAir?"));
	__Local__7.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__7.Size = 1;
	bpv__AnimGraphNode_TransitionResult_34AFFD5546FA571F04C54791760FB1A1__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_34AFFD5546FA571F04C54791760FB1A1__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_34AFFD5546FA571F04C54791760FB1A1__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__8 = bpv__AnimGraphNode_TransitionResult_34AFFD5546FA571F04C54791760FB1A1__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__8.SourcePropertyName = FName(TEXT("HasAWeapon?"));
	__Local__8.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__8.Size = 1;
	bpv__AnimGraphNode_TransitionResult_EE1F591146D6F67B9B2188B96E19C52A__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_EE1F591146D6F67B9B2188B96E19C52A"));
	bpv__AnimGraphNode_TransitionResult_CD1DDB14437AA60B81A9539ACCE80C6B__pf.EvaluateGraphExposedInputs.BoundFunction = FName(TEXT("EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_CD1DDB14437AA60B81A9539ACCE80C6B"));
	bpv__AnimGraphNode_SequencePlayer_FA68C61B4F29037811A34DB0FFB385E8__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_FA68C61B4F29037811A34DB0FFB385E8__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_06B9A6C841E86825627A2E854313E928__pf.Result.LinkID = 44;
	bpv__AnimGraphNode_SequencePlayer_928386C8477694F7ACAD639EA73FD60A__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_StateResult_E018DF624889C47354284B8088BBCA67__pf.Result.LinkID = 46;
	bpv__AnimGraphNode_SequencePlayer_EB61F382486A1158B658798B49C0F3EB__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_EB61F382486A1158B658798B49C0F3EB__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_SequencePlayer_EB61F382486A1158B658798B49C0F3EB__pf.PlayRate = 0.500000f;
	bpv__AnimGraphNode_StateResult_85288A104A58980020EAF29CD0727354__pf.Result.LinkID = 48;
	bpv__AnimGraphNode_SequencePlayer_5106B73E424863A400D7058D5E5A36362__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_5106B73E424863A400D7058D5E5A36362__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_88315C8D4E99B9732C17A8A4FE3F38B02__pf.Result.LinkID = 50;
	bpv__AnimGraphNode_SequencePlayer_5106B73E424863A400D7058D5E5A3636__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_5106B73E424863A400D7058D5E5A3636__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_88315C8D4E99B9732C17A8A4FE3F38B0__pf.Result.LinkID = 52;
	bpv__AnimGraphNode_SequencePlayer_892C48C043A9B7E15851F799D4471E8F__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_StateResult_6653121043D30FF1201D31BC09DBDF02__pf.Result.LinkID = 54;
	bpv__AnimGraphNode_SequencePlayer_08E34BAE432DDF19D5BF46870968F6F9__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_08E34BAE432DDF19D5BF46870968F6F9__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_DBC8699644DE2163B77C80B2B26C1DC5__pf.Result.LinkID = 56;
	bpv__AnimGraphNode_SequencePlayer_5FACD5FB4EFBA3B980DBB1AA20079FC4__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_5FACD5FB4EFBA3B980DBB1AA20079FC4__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_909382A342606E4319EEEE8182C8BF65__pf.Result.LinkID = 58;
	bpv__AnimGraphNode_SequencePlayer_02F89AD44BB9F51B4AF822BAE31D8063__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_02F89AD44BB9F51B4AF822BAE31D8063__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_ECC1FF2847316744403D7EACCC20C1F5__pf.Result.LinkID = 60;
	bpv__AnimGraphNode_SequencePlayer_CDA34E6E4A393177BA82B5854B419588__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_CDA34E6E4A393177BA82B5854B419588__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_4EF25ECA4A4810A3FBC926902BAF3632__pf.Result.LinkID = 62;
	bpv__AnimGraphNode_SequencePlayer_8299374A4B77BB2A617723B2148A5D61__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_8299374A4B77BB2A617723B2148A5D61__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_557091D14FEB161BBDAF8CA4AA817A83__pf.Result.LinkID = 64;
	bpv__AnimGraphNode_SequencePlayer_1FA456594D9F02D2FE3C7EBFA510D345__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_1FA456594D9F02D2FE3C7EBFA510D345__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_E38605204A540FA5CB3C68A243B6903C__pf.Result.LinkID = 66;
	bpv__AnimGraphNode_SequencePlayer_FC6929B74CF41EEBA86278A7A8C88D82__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_StateResult_352234C84DDAFE6B1069C380833D90F2__pf.Result.LinkID = 68;
	bpv__AnimGraphNode_SequencePlayer_B3E5D44747429DD651D1F68B6485216E__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_StateResult_79901CA3419D5E81E7FD4E92B57D765C__pf.Result.LinkID = 70;
	bpv__AnimGraphNode_SequencePlayer_C84C773B4276E62765F25BBA8D867469__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_StateResult_B921BEAF4C456CDF5B8B37A9B8F7CA08__pf.Result.LinkID = 72;
	bpv__AnimGraphNode_BlendSpacePlayer_B94CD6FE45A89F97D5252A88E6D5C0F7__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_BlendSpacePlayer_B94CD6FE45A89F97D5252A88E6D5C0F7__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendSpacePlayer_B94CD6FE45A89F97D5252A88E6D5C0F7__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(2);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendSpacePlayer_B94CD6FE45A89F97D5252A88E6D5C0F7__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 2);
	auto& __Local__9 = bpv__AnimGraphNode_BlendSpacePlayer_B94CD6FE45A89F97D5252A88E6D5C0F7__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__9.SourcePropertyName = FName(TEXT("Direction"));
	__Local__9.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("X"));
	__Local__9.Size = 4;
	auto& __Local__10 = bpv__AnimGraphNode_BlendSpacePlayer_B94CD6FE45A89F97D5252A88E6D5C0F7__pf.EvaluateGraphExposedInputs.CopyRecords[1];
	__Local__10.SourcePropertyName = FName(TEXT("Speed"));
	__Local__10.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("Y"));
	__Local__10.Size = 4;
	bpv__AnimGraphNode_StateResult_7EF487614383EF11760902A25E99D16A__pf.Result.LinkID = 74;
	bpv__AnimGraphNode_BlendSpacePlayer_E57C56644EA81E474C57FA931247D0FF__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_BlendSpacePlayer_E57C56644EA81E474C57FA931247D0FF__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendSpacePlayer_E57C56644EA81E474C57FA931247D0FF__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(2);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendSpacePlayer_E57C56644EA81E474C57FA931247D0FF__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 2);
	auto& __Local__11 = bpv__AnimGraphNode_BlendSpacePlayer_E57C56644EA81E474C57FA931247D0FF__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__11.SourcePropertyName = FName(TEXT("Direction"));
	__Local__11.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("X"));
	__Local__11.Size = 4;
	auto& __Local__12 = bpv__AnimGraphNode_BlendSpacePlayer_E57C56644EA81E474C57FA931247D0FF__pf.EvaluateGraphExposedInputs.CopyRecords[1];
	__Local__12.SourcePropertyName = FName(TEXT("Speed"));
	__Local__12.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("Y"));
	__Local__12.Size = 4;
	bpv__AnimGraphNode_StateResult_2530309C42B9C3D4B6A896AC328360B0__pf.Result.LinkID = 76;
	bpv__AnimGraphNode_SequencePlayer_98D1F382443A1A2EA14590ACC97B5418__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_StateResult_8CB0C92745D7F95435048C9E598E9E74__pf.Result.LinkID = 78;
	bpv__AnimGraphNode_SequencePlayer_EAEA5D0841525AE795113F8C644906F6__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[17], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_StateResult_C20EDA6A48FA13D7DDDBB39E6729CBB3__pf.Result.LinkID = 80;
	bpv__AnimGraphNode_BlendSpacePlayer_D46ABAE548237FBEC37A89B8A78D7F4E__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[18], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_BlendSpacePlayer_D46ABAE548237FBEC37A89B8A78D7F4E__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendSpacePlayer_D46ABAE548237FBEC37A89B8A78D7F4E__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(2);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendSpacePlayer_D46ABAE548237FBEC37A89B8A78D7F4E__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 2);
	auto& __Local__13 = bpv__AnimGraphNode_BlendSpacePlayer_D46ABAE548237FBEC37A89B8A78D7F4E__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__13.SourcePropertyName = FName(TEXT("Direction"));
	__Local__13.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("X"));
	__Local__13.Size = 4;
	auto& __Local__14 = bpv__AnimGraphNode_BlendSpacePlayer_D46ABAE548237FBEC37A89B8A78D7F4E__pf.EvaluateGraphExposedInputs.CopyRecords[1];
	__Local__14.SourcePropertyName = FName(TEXT("Speed"));
	__Local__14.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("Y"));
	__Local__14.Size = 4;
	bpv__AnimGraphNode_StateResult_DF31109E4AFC8ADE77B5E1BDDC468FC8__pf.Result.LinkID = 82;
	bpv__AnimGraphNode_Slot_318CDBAD41604B011CB5478E5147C927__pf.Source.LinkID = 102;
	bpv__AnimGraphNode_Slot_318CDBAD41604B011CB5478E5147C927__pf.SlotName = FName(TEXT("WeaponHolsterSlot"));
	bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.BasePose.LinkID = 98;
	bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.BlendPoses = TArray<FPoseLink> ();
	bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.BlendPoses.AddUninitialized(1);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.BlendPoses.GetData(), 1);
	auto& __Local__15 = bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.BlendPoses[0];
	__Local__15.LinkID = 90;
	bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.LayerSetup = TArray<FInputBlendPose> ();
	bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.LayerSetup.AddUninitialized(1);
	FInputBlendPose::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.LayerSetup.GetData(), 1);
	auto& __Local__16 = bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.LayerSetup[0];
	__Local__16.BranchFilters = TArray<FBranchFilter> ();
	__Local__16.BranchFilters.AddUninitialized(1);
	FBranchFilter::StaticStruct()->InitializeStruct(__Local__16.BranchFilters.GetData(), 1);
	auto& __Local__17 = __Local__16.BranchFilters[0];
	__Local__17.BoneName = FName(TEXT("spine_01"));
	__Local__17.BlendDepth = 2;
	bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.BlendWeights = TArray<float> ();
	bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.BlendWeights.Reserve(1);
	bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.BlendWeights.Add(1.000000f);
	bpv__AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3__pf.bMeshSpaceRotationBlend = true;
	bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.BlendPose = TArray<FPoseLink> ();
	bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.BlendPose.AddUninitialized(2);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.BlendPose.GetData(), 2);
	auto& __Local__18 = bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.BlendPose[0];
	__Local__18.LinkID = 122;
	auto& __Local__19 = bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.BlendPose[1];
	__Local__19.LinkID = 106;
	bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.BlendTime = TArray<float> ();
	bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.BlendTime.Reserve(2);
	bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__20 = bpv__AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__20.SourcePropertyName = FName(TEXT("HasAWeapon?"));
	__Local__20.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_BlendListByBool::StaticStruct(), TEXT("bActiveValue"));
	__Local__20.Size = 1;
	bpv__AnimGraphNode_SaveCachedPose_5B566E274D18743A04501C894703D3D4__pf.Pose.LinkID = 84;
	bpv__AnimGraphNode_SaveCachedPose_5B566E274D18743A04501C894703D3D4__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_UseCachedPose_164454744C1DB86A4510DE8E0F82600F__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_164454744C1DB86A4510DE8E0F82600F__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_RotationOffsetBlendSpace_003C97EC462007A97705B5B638A65D04__pf.BasePose.LinkID = 99;
	bpv__AnimGraphNode_RotationOffsetBlendSpace_003C97EC462007A97705B5B638A65D04__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[19], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_RotationOffsetBlendSpace_003C97EC462007A97705B5B638A65D04__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_RotationOffsetBlendSpace_003C97EC462007A97705B5B638A65D04__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_RotationOffsetBlendSpace_003C97EC462007A97705B5B638A65D04__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__21 = bpv__AnimGraphNode_RotationOffsetBlendSpace_003C97EC462007A97705B5B638A65D04__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__21.SourcePropertyName = FName(TEXT("Pitch"));
	__Local__21.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("X"));
	__Local__21.Size = 4;
	bpv__AnimGraphNode_RotationOffsetBlendSpace_4F0385894D98B059CB731A83D4513C93__pf.BasePose.LinkID = 109;
	bpv__AnimGraphNode_RotationOffsetBlendSpace_4F0385894D98B059CB731A83D4513C93__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[20], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_RotationOffsetBlendSpace_4F0385894D98B059CB731A83D4513C93__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_RotationOffsetBlendSpace_4F0385894D98B059CB731A83D4513C93__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_RotationOffsetBlendSpace_4F0385894D98B059CB731A83D4513C93__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__22 = bpv__AnimGraphNode_RotationOffsetBlendSpace_4F0385894D98B059CB731A83D4513C93__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__22.SourcePropertyName = FName(TEXT("Pitch"));
	__Local__22.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("X"));
	__Local__22.Size = 4;
	bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.BasePose.LinkID = 89;
	bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.BlendPoses = TArray<FPoseLink> ();
	bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.BlendPoses.AddUninitialized(1);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.BlendPoses.GetData(), 1);
	auto& __Local__23 = bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.BlendPoses[0];
	__Local__23.LinkID = 91;
	bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.LayerSetup = TArray<FInputBlendPose> ();
	bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.LayerSetup.AddUninitialized(1);
	FInputBlendPose::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.LayerSetup.GetData(), 1);
	auto& __Local__24 = bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.LayerSetup[0];
	__Local__24.BranchFilters = TArray<FBranchFilter> ();
	__Local__24.BranchFilters.AddUninitialized(1);
	FBranchFilter::StaticStruct()->InitializeStruct(__Local__24.BranchFilters.GetData(), 1);
	auto& __Local__25 = __Local__24.BranchFilters[0];
	__Local__25.BoneName = FName(TEXT("neck_01"));
	__Local__25.BlendDepth = 2;
	bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.BlendWeights = TArray<float> ();
	bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.BlendWeights.Reserve(1);
	bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.BlendWeights.Add(1.000000f);
	bpv__AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89__pf.bMeshSpaceRotationBlend = true;
	bpv__AnimGraphNode_Slot_13B25521440C69CDF604DDA8217A8815__pf.Source.LinkID = 87;
	bpv__AnimGraphNode_Slot_13B25521440C69CDF604DDA8217A8815__pf.SlotName = FName(TEXT("ClimbingSlot"));
	bpv__AnimGraphNode_Slot_9347B0CE46689D1452E25D873D4F534C__pf.Source.LinkID = 95;
	bpv__AnimGraphNode_Slot_9347B0CE46689D1452E25D873D4F534C__pf.SlotName = FName(TEXT("ShootWeaponSlot"));
	bpv__AnimGraphNode_UseCachedPose_EA1C1230461418AEFAEE398EEDFB5127__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_EA1C1230461418AEFAEE398EEDFB5127__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_UseCachedPose_2F52028E420E50F1B4B1AF85F5F25887__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_2F52028E420E50F1B4B1AF85F5F25887__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_SaveCachedPose_983B5D0B43D1C1EAB8D733AEFE46E4B8__pf.Pose.LinkID = 101;
	bpv__AnimGraphNode_SaveCachedPose_983B5D0B43D1C1EAB8D733AEFE46E4B8__pf.CachePoseName = FName(TEXT("Shooting"));
	bpv__AnimGraphNode_UseCachedPose_9C87E6D740817325816CFF98CE2297F5__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_9C87E6D740817325816CFF98CE2297F5__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.BlendPose = TArray<FPoseLink> ();
	bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.BlendPose.AddUninitialized(2);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.BlendPose.GetData(), 2);
	auto& __Local__26 = bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.BlendPose[0];
	__Local__26.LinkID = 100;
	auto& __Local__27 = bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.BlendPose[1];
	__Local__27.LinkID = 112;
	bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.BlendTime = TArray<float> ();
	bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.BlendTime.Reserve(2);
	bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__28 = bpv__AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__28.SourcePropertyName = FName(TEXT("IsShooting"));
	__Local__28.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_BlendListByBool::StaticStruct(), TEXT("bActiveValue"));
	__Local__28.Size = 1;
	bpv__AnimGraphNode_UseCachedPose_0E3AB960458F5617132FE7AB5F74EED6__pf.LinkToCachingNode.LinkID = 97;
	bpv__AnimGraphNode_UseCachedPose_0E3AB960458F5617132FE7AB5F74EED6__pf.CachePoseName = FName(TEXT("Shooting"));
	bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.BasePose.LinkID = 96;
	bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.BlendPoses = TArray<FPoseLink> ();
	bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.BlendPoses.AddUninitialized(1);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.BlendPoses.GetData(), 1);
	auto& __Local__29 = bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.BlendPoses[0];
	__Local__29.LinkID = 94;
	bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.LayerSetup = TArray<FInputBlendPose> ();
	bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.LayerSetup.AddUninitialized(1);
	FInputBlendPose::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.LayerSetup.GetData(), 1);
	auto& __Local__30 = bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.LayerSetup[0];
	__Local__30.BranchFilters = TArray<FBranchFilter> ();
	__Local__30.BranchFilters.AddUninitialized(5);
	FBranchFilter::StaticStruct()->InitializeStruct(__Local__30.BranchFilters.GetData(), 5);
	auto& __Local__31 = __Local__30.BranchFilters[0];
	__Local__31.BoneName = FName(TEXT("lowerarm_l"));
	__Local__31.BlendDepth = 12;
	auto& __Local__32 = __Local__30.BranchFilters[1];
	__Local__32.BoneName = FName(TEXT("lowerarm_r"));
	__Local__32.BlendDepth = 11;
	auto& __Local__33 = __Local__30.BranchFilters[2];
	__Local__33.BoneName = FName(TEXT("upperarm_l"));
	__Local__33.BlendDepth = 14;
	auto& __Local__34 = __Local__30.BranchFilters[3];
	__Local__34.BoneName = FName(TEXT("upperarm_r"));
	__Local__34.BlendDepth = 14;
	auto& __Local__35 = __Local__30.BranchFilters[4];
	__Local__35.BoneName = FName(TEXT("spine_01"));
	__Local__35.BlendDepth = 16;
	bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.BlendWeights = TArray<float> ();
	bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.BlendWeights.Reserve(1);
	bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.BlendWeights.Add(1.000000f);
	bpv__AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3__pf.bMeshSpaceRotationBlend = true;
	bpv__AnimGraphNode_UseCachedPose_56A6909542A844C52D774389BC40486D__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_56A6909542A844C52D774389BC40486D__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_SaveCachedPose_15CAF85746836C278B6DA286ACC4FE8A__pf.Pose.LinkID = 86;
	bpv__AnimGraphNode_SaveCachedPose_15CAF85746836C278B6DA286ACC4FE8A__pf.CachePoseName = FName(TEXT("AimOffset"));
	bpv__AnimGraphNode_SaveCachedPose_99107FCB4EEEE8B2F6FD83A962130EAE__pf.Pose.LinkID = 92;
	bpv__AnimGraphNode_SaveCachedPose_99107FCB4EEEE8B2F6FD83A962130EAE__pf.CachePoseName = FName(TEXT("Head(Cam) Offset"));
	bpv__AnimGraphNode_UseCachedPose_D5364D9B44352326C518BF849B869787__pf.LinkToCachingNode.LinkID = 103;
	bpv__AnimGraphNode_UseCachedPose_D5364D9B44352326C518BF849B869787__pf.CachePoseName = FName(TEXT("AimOffset"));
	bpv__AnimGraphNode_UseCachedPose_FB01C9A34C282182402BA3B8B2DCA02B__pf.LinkToCachingNode.LinkID = 104;
	bpv__AnimGraphNode_UseCachedPose_FB01C9A34C282182402BA3B8B2DCA02B__pf.CachePoseName = FName(TEXT("Head(Cam) Offset"));
	bpv__AnimGraphNode_UseCachedPose_5A2C1EE44067CF86B7A5F5A14A48F3A1__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_5A2C1EE44067CF86B7A5F5A14A48F3A1__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_Slot_057373E84A683CE43B4F46B39CBDCA8D__pf.Source.LinkID = 110;
	bpv__AnimGraphNode_Slot_057373E84A683CE43B4F46B39CBDCA8D__pf.SlotName = FName(TEXT("WeaponHolsterSlot"));
	bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.BasePose.LinkID = 111;
	bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.BlendPoses = TArray<FPoseLink> ();
	bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.BlendPoses.AddUninitialized(1);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.BlendPoses.GetData(), 1);
	auto& __Local__36 = bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.BlendPoses[0];
	__Local__36.LinkID = 108;
	bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.LayerSetup = TArray<FInputBlendPose> ();
	bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.LayerSetup.AddUninitialized(1);
	FInputBlendPose::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.LayerSetup.GetData(), 1);
	auto& __Local__37 = bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.LayerSetup[0];
	__Local__37.BranchFilters = TArray<FBranchFilter> ();
	__Local__37.BranchFilters.AddUninitialized(1);
	FBranchFilter::StaticStruct()->InitializeStruct(__Local__37.BranchFilters.GetData(), 1);
	auto& __Local__38 = __Local__37.BranchFilters[0];
	__Local__38.BoneName = FName(TEXT("root"));
	__Local__38.BlendDepth = 5;
	bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.BlendWeights = TArray<float> ();
	bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.BlendWeights.Reserve(1);
	bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.BlendWeights.Add(1.000000f);
	bpv__AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF__pf.bMeshSpaceRotationBlend = true;
	bpv__AnimGraphNode_UseCachedPose_5926A23546F8D98F70496DBF429D49FE__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_5926A23546F8D98F70496DBF429D49FE__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_UseCachedPose_BD375E0A41361B8CAC2682A89BBF32D7__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_BD375E0A41361B8CAC2682A89BBF32D7__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.BlendPose = TArray<FPoseLink> ();
	bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.BlendPose.AddUninitialized(2);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.BlendPose.GetData(), 2);
	auto& __Local__39 = bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.BlendPose[0];
	__Local__39.LinkID = 114;
	auto& __Local__40 = bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.BlendPose[1];
	__Local__40.LinkID = 117;
	bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.BlendTime = TArray<float> ();
	bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.BlendTime.Reserve(2);
	bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__41 = bpv__AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__41.SourcePropertyName = FName(TEXT("IsRunning"));
	__Local__41.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_BlendListByBool::StaticStruct(), TEXT("bActiveValue"));
	__Local__41.Size = 1;
	bpv__AnimGraphNode_Slot_F7ECD00549259B9ED042728EE94FCB63__pf.Source.LinkID = 115;
	bpv__AnimGraphNode_Slot_F7ECD00549259B9ED042728EE94FCB63__pf.SlotName = FName(TEXT("WeaponHolsterSlot"));
	bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.BasePose.LinkID = 116;
	bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.BlendPoses = TArray<FPoseLink> ();
	bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.BlendPoses.AddUninitialized(1);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.BlendPoses.GetData(), 1);
	auto& __Local__42 = bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.BlendPoses[0];
	__Local__42.LinkID = 113;
	bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.LayerSetup = TArray<FInputBlendPose> ();
	bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.LayerSetup.AddUninitialized(1);
	FInputBlendPose::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.LayerSetup.GetData(), 1);
	auto& __Local__43 = bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.LayerSetup[0];
	__Local__43.BranchFilters = TArray<FBranchFilter> ();
	__Local__43.BranchFilters.AddUninitialized(1);
	FBranchFilter::StaticStruct()->InitializeStruct(__Local__43.BranchFilters.GetData(), 1);
	auto& __Local__44 = __Local__43.BranchFilters[0];
	__Local__44.BoneName = FName(TEXT("root"));
	__Local__44.BlendDepth = 5;
	bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.BlendWeights = TArray<float> ();
	bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.BlendWeights.Reserve(1);
	bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.BlendWeights.Add(1.000000f);
	bpv__AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5__pf.bMeshSpaceRotationBlend = true;
	bpv__AnimGraphNode_UseCachedPose_193D0268480C633C6A9B0D88EDF761C4__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_193D0268480C633C6A9B0D88EDF761C4__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_UseCachedPose_66E00CAA47195A4AA524E29329083C9C__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_66E00CAA47195A4AA524E29329083C9C__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.BasePose.LinkID = 107;
	bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.BlendPoses = TArray<FPoseLink> ();
	bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.BlendPoses.AddUninitialized(1);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.BlendPoses.GetData(), 1);
	auto& __Local__45 = bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.BlendPoses[0];
	__Local__45.LinkID = 85;
	bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.LayerSetup = TArray<FInputBlendPose> ();
	bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.LayerSetup.AddUninitialized(1);
	FInputBlendPose::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.LayerSetup.GetData(), 1);
	auto& __Local__46 = bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.LayerSetup[0];
	__Local__46.BranchFilters = TArray<FBranchFilter> ();
	__Local__46.BranchFilters.AddUninitialized(1);
	FBranchFilter::StaticStruct()->InitializeStruct(__Local__46.BranchFilters.GetData(), 1);
	auto& __Local__47 = __Local__46.BranchFilters[0];
	__Local__47.BoneName = FName(TEXT("root"));
	__Local__47.BlendDepth = 5;
	bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.BlendWeights = TArray<float> ();
	bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.BlendWeights.Reserve(1);
	bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.BlendWeights.Add(1.000000f);
	bpv__AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33__pf.bMeshSpaceRotationBlend = true;
	bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.BasePose.LinkID = 119;
	bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.BlendPoses = TArray<FPoseLink> ();
	bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.BlendPoses.AddUninitialized(1);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.BlendPoses.GetData(), 1);
	auto& __Local__48 = bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.BlendPoses[0];
	__Local__48.LinkID = 121;
	bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.LayerSetup = TArray<FInputBlendPose> ();
	bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.LayerSetup.AddUninitialized(1);
	FInputBlendPose::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.LayerSetup.GetData(), 1);
	auto& __Local__49 = bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.LayerSetup[0];
	__Local__49.BranchFilters = TArray<FBranchFilter> ();
	__Local__49.BranchFilters.AddUninitialized(1);
	FBranchFilter::StaticStruct()->InitializeStruct(__Local__49.BranchFilters.GetData(), 1);
	auto& __Local__50 = __Local__49.BranchFilters[0];
	__Local__50.BoneName = FName(TEXT("spine_01"));
	__Local__50.BlendDepth = 2;
	bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.BlendWeights = TArray<float> ();
	bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.BlendWeights.Reserve(1);
	bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.BlendWeights.Add(1.000000f);
	bpv__AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A__pf.bMeshSpaceRotationBlend = true;
	bpv__AnimGraphNode_UseCachedPose_9E9BB7ED42B029AD4F519EBCDB152DCC__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_9E9BB7ED42B029AD4F519EBCDB152DCC__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_UseCachedPose_8F58AF8D48D4004C28719D830A2D8B3A__pf.LinkToCachingNode.LinkID = 88;
	bpv__AnimGraphNode_UseCachedPose_8F58AF8D48D4004C28719D830A2D8B3A__pf.CachePoseName = FName(TEXT("MainPose"));
	bpv__AnimGraphNode_Slot_AA7690BA45DF40EF30D0FC89BDC44844__pf.Source.LinkID = 120;
	bpv__AnimGraphNode_Slot_AA7690BA45DF40EF30D0FC89BDC44844__pf.SlotName = FName(TEXT("ReloadWeaponSlot"));
	bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.BlendPose = TArray<FPoseLink> ();
	bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.BlendPose.AddUninitialized(2);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.BlendPose.GetData(), 2);
	auto& __Local__51 = bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.BlendPose[0];
	__Local__51.LinkID = 118;
	auto& __Local__52 = bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.BlendPose[1];
	__Local__52.LinkID = 105;
	bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.BlendTime = TArray<float> ();
	bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.BlendTime.Reserve(2);
	bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__53 = bpv__AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__53.SourcePropertyName = FName(TEXT("isReloading"));
	__Local__53.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_BlendListByBool::StaticStruct(), TEXT("bActiveValue"));
	__Local__53.Size = 1;
	bpv__MyChar__pf = nullptr;
	bpv__Speed__pf = 0.000000f;
	bpv__Direction__pf = 0.000000f;
	bpv__TurnRight__pf = false;
	bpv__IsMovingx__pfzy = false;
	bpv__TurnLeft__pf = false;
	bpv__Pitch__pf = 0.000000f;
	bpv__HasWeaponAttachedx__pfzy = false;
	bpv__HasAWeaponx__pfzy = false;
	bpv__IsShooting__pf = false;
	bpv__IsInAirx__pfzy = false;
	bpv__IsRunning__pf = false;
	bpv__StartRun__pf = false;
	bpv__isReloading__pf = false;
	bpv__CharHealth__pf = 0.000000f;
	bpv__TakingDamage__pf = false;
	bpv__Interactx__pfzy = false;
	bpv__CanPickUpx__pfzy = false;
	bpv__BeginFirstLevelAnim__pf = false;
	bpv__OpenGatex__pfzy = false;
}
void UMyAnimBP_Mannequin_C__pf2980937819::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UMyAnimBP_Mannequin_C__pf2980937819::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
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
	extern UClass* Z_Construct_UClass_AHandgunBullet_C__pf3442503945();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AHandgunBullet_C__pf3442503945());
	extern UClass* Z_Construct_UClass_AInfectedxAI_C__pfG897084639();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AInfectedxAI_C__pfG897084639());
	extern UClass* Z_Construct_UClass_UInfectedAnimBP_C__pf529494595();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInfectedAnimBP_C__pf529494595());
	extern UClass* Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688());
	extern UClass* Z_Construct_UClass_URunCamShake_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_URunCamShake_C__pf2403237688());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__54 = NewObject<UAnimClassData>(InDynamicClass, TEXT("AnimClassData"));
	__Local__54->BakedStateMachines = TArray<FBakedAnimationStateMachine> ();
	__Local__54->BakedStateMachines.AddUninitialized(1);
	FBakedAnimationStateMachine::StaticStruct()->InitializeStruct(__Local__54->BakedStateMachines.GetData(), 1);
	auto& __Local__55 = __Local__54->BakedStateMachines[0];
	__Local__55.MachineName = FName(TEXT("Movement"));
	__Local__55.InitialState = 0;
	__Local__55.States = TArray<FBakedAnimationState> ();
	__Local__55.States.AddUninitialized(20);
	FBakedAnimationState::StaticStruct()->InitializeStruct(__Local__55.States.GetData(), 20);
	auto& __Local__56 = __Local__55.States[0];
	__Local__56.StateName = FName(TEXT("idle/walk/run"));
	__Local__56.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__56.Transitions.AddUninitialized(11);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__56.Transitions.GetData(), 11);
	auto& __Local__57 = __Local__56.Transitions[0];
	__Local__57.CanTakeDelegateIndex = 79;
	__Local__57.TransitionIndex = 21;
	auto& __Local__58 = __Local__56.Transitions[1];
	__Local__58.CanTakeDelegateIndex = 80;
	__Local__58.TransitionIndex = 1;
	auto& __Local__59 = __Local__56.Transitions[2];
	__Local__59.CanTakeDelegateIndex = 81;
	__Local__59.TransitionIndex = 4;
	auto& __Local__60 = __Local__56.Transitions[3];
	__Local__60.CanTakeDelegateIndex = 82;
	__Local__60.TransitionIndex = 6;
	auto& __Local__61 = __Local__56.Transitions[4];
	__Local__61.CanTakeDelegateIndex = 83;
	__Local__61.TransitionIndex = 13;
	auto& __Local__62 = __Local__56.Transitions[5];
	__Local__62.CanTakeDelegateIndex = 84;
	__Local__62.TransitionIndex = 0;
	auto& __Local__63 = __Local__56.Transitions[6];
	__Local__63.CanTakeDelegateIndex = 85;
	__Local__63.TransitionIndex = 23;
	auto& __Local__64 = __Local__56.Transitions[7];
	__Local__64.CanTakeDelegateIndex = 86;
	__Local__64.TransitionIndex = 28;
	auto& __Local__65 = __Local__56.Transitions[8];
	__Local__65.CanTakeDelegateIndex = 87;
	__Local__65.TransitionIndex = 32;
	auto& __Local__66 = __Local__56.Transitions[9];
	__Local__66.CanTakeDelegateIndex = 88;
	__Local__66.TransitionIndex = 37;
	auto& __Local__67 = __Local__56.Transitions[10];
	__Local__67.CanTakeDelegateIndex = 89;
	__Local__67.TransitionIndex = 40;
	__Local__56.StateRootNodeIndex = 39;
	__Local__56.PlayerNodeIndices = TArray<int32> ();
	__Local__56.PlayerNodeIndices.Reserve(1);
	__Local__56.PlayerNodeIndices.Add(40);
	auto& __Local__68 = __Local__55.States[1];
	__Local__68.StateName = FName(TEXT("right turn"));
	__Local__68.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__68.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__68.Transitions.GetData(), 1);
	auto& __Local__69 = __Local__68.Transitions[0];
	__Local__69.CanTakeDelegateIndex = 90;
	__Local__69.TransitionIndex = 2;
	__Local__68.StateRootNodeIndex = 41;
	__Local__68.PlayerNodeIndices = TArray<int32> ();
	__Local__68.PlayerNodeIndices.Reserve(1);
	__Local__68.PlayerNodeIndices.Add(42);
	auto& __Local__70 = __Local__55.States[2];
	__Local__70.StateName = FName(TEXT("left turn"));
	__Local__70.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__70.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__70.Transitions.GetData(), 1);
	auto& __Local__71 = __Local__70.Transitions[0];
	__Local__71.CanTakeDelegateIndex = 91;
	__Local__71.TransitionIndex = 3;
	__Local__70.StateRootNodeIndex = 43;
	__Local__70.PlayerNodeIndices = TArray<int32> ();
	__Local__70.PlayerNodeIndices.Reserve(1);
	__Local__70.PlayerNodeIndices.Add(44);
	auto& __Local__72 = __Local__55.States[3];
	__Local__72.StateName = FName(TEXT("pistol idle/walk/run"));
	__Local__72.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__72.Transitions.AddUninitialized(8);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__72.Transitions.GetData(), 8);
	auto& __Local__73 = __Local__72.Transitions[0];
	__Local__73.CanTakeDelegateIndex = 92;
	__Local__73.TransitionIndex = 15;
	auto& __Local__74 = __Local__72.Transitions[1];
	__Local__74.CanTakeDelegateIndex = 93;
	__Local__74.TransitionIndex = 17;
	auto& __Local__75 = __Local__72.Transitions[2];
	__Local__75.CanTakeDelegateIndex = 94;
	__Local__75.TransitionIndex = 22;
	auto& __Local__76 = __Local__72.Transitions[3];
	__Local__76.CanTakeDelegateIndex = 95;
	__Local__76.TransitionIndex = 25;
	auto& __Local__77 = __Local__72.Transitions[4];
	__Local__77.CanTakeDelegateIndex = 96;
	__Local__77.TransitionIndex = 30;
	auto& __Local__78 = __Local__72.Transitions[5];
	__Local__78.CanTakeDelegateIndex = 97;
	__Local__78.TransitionIndex = 34;
	auto& __Local__79 = __Local__72.Transitions[6];
	__Local__79.CanTakeDelegateIndex = 98;
	__Local__79.TransitionIndex = 41;
	auto& __Local__80 = __Local__72.Transitions[7];
	__Local__80.CanTakeDelegateIndex = 99;
	__Local__80.TransitionIndex = 5;
	__Local__72.StateRootNodeIndex = 45;
	__Local__72.PlayerNodeIndices = TArray<int32> ();
	__Local__72.PlayerNodeIndices.Reserve(1);
	__Local__72.PlayerNodeIndices.Add(46);
	auto& __Local__81 = __Local__55.States[4];
	__Local__81.StateName = FName(TEXT("PistolGunUp_IdleToRun"));
	__Local__81.StateRootNodeIndex = 47;
	__Local__81.PlayerNodeIndices = TArray<int32> ();
	__Local__81.PlayerNodeIndices.Reserve(1);
	__Local__81.PlayerNodeIndices.Add(48);
	auto& __Local__82 = __Local__55.States[5];
	__Local__82.StateName = FName(TEXT("WalkFwdStart"));
	__Local__82.StateRootNodeIndex = 49;
	__Local__82.PlayerNodeIndices = TArray<int32> ();
	__Local__82.PlayerNodeIndices.Reserve(1);
	__Local__82.PlayerNodeIndices.Add(50);
	auto& __Local__83 = __Local__55.States[6];
	__Local__83.StateName = FName(TEXT("WalkFwdStop_LU"));
	__Local__83.StateRootNodeIndex = 51;
	__Local__83.PlayerNodeIndices = TArray<int32> ();
	__Local__83.PlayerNodeIndices.Reserve(1);
	__Local__83.PlayerNodeIndices.Add(52);
	auto& __Local__84 = __Local__55.States[7];
	__Local__84.StateName = FName(TEXT("JumpLoop"));
	__Local__84.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__84.Transitions.AddUninitialized(3);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__84.Transitions.GetData(), 3);
	auto& __Local__85 = __Local__84.Transitions[0];
	__Local__85.CanTakeDelegateIndex = 100;
	__Local__85.TransitionIndex = 9;
	auto& __Local__86 = __Local__84.Transitions[1];
	__Local__86.CanTakeDelegateIndex = 101;
	__Local__86.TransitionIndex = 10;
	auto& __Local__87 = __Local__84.Transitions[2];
	__Local__87.CanTakeDelegateIndex = 102;
	__Local__87.TransitionIndex = 8;
	__Local__84.StateRootNodeIndex = 53;
	__Local__84.PlayerNodeIndices = TArray<int32> ();
	__Local__84.PlayerNodeIndices.Reserve(1);
	__Local__84.PlayerNodeIndices.Add(54);
	auto& __Local__88 = __Local__55.States[8];
	__Local__88.StateName = FName(TEXT("JumpEnd"));
	__Local__88.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__88.Transitions.AddUninitialized(2);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__88.Transitions.GetData(), 2);
	auto& __Local__89 = __Local__88.Transitions[0];
	__Local__89.CanTakeDelegateIndex = 103;
	__Local__89.TransitionIndex = 18;
	auto& __Local__90 = __Local__88.Transitions[1];
	__Local__90.CanTakeDelegateIndex = 104;
	__Local__90.TransitionIndex = 7;
	__Local__88.StateRootNodeIndex = 55;
	__Local__88.PlayerNodeIndices = TArray<int32> ();
	__Local__88.PlayerNodeIndices.Reserve(1);
	__Local__88.PlayerNodeIndices.Add(56);
	auto& __Local__91 = __Local__55.States[9];
	__Local__91.StateName = FName(TEXT("JumpEndWalking"));
	__Local__91.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__91.Transitions.AddUninitialized(2);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__91.Transitions.GetData(), 2);
	auto& __Local__92 = __Local__91.Transitions[0];
	__Local__92.CanTakeDelegateIndex = 105;
	__Local__92.TransitionIndex = 20;
	auto& __Local__93 = __Local__91.Transitions[1];
	__Local__93.CanTakeDelegateIndex = 106;
	__Local__93.TransitionIndex = 12;
	__Local__91.StateRootNodeIndex = 57;
	__Local__91.PlayerNodeIndices = TArray<int32> ();
	__Local__91.PlayerNodeIndices.Reserve(1);
	__Local__91.PlayerNodeIndices.Add(58);
	auto& __Local__94 = __Local__55.States[10];
	__Local__94.StateName = FName(TEXT("JumpEndRunning"));
	__Local__94.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__94.Transitions.AddUninitialized(2);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__94.Transitions.GetData(), 2);
	auto& __Local__95 = __Local__94.Transitions[0];
	__Local__95.CanTakeDelegateIndex = 107;
	__Local__95.TransitionIndex = 19;
	auto& __Local__96 = __Local__94.Transitions[1];
	__Local__96.CanTakeDelegateIndex = 108;
	__Local__96.TransitionIndex = 11;
	__Local__94.StateRootNodeIndex = 59;
	__Local__94.PlayerNodeIndices = TArray<int32> ();
	__Local__94.PlayerNodeIndices.Reserve(1);
	__Local__94.PlayerNodeIndices.Add(60);
	auto& __Local__97 = __Local__55.States[11];
	__Local__97.StateName = FName(TEXT("RunStart"));
	__Local__97.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__97.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__97.Transitions.GetData(), 1);
	auto& __Local__98 = __Local__97.Transitions[0];
	__Local__98.CanTakeDelegateIndex = 109;
	__Local__98.TransitionIndex = 14;
	__Local__97.StateRootNodeIndex = 61;
	__Local__97.PlayerNodeIndices = TArray<int32> ();
	__Local__97.PlayerNodeIndices.Reserve(1);
	__Local__97.PlayerNodeIndices.Add(62);
	auto& __Local__99 = __Local__55.States[12];
	__Local__99.StateName = FName(TEXT("RunStartPistol"));
	__Local__99.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__99.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__99.Transitions.GetData(), 1);
	auto& __Local__100 = __Local__99.Transitions[0];
	__Local__100.CanTakeDelegateIndex = 110;
	__Local__100.TransitionIndex = 16;
	__Local__99.StateRootNodeIndex = 63;
	__Local__99.PlayerNodeIndices = TArray<int32> ();
	__Local__99.PlayerNodeIndices.Reserve(1);
	__Local__99.PlayerNodeIndices.Add(64);
	auto& __Local__101 = __Local__55.States[13];
	__Local__101.StateName = FName(TEXT("Dead"));
	__Local__101.StateRootNodeIndex = 65;
	__Local__101.PlayerNodeIndices = TArray<int32> ();
	__Local__101.PlayerNodeIndices.Reserve(1);
	__Local__101.PlayerNodeIndices.Add(66);
	auto& __Local__102 = __Local__55.States[14];
	__Local__102.StateName = FName(TEXT("DamageTaken"));
	__Local__102.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__102.Transitions.AddUninitialized(3);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__102.Transitions.GetData(), 3);
	auto& __Local__103 = __Local__102.Transitions[0];
	__Local__103.CanTakeDelegateIndex = 111;
	__Local__103.TransitionIndex = 26;
	auto& __Local__104 = __Local__102.Transitions[1];
	__Local__104.CanTakeDelegateIndex = 112;
	__Local__104.TransitionIndex = 27;
	auto& __Local__105 = __Local__102.Transitions[2];
	__Local__105.CanTakeDelegateIndex = 113;
	__Local__105.TransitionIndex = 24;
	__Local__102.StateRootNodeIndex = 67;
	__Local__102.PlayerNodeIndices = TArray<int32> ();
	__Local__102.PlayerNodeIndices.Reserve(1);
	__Local__102.PlayerNodeIndices.Add(68);
	auto& __Local__106 = __Local__55.States[15];
	__Local__106.StateName = FName(TEXT("PickUpAmmo"));
	__Local__106.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__106.Transitions.AddUninitialized(2);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__106.Transitions.GetData(), 2);
	auto& __Local__107 = __Local__106.Transitions[0];
	__Local__107.CanTakeDelegateIndex = 114;
	__Local__107.TransitionIndex = 31;
	auto& __Local__108 = __Local__106.Transitions[1];
	__Local__108.CanTakeDelegateIndex = 115;
	__Local__108.TransitionIndex = 29;
	__Local__106.StateRootNodeIndex = 69;
	__Local__106.PlayerNodeIndices = TArray<int32> ();
	__Local__106.PlayerNodeIndices.Reserve(1);
	__Local__106.PlayerNodeIndices.Add(72);
	auto& __Local__109 = __Local__55.States[16];
	__Local__109.StateName = FName(TEXT("PickUpMedkit"));
	__Local__109.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__109.Transitions.AddUninitialized(2);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__109.Transitions.GetData(), 2);
	auto& __Local__110 = __Local__109.Transitions[0];
	__Local__110.CanTakeDelegateIndex = 116;
	__Local__110.TransitionIndex = 35;
	auto& __Local__111 = __Local__109.Transitions[1];
	__Local__111.CanTakeDelegateIndex = 117;
	__Local__111.TransitionIndex = 33;
	__Local__109.StateRootNodeIndex = 71;
	__Local__109.PlayerNodeIndices = TArray<int32> ();
	__Local__109.PlayerNodeIndices.Reserve(1);
	__Local__109.PlayerNodeIndices.Add(72);
	auto& __Local__112 = __Local__55.States[17];
	__Local__112.StateName = FName(TEXT("FirstLevelIntroAnim"));
	__Local__112.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__112.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__112.Transitions.GetData(), 1);
	auto& __Local__113 = __Local__112.Transitions[0];
	__Local__113.CanTakeDelegateIndex = 118;
	__Local__113.TransitionIndex = 36;
	__Local__112.StateRootNodeIndex = 73;
	__Local__112.PlayerNodeIndices = TArray<int32> ();
	__Local__112.PlayerNodeIndices.Reserve(1);
	__Local__112.PlayerNodeIndices.Add(74);
	auto& __Local__114 = __Local__55.States[18];
	__Local__114.StateName = FName(TEXT("FirstLvlIntroAnim"));
	__Local__114.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__114.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__114.Transitions.GetData(), 1);
	auto& __Local__115 = __Local__114.Transitions[0];
	__Local__115.CanTakeDelegateIndex = 119;
	__Local__115.TransitionIndex = 38;
	__Local__114.StateRootNodeIndex = 75;
	__Local__114.PlayerNodeIndices = TArray<int32> ();
	__Local__114.PlayerNodeIndices.Reserve(1);
	__Local__114.PlayerNodeIndices.Add(76);
	auto& __Local__116 = __Local__55.States[19];
	__Local__116.StateName = FName(TEXT("InteractConsole"));
	__Local__116.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__116.Transitions.AddUninitialized(2);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__116.Transitions.GetData(), 2);
	auto& __Local__117 = __Local__116.Transitions[0];
	__Local__117.CanTakeDelegateIndex = 120;
	__Local__117.TransitionIndex = 42;
	auto& __Local__118 = __Local__116.Transitions[1];
	__Local__118.CanTakeDelegateIndex = 121;
	__Local__118.TransitionIndex = 39;
	__Local__116.StateRootNodeIndex = 77;
	__Local__116.PlayerNodeIndices = TArray<int32> ();
	__Local__116.PlayerNodeIndices.Reserve(1);
	__Local__116.PlayerNodeIndices.Add(78);
	__Local__55.Transitions = TArray<FAnimationTransitionBetweenStates> ();
	__Local__55.Transitions.AddUninitialized(43);
	FAnimationTransitionBetweenStates::StaticStruct()->InitializeStruct(__Local__55.Transitions.GetData(), 43);
	auto& __Local__119 = __Local__55.Transitions[0];
	__Local__119.PreviousState = 0;
	__Local__119.NextState = 1;
	__Local__119.CrossfadeDuration = 0.200000f;
	__Local__119.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__120 = __Local__55.Transitions[1];
	__Local__120.PreviousState = 0;
	__Local__120.NextState = 2;
	__Local__120.CrossfadeDuration = 0.200000f;
	__Local__120.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__121 = __Local__55.Transitions[2];
	__Local__121.PreviousState = 1;
	__Local__121.NextState = 0;
	__Local__121.CrossfadeDuration = 0.200000f;
	__Local__121.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__122 = __Local__55.Transitions[3];
	__Local__122.PreviousState = 2;
	__Local__122.NextState = 0;
	__Local__122.CrossfadeDuration = 0.200000f;
	__Local__122.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__123 = __Local__55.Transitions[4];
	__Local__123.PreviousState = 0;
	__Local__123.NextState = 3;
	__Local__123.CrossfadeDuration = 0.200000f;
	__Local__123.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__124 = __Local__55.Transitions[5];
	__Local__124.PreviousState = 3;
	__Local__124.NextState = 0;
	__Local__124.CrossfadeDuration = 0.200000f;
	__Local__124.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__125 = __Local__55.Transitions[6];
	__Local__125.PreviousState = 0;
	__Local__125.NextState = 7;
	__Local__125.CrossfadeDuration = 0.200000f;
	__Local__125.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__126 = __Local__55.Transitions[7];
	__Local__126.PreviousState = 8;
	__Local__126.NextState = 0;
	__Local__126.CrossfadeDuration = 0.200000f;
	__Local__126.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__127 = __Local__55.Transitions[8];
	__Local__127.PreviousState = 7;
	__Local__127.NextState = 8;
	__Local__127.CrossfadeDuration = 0.200000f;
	__Local__127.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__128 = __Local__55.Transitions[9];
	__Local__128.PreviousState = 7;
	__Local__128.NextState = 9;
	__Local__128.CrossfadeDuration = 0.200000f;
	__Local__128.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__129 = __Local__55.Transitions[10];
	__Local__129.PreviousState = 7;
	__Local__129.NextState = 10;
	__Local__129.CrossfadeDuration = 0.200000f;
	__Local__129.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__130 = __Local__55.Transitions[11];
	__Local__130.PreviousState = 10;
	__Local__130.NextState = 0;
	__Local__130.CrossfadeDuration = 0.200000f;
	__Local__130.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__131 = __Local__55.Transitions[12];
	__Local__131.PreviousState = 9;
	__Local__131.NextState = 0;
	__Local__131.CrossfadeDuration = 0.200000f;
	__Local__131.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__132 = __Local__55.Transitions[13];
	__Local__132.PreviousState = 0;
	__Local__132.NextState = 11;
	__Local__132.CrossfadeDuration = 0.200000f;
	__Local__132.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__133 = __Local__55.Transitions[14];
	__Local__133.PreviousState = 11;
	__Local__133.NextState = 0;
	__Local__133.CrossfadeDuration = 0.200000f;
	__Local__133.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__134 = __Local__55.Transitions[15];
	__Local__134.PreviousState = 3;
	__Local__134.NextState = 12;
	__Local__134.CrossfadeDuration = 0.200000f;
	__Local__134.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__135 = __Local__55.Transitions[16];
	__Local__135.PreviousState = 12;
	__Local__135.NextState = 3;
	__Local__135.CrossfadeDuration = 0.200000f;
	__Local__135.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__136 = __Local__55.Transitions[17];
	__Local__136.PreviousState = 3;
	__Local__136.NextState = 7;
	__Local__136.CrossfadeDuration = 0.200000f;
	__Local__136.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__137 = __Local__55.Transitions[18];
	__Local__137.PreviousState = 8;
	__Local__137.NextState = 3;
	__Local__137.CrossfadeDuration = 0.200000f;
	__Local__137.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__138 = __Local__55.Transitions[19];
	__Local__138.PreviousState = 10;
	__Local__138.NextState = 3;
	__Local__138.CrossfadeDuration = 0.200000f;
	__Local__138.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__139 = __Local__55.Transitions[20];
	__Local__139.PreviousState = 9;
	__Local__139.NextState = 3;
	__Local__139.CrossfadeDuration = 0.200000f;
	__Local__139.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__140 = __Local__55.Transitions[21];
	__Local__140.PreviousState = 0;
	__Local__140.NextState = 13;
	__Local__140.CrossfadeDuration = 0.200000f;
	__Local__140.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__141 = __Local__55.Transitions[22];
	__Local__141.PreviousState = 3;
	__Local__141.NextState = 13;
	__Local__141.CrossfadeDuration = 0.200000f;
	__Local__141.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__142 = __Local__55.Transitions[23];
	__Local__142.PreviousState = 0;
	__Local__142.NextState = 14;
	__Local__142.CrossfadeDuration = 0.200000f;
	__Local__142.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__143 = __Local__55.Transitions[24];
	__Local__143.PreviousState = 14;
	__Local__143.NextState = 0;
	__Local__143.CrossfadeDuration = 0.200000f;
	__Local__143.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__144 = __Local__55.Transitions[25];
	__Local__144.PreviousState = 3;
	__Local__144.NextState = 14;
	__Local__144.CrossfadeDuration = 0.200000f;
	__Local__144.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__145 = __Local__55.Transitions[26];
	__Local__145.PreviousState = 14;
	__Local__145.NextState = 3;
	__Local__145.CrossfadeDuration = 0.200000f;
	__Local__145.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__146 = __Local__55.Transitions[27];
	__Local__146.PreviousState = 14;
	__Local__146.NextState = 13;
	__Local__146.CrossfadeDuration = 0.200000f;
	__Local__146.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__147 = __Local__55.Transitions[28];
	__Local__147.PreviousState = 0;
	__Local__147.NextState = 15;
	__Local__147.CrossfadeDuration = 0.200000f;
	__Local__147.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__148 = __Local__55.Transitions[29];
	__Local__148.PreviousState = 15;
	__Local__148.NextState = 0;
	__Local__148.CrossfadeDuration = 0.200000f;
	__Local__148.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__149 = __Local__55.Transitions[30];
	__Local__149.PreviousState = 3;
	__Local__149.NextState = 15;
	__Local__149.CrossfadeDuration = 0.200000f;
	__Local__149.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__150 = __Local__55.Transitions[31];
	__Local__150.PreviousState = 15;
	__Local__150.NextState = 3;
	__Local__150.CrossfadeDuration = 0.200000f;
	__Local__150.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__151 = __Local__55.Transitions[32];
	__Local__151.PreviousState = 0;
	__Local__151.NextState = 16;
	__Local__151.CrossfadeDuration = 0.200000f;
	__Local__151.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__152 = __Local__55.Transitions[33];
	__Local__152.PreviousState = 16;
	__Local__152.NextState = 0;
	__Local__152.CrossfadeDuration = 0.200000f;
	__Local__152.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__153 = __Local__55.Transitions[34];
	__Local__153.PreviousState = 3;
	__Local__153.NextState = 16;
	__Local__153.CrossfadeDuration = 0.200000f;
	__Local__153.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__154 = __Local__55.Transitions[35];
	__Local__154.PreviousState = 16;
	__Local__154.NextState = 3;
	__Local__154.CrossfadeDuration = 0.200000f;
	__Local__154.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__155 = __Local__55.Transitions[36];
	__Local__155.PreviousState = 17;
	__Local__155.NextState = 0;
	__Local__155.CrossfadeDuration = 0.200000f;
	__Local__155.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__156 = __Local__55.Transitions[37];
	__Local__156.PreviousState = 0;
	__Local__156.NextState = 18;
	__Local__156.CrossfadeDuration = 0.200000f;
	__Local__156.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__157 = __Local__55.Transitions[38];
	__Local__157.PreviousState = 18;
	__Local__157.NextState = 17;
	__Local__157.CrossfadeDuration = 0.200000f;
	__Local__157.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__158 = __Local__55.Transitions[39];
	__Local__158.PreviousState = 19;
	__Local__158.NextState = 0;
	__Local__158.CrossfadeDuration = 0.200000f;
	__Local__158.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__159 = __Local__55.Transitions[40];
	__Local__159.PreviousState = 0;
	__Local__159.NextState = 19;
	__Local__159.CrossfadeDuration = 0.200000f;
	__Local__159.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__160 = __Local__55.Transitions[41];
	__Local__160.PreviousState = 3;
	__Local__160.NextState = 19;
	__Local__160.CrossfadeDuration = 0.200000f;
	__Local__160.BlendMode = EAlphaBlendOption::HermiteCubic;
	auto& __Local__161 = __Local__55.Transitions[42];
	__Local__161.PreviousState = 19;
	__Local__161.NextState = 3;
	__Local__161.CrossfadeDuration = 0.200000f;
	__Local__161.BlendMode = EAlphaBlendOption::HermiteCubic;
	__Local__54->TargetSkeleton = CastChecked<USkeleton>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[21], ECastCheckedType::NullAllowed);
	__Local__54->RootAnimNodeIndex = 122;
	__Local__54->OrderedSavedPoseIndices = TArray<int32> ();
	__Local__54->OrderedSavedPoseIndices.Reserve(4);
	__Local__54->OrderedSavedPoseIndices.Add(19);
	__Local__54->OrderedSavedPoseIndices.Add(25);
	__Local__54->OrderedSavedPoseIndices.Add(18);
	__Local__54->OrderedSavedPoseIndices.Add(34);
	__Local__54->RootAnimNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_7C3702D2409F925B55A820AA3C0C38C0"));
	__Local__54->AnimNodeProperties = TArray<UStructProperty*> ();
	__Local__54->AnimNodeProperties.Reserve(123);
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_7C3702D2409F925B55A820AA3C0C38C0")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_0FD3FBA14003DBA0180ABEA9725B3765")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_4F64279D46062EF9B7CF6193BC453E92")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_73D39B2F4792CEB3225C6FA9E8681F49")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_9151297B4C7C62EC73B8B39A62573AEC")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_22030C3F4ED87A965B2D15BFF400D9C6")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_A8B9D8FC41C94781152744B97EBCA1E9")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_9B7A8A864F9C88552BD0078BB0DDAD92")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_C0ABE6AF4014212EADB33AA12E45020F")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_573282D44A09426CBF622995F0B295CB")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_715F148B43E79664E6BDF0B7ABF76C5F")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_FFF022D6461C925CF15D698AE02BDCBF")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_CF25E4A5461BD67D94F54EBF2EF70865")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_ADD12AAA4CA4D7BEEB74D1B5926E8929")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_8B3C658E45EB197AE10FC4A800E1A6C6")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_109DE5334665BB241501758A61E1EB92")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_383B1D2C42A7821657AD00BD0BC916C4")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_6AE1654D4E4311DC093F1AA942AA8139")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_D92607A3416CD8B1A466C9BE25D2D90C")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_44BB57B24B6A10042A6561A52C90824B")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_F154AFE44FB3D5E7372300B8B2B61400")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_6E4E6E584D879006C8D684923D3ACB8E")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_7635C58146417CAC541DADBD8E586CF7")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_3E2FA962449AFBA8E195E5A7D9BF7105")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_534EC2F2464CDFCDCF516B8C5DBAACC4")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_0BA5EB7542D89A5026301EB9DFE9B98F")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_71750ECA4BFC231CAEEEE9A8BE87DCE3")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_A182F3B84BBB4ABA051F99BFB9AAAB07")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_9F933FC74BB2C4482B440DBAC079AC1C")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_B26D2A3246A77C89752F02A65E2B9B49")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_11A6AAD04D031EFE6A63EBAFD7A3A221")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_4355FD1E459E8D9D4F822CB7A9516D5A")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_5821A86440622115833E14B4B9CF7779")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_ED0CC38E4BCCEAB2F8423099BA852C1D")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_67E9587544A620987F03D3AA7E92AF8B")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_1CA6E21240EA51CCC3DB3B970B016FCE")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_29799D5846B680C6C5038787D85A2F48")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_1B46A7F247E1AE873843409C1C410636")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_5C25FDFB46F185AED2903A9986BF5824")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_3C19255E4FC60B71EDF658B59DD8FF1F")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_FE0F46CC410BB79D87ECF68F1E09139E")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_34AFFD5546FA571F04C54791760FB1A1")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_EE1F591146D6F67B9B2188B96E19C52A")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_CD1DDB14437AA60B81A9539ACCE80C6B")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_FA68C61B4F29037811A34DB0FFB385E8")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_06B9A6C841E86825627A2E854313E928")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_928386C8477694F7ACAD639EA73FD60A")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_E018DF624889C47354284B8088BBCA67")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_EB61F382486A1158B658798B49C0F3EB")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_85288A104A58980020EAF29CD0727354")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_5106B73E424863A400D7058D5E5A36362")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_88315C8D4E99B9732C17A8A4FE3F38B02")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_5106B73E424863A400D7058D5E5A3636")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_88315C8D4E99B9732C17A8A4FE3F38B0")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_892C48C043A9B7E15851F799D4471E8F")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_6653121043D30FF1201D31BC09DBDF02")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_08E34BAE432DDF19D5BF46870968F6F9")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_DBC8699644DE2163B77C80B2B26C1DC5")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_5FACD5FB4EFBA3B980DBB1AA20079FC4")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_909382A342606E4319EEEE8182C8BF65")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_02F89AD44BB9F51B4AF822BAE31D8063")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_ECC1FF2847316744403D7EACCC20C1F5")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_CDA34E6E4A393177BA82B5854B419588")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_4EF25ECA4A4810A3FBC926902BAF3632")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_8299374A4B77BB2A617723B2148A5D61")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_557091D14FEB161BBDAF8CA4AA817A83")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_1FA456594D9F02D2FE3C7EBFA510D345")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_E38605204A540FA5CB3C68A243B6903C")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_FC6929B74CF41EEBA86278A7A8C88D82")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_352234C84DDAFE6B1069C380833D90F2")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_B3E5D44747429DD651D1F68B6485216E")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_79901CA3419D5E81E7FD4E92B57D765C")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_C84C773B4276E62765F25BBA8D867469")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_B921BEAF4C456CDF5B8B37A9B8F7CA08")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendSpacePlayer_B94CD6FE45A89F97D5252A88E6D5C0F7")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_7EF487614383EF11760902A25E99D16A")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendSpacePlayer_E57C56644EA81E474C57FA931247D0FF")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_2530309C42B9C3D4B6A896AC328360B0")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_98D1F382443A1A2EA14590ACC97B5418")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_8CB0C92745D7F95435048C9E598E9E74")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_EAEA5D0841525AE795113F8C644906F6")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_C20EDA6A48FA13D7DDDBB39E6729CBB3")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendSpacePlayer_D46ABAE548237FBEC37A89B8A78D7F4E")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_DF31109E4AFC8ADE77B5E1BDDC468FC8")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateMachine_5ACE148740E6B8C12A9481825B97C8EA")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Slot_318CDBAD41604B011CB5478E5147C927")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_LayeredBoneBlend_1668C8704F05812EFD8CB085CF538AF3")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SaveCachedPose_5B566E274D18743A04501C894703D3D4")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_164454744C1DB86A4510DE8E0F82600F")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_RotationOffsetBlendSpace_003C97EC462007A97705B5B638A65D04")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_RotationOffsetBlendSpace_4F0385894D98B059CB731A83D4513C93")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_LayeredBoneBlend_7AE064AC4E904B82743A778958374B89")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Slot_13B25521440C69CDF604DDA8217A8815")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Slot_9347B0CE46689D1452E25D873D4F534C")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_EA1C1230461418AEFAEE398EEDFB5127")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_2F52028E420E50F1B4B1AF85F5F25887")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SaveCachedPose_983B5D0B43D1C1EAB8D733AEFE46E4B8")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_9C87E6D740817325816CFF98CE2297F5")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_0E3AB960458F5617132FE7AB5F74EED6")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_LayeredBoneBlend_5703EE5F4B152C13AB94F6AFEB6E15B3")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_56A6909542A844C52D774389BC40486D")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SaveCachedPose_15CAF85746836C278B6DA286ACC4FE8A")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SaveCachedPose_99107FCB4EEEE8B2F6FD83A962130EAE")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_D5364D9B44352326C518BF849B869787")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_FB01C9A34C282182402BA3B8B2DCA02B")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_5A2C1EE44067CF86B7A5F5A14A48F3A1")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Slot_057373E84A683CE43B4F46B39CBDCA8D")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_LayeredBoneBlend_9A6D5F2A4F4565A3C425ECB3733EB0AF")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_5926A23546F8D98F70496DBF429D49FE")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_BD375E0A41361B8CAC2682A89BBF32D7")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Slot_F7ECD00549259B9ED042728EE94FCB63")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_LayeredBoneBlend_1244CA784538BB521AD35486C48FFCA5")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_193D0268480C633C6A9B0D88EDF761C4")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_66E00CAA47195A4AA524E29329083C9C")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_LayeredBoneBlend_07D3F9E847A291E8DB58DEA9E546AA33")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_LayeredBoneBlend_ED2AD28D4993F8D2E8B3A8BD6D8BAA4A")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_9E9BB7ED42B029AD4F519EBCDB152DCC")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_UseCachedPose_8F58AF8D48D4004C28719D830A2D8B3A")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Slot_AA7690BA45DF40EF30D0FC89BDC44844")));
	__Local__54->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D")));
	InDynamicClass->AnimClassImplementation = __Local__54;
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_0(int32 bpp__EntryPoint__pf)
{
	APawn* bpv__CallFunc_TryGetPawnOwner_ReturnValue4__pf{};
	FVector bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_LineTraceSingle_NEW_ReturnValue__pf{};
	TEnumAsByte<EPhysicalSurface> bpv__CallFunc_GetSurfaceType_ReturnValue__pf{};
	UAudioComponent* bpv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				UKismetSystemLibrary::Delay(this, 0.200000, FLatentActionInfo(2, -212678981, TEXT("ExecuteUbergraph_MyAnimBP_Mannequin_0"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 2:
			{
			}
		case 3:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = false;
			}
		case 4:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				b0l__Temp_object_Variable__pf = CastChecked<USoundBase>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[22], ECastCheckedType::NullAllowed);
				b0l__Temp_object_Variable2__pf = nullptr;
				b0l__Temp_object_Variable3__pf = nullptr;
				b0l__Temp_object_Variable4__pf = nullptr;
				b0l__Temp_object_Variable5__pf = nullptr;
				bpv__CallFunc_GetSurfaceType_ReturnValue__pf = UGameplayStatics::GetSurfaceType(b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf);
				b0l__Temp_byte_Variable__pf = bpv__CallFunc_GetSurfaceType_ReturnValue__pf;
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__CallFunc_SpawnSoundAtLocation_ReturnValue__pf = UGameplayStatics::SpawnSoundAtLocation(this, TSwitchValue<TEnumAsByte<EPhysicalSurface> , USoundBase* >(b0l__Temp_byte_Variable__pf, b0l__K2Node_Select_Default__pf, 5, TSwitchPair<TEnumAsByte<EPhysicalSurface> , USoundBase* >(EPhysicalSurface::SurfaceType_Default, b0l__Temp_object_Variable__pf), TSwitchPair<TEnumAsByte<EPhysicalSurface> , USoundBase* >(EPhysicalSurface::SurfaceType1, b0l__Temp_object_Variable2__pf), TSwitchPair<TEnumAsByte<EPhysicalSurface> , USoundBase* >(EPhysicalSurface::SurfaceType2, b0l__Temp_object_Variable3__pf), TSwitchPair<TEnumAsByte<EPhysicalSurface> , USoundBase* >(EPhysicalSurface::SurfaceType3, b0l__Temp_object_Variable4__pf), TSwitchPair<TEnumAsByte<EPhysicalSurface> , USoundBase* >(EPhysicalSurface::SurfaceType4, b0l__Temp_object_Variable5__pf)), b0l__CallFunc_BreakHitResult_ImpactPoint__pf, FRotator(0.000000,0.000000,0.000000), 1.000000, 1.000000, 0.000000, nullptr, nullptr);
				CurrentState = 1;
				break;
			}
		case 6:
			{
			}
		case 7:
			{
				StateStack.Push(8);
				CurrentState = 10;
				break;
			}
		case 8:
			{
			}
		case 9:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					CurrentState = 14;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					CurrentState = 11;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 12:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 15:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue4__pf = TryGetPawnOwner();
				b0l__K2Node_MakeArray_Array__pf.SetNum(1, true);
				b0l__K2Node_MakeArray_Array__pf[0] = bpv__CallFunc_TryGetPawnOwner_ReturnValue4__pf;
				if(IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue4__pf))
				{
					bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf = bpv__CallFunc_TryGetPawnOwner_ReturnValue4__pf->AActor::K2_GetActorLocation();
				}
				bpv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf, FVector(0.000000,0.000000,-500.000000));
				bpv__CallFunc_LineTraceSingle_NEW_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle_NEW(this, bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf, bpv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, b0l__K2Node_MakeArray_Array__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
				CurrentState = 5;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_1(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue3__pf{};
	bool bpv__CallFunc_Not_PreBool_ReturnValue7__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue21__pf{};
	check(bpp__EntryPoint__pf == 138);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpv__Speed__pf, 0.000000);
	bpv__CallFunc_Not_PreBool_ReturnValue7__pf = UKismetMathLibrary::Not_PreBool(bpv__IsInAirx__pfzy);
	bpv__CallFunc_BooleanAND_ReturnValue21__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_Not_PreBool_ReturnValue7__pf, bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue3__pf);
	bpv__AnimGraphNode_TransitionResult_F154AFE44FB3D5E7372300B8B2B61400__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue21__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_2(int32 bpp__EntryPoint__pf)
{
	APawn* bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	UPawnMovementComponent* bpv__CallFunc_GetMovementComponent_ReturnValue__pf{};
	bool bpv__CallFunc_IsFalling_ReturnValue__pf{};
	APawn* bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf{};
	APawn* bpv__CallFunc_TryGetPawnOwner_ReturnValue3__pf{};
	FVector bpv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	float bpv__CallFunc_VSize_ReturnValue__pf{};
	FVector bpv__CallFunc_GetVelocity_ReturnValue2__pf(EForceInit::ForceInit);
	float bpv__CallFunc_CalculateDirection_ReturnValue__pf{};
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	AActor* bpv__CallFunc_GetOwningActor_ReturnValue3__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 17:
			{
				AActor*  __Local__163 = nullptr;
				bpv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(((IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__CurrentWeapon__pf) : (__Local__163)));
				bpv__HasAWeaponx__pfzy = bpv__CallFunc_IsValid_ReturnValue2__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpf__Reload__pf();
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 20:
			{
				bpv__CallFunc_GetOwningActor_ReturnValue3__pf = UAnimInstance::GetOwningActor();
				b0l__K2Node_DynamicCast_AsMy_Char5__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetOwningActor_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsMy_Char5__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess5__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 17;
				break;
			}
		case 24:
			{
				bpf__Shoot__pf();
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 28:
			{
				StateStack.Push(29);
				CurrentState = 33;
				break;
			}
		case 29:
			{
				StateStack.Push(30);
				CurrentState = 20;
				break;
			}
		case 30:
			{
			}
		case 31:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 32:
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
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				b0l__K2Node_DynamicCast_AsMy_Char2__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsMy_Char2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 34:
			{
				bpv__MyChar__pf = b0l__K2Node_DynamicCast_AsMy_Char2__pf;
			}
		case 35:
			{
				bool  __Local__164 = false;
				bpv__IsRunning__pf = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__IsRunningx__pfzy) : (__Local__164));
			}
		case 36:
			{
				bool  __Local__165 = false;
				bpv__StartRun__pf = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__StartRun__pf) : (__Local__165));
			}
		case 37:
			{
				StateStack.Push(38);
				CurrentState = 53;
				break;
			}
		case 38:
			{
				StateStack.Push(39);
				CurrentState = 51;
				break;
			}
		case 39:
			{
				StateStack.Push(40);
				CurrentState = 54;
				break;
			}
		case 40:
			{
				StateStack.Push(41);
				CurrentState = 59;
				break;
			}
		case 41:
			{
				StateStack.Push(42);
				CurrentState = 61;
				break;
			}
		case 42:
			{
				StateStack.Push(43);
				CurrentState = 62;
				break;
			}
		case 43:
			{
				StateStack.Push(44);
				CurrentState = 75;
				break;
			}
		case 44:
			{
				StateStack.Push(45);
				CurrentState = 87;
				break;
			}
		case 45:
			{
				StateStack.Push(46);
				CurrentState = 88;
				break;
			}
		case 46:
			{
			}
		case 47:
			{
				bool  __Local__166 = false;
				bpv__Interactx__pfzy = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__Interactx__pfzy) : (__Local__166));
			}
		case 48:
			{
				bool  __Local__167 = false;
				bpv__CanPickUpx__pfzy = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__CanPickUpx__pfzy) : (__Local__167));
			}
		case 49:
			{
				bool  __Local__168 = false;
				bpv__BeginFirstLevelAnim__pf = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__AnimFirstLvl__pf) : (__Local__168));
			}
		case 50:
			{
				bool  __Local__169 = false;
				bpv__OpenGatex__pfzy = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__OpenGatex__pfzy) : (__Local__169));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 51:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue3__pf = TryGetPawnOwner();
				if(IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue3__pf))
				{
					bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf = bpv__CallFunc_TryGetPawnOwner_ReturnValue3__pf->AActor::K2_GetActorRotation();
				}
				if(IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue3__pf))
				{
					bpv__CallFunc_GetVelocity_ReturnValue2__pf = bpv__CallFunc_TryGetPawnOwner_ReturnValue3__pf->GetVelocity();
				}
				bpv__CallFunc_CalculateDirection_ReturnValue__pf = UAnimInstance::CalculateDirection(bpv__CallFunc_GetVelocity_ReturnValue2__pf, bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf);
			}
		case 52:
			{
				bpv__Direction__pf = bpv__CallFunc_CalculateDirection_ReturnValue__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 53:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf = TryGetPawnOwner();
				if(IsValid(bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf))
				{
					bpv__CallFunc_GetVelocity_ReturnValue__pf = bpv__CallFunc_TryGetPawnOwner_ReturnValue2__pf->GetVelocity();
				}
				bpv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpv__CallFunc_GetVelocity_ReturnValue__pf);
				bpv__Speed__pf = bpv__CallFunc_VSize_ReturnValue__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 54:
			{
				bpv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__Speed__pf, 0.100000);
				if (!bpv__CallFunc_Greater_FloatFloat_ReturnValue2__pf)
				{
					CurrentState = 57;
					break;
				}
			}
		case 55:
			{
				bpv__IsMovingx__pfzy = true;
			}
		case 56:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpf__SetIsMoving__pf(bpv__IsMovingx__pfzy);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 57:
			{
				bpv__IsMovingx__pfzy = false;
			}
		case 58:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpf__SetIsMoving__pf(bpv__IsMovingx__pfzy);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				bool  __Local__170 = false;
				bpv__TurnRight__pf = ((IsValid(bpv__MyChar__pf)) ? (bpv__MyChar__pf->bpv__TurnRight__pf) : (__Local__170));
			}
		case 60:
			{
				bool  __Local__171 = false;
				bpv__TurnLeft__pf = ((IsValid(bpv__MyChar__pf)) ? (bpv__MyChar__pf->bpv__TurnLeft__pf) : (__Local__171));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 61:
			{
				float  __Local__172 = 0.000000;
				bpv__Pitch__pf = ((IsValid(bpv__MyChar__pf)) ? (bpv__MyChar__pf->bpv__Pitch__pf) : (__Local__172));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 62:
			{
				bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				b0l__K2Node_DynamicCast_AsMy_Char__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_TryGetPawnOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMy_Char__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 63:
			{
				bool  __Local__173 = false;
				bpv__IsShooting__pf = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char__pf->bpv__IsShooting__pf) : (__Local__173));
			}
		case 64:
			{
				if (!bpv__IsShooting__pf)
				{
					CurrentState = 73;
					break;
				}
			}
		case 65:
			{
				StateStack.Push(66);
				CurrentState = 69;
				break;
			}
		case 66:
			{
			}
		case 67:
			{
				if (!b0l__Temp_bool_IsClosed_Variable3__pf)
				{
					CurrentState = 68;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 68:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
				CurrentState = 24;
				break;
			}
		case 69:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable3__pf)
				{
					CurrentState = 70;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 70:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable3__pf = true;
			}
		case 71:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 72:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 73:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = false;
			}
		case 74:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable3__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 75:
			{
				bool  __Local__174 = false;
				bpv__isReloading__pf = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char__pf->bpv__isReloadingx__pfzy) : (__Local__174));
			}
		case 76:
			{
				if (!bpv__isReloading__pf)
				{
					CurrentState = 85;
					break;
				}
			}
		case 77:
			{
				StateStack.Push(78);
				CurrentState = 81;
				break;
			}
		case 78:
			{
			}
		case 79:
			{
				if (!b0l__Temp_bool_IsClosed_Variable2__pf)
				{
					CurrentState = 80;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 80:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				CurrentState = 18;
				break;
			}
		case 81:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable2__pf)
				{
					CurrentState = 82;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 82:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable2__pf = true;
			}
		case 83:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 84:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 85:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = false;
			}
		case 86:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable2__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 87:
			{
				float  __Local__175 = 0.000000;
				bpv__CharHealth__pf = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__CharHealth__pf) : (__Local__175));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 88:
			{
				bool  __Local__176 = false;
				bpv__TakingDamage__pf = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__IsTakingDamagex__pfzy) : (__Local__176));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 99:
			{
				CurrentState = 28;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_3(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_Montage_Play_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_Montage_Play_ReturnValue2__pf = UAnimInstance::Montage_Play(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[23], ECastCheckedType::NullAllowed), 1.000000, EMontagePlayReturnType::MontageLength, 0.000000);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 23);
	// optimized KCST_UnconditionalGoto
	bpv__IsRunning__pf = false;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_5(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_Montage_Play_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 26);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_Montage_Play_ReturnValue__pf = UAnimInstance::Montage_Play(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(UMyAnimBP_Mannequin_C__pf2980937819::StaticClass())->UsedAssets[24], ECastCheckedType::NullAllowed), 1.000000, EMontagePlayReturnType::MontageLength, 0.000000);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_6(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue20__pf{};
	check(bpp__EntryPoint__pf == 100);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(72);
	bpv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue__pf, 0.100000);
	bpv__CallFunc_BooleanAND_ReturnValue20__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_Less_FloatFloat_ReturnValue__pf, bpv__HasAWeaponx__pfzy);
	bpv__AnimGraphNode_TransitionResult_A8B9D8FC41C94781152744B97EBCA1E9__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue20__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_7(int32 bpp__EntryPoint__pf)
{
	AActor* bpv__CallFunc_GetOwningActor_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 94);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetOwningActor_ReturnValue2__pf = UAnimInstance::GetOwningActor();
	b0l__K2Node_DynamicCast_AsMy_Char4__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetOwningActor_ReturnValue2__pf);
	b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsMy_Char4__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(b0l__K2Node_DynamicCast_AsMy_Char4__pf))
	{
		b0l__K2Node_DynamicCast_AsMy_Char4__pf->bpf__UnHolsterWeapon__pf();
	}
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_8(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue16__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue16__pf{};
	check(bpp__EntryPoint__pf == 91);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue16__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(70);
	bpv__CallFunc_Less_FloatFloat_ReturnValue16__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue16__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_9B7A8A864F9C88552BD0078BB0DDAD92__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue16__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_9(int32 bpp__EntryPoint__pf)
{
	AActor* bpv__CallFunc_GetOwningActor_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 96);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetOwningActor_ReturnValue__pf = UAnimInstance::GetOwningActor();
	b0l__K2Node_DynamicCast_AsMy_Char3__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetOwningActor_ReturnValue__pf);
	b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsMy_Char3__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	if(IsValid(b0l__K2Node_DynamicCast_AsMy_Char3__pf))
	{
		b0l__K2Node_DynamicCast_AsMy_Char3__pf->bpf__HolsterWeapon__pf();
	}
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_10(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_Not_PreBool_ReturnValue3__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue10__pf{};
	check(bpp__EntryPoint__pf == 97);
	bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpv__Speed__pf, 206.000000);
	bpv__CallFunc_Not_PreBool_ReturnValue3__pf = UKismetMathLibrary::Not_PreBool(bpv__IsInAirx__pfzy);
	bpv__CallFunc_BooleanAND_ReturnValue10__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_Not_PreBool_ReturnValue3__pf, bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf);
	bpv__AnimGraphNode_TransitionResult_6E4E6E584D879006C8D684923D3ACB8E__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue10__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_11(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue15__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue15__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue19__pf{};
	check(bpp__EntryPoint__pf == 101);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue15__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(70);
	bpv__CallFunc_Less_FloatFloat_ReturnValue15__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue15__pf, 0.100000);
	bpv__CallFunc_BooleanAND_ReturnValue19__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_Less_FloatFloat_ReturnValue15__pf, bpv__HasAWeaponx__pfzy);
	bpv__AnimGraphNode_TransitionResult_C0ABE6AF4014212EADB33AA12E45020F__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue19__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_12(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue14__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue14__pf{};
	check(bpp__EntryPoint__pf == 103);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue14__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(68);
	bpv__CallFunc_Less_FloatFloat_ReturnValue14__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue14__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_573282D44A09426CBF622995F0B295CB__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue14__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 105);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_14(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 107);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_15(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 109);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 111);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_17(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 113);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_18(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 115);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_19(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 117);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_20(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf{};
	check(bpp__EntryPoint__pf == 119);
	bpv__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CharHealth__pf, 0.000000);
	bpv__AnimGraphNode_TransitionResult_715F148B43E79664E6BDF0B7ABF76C5F__pf.bCanEnterTransition = bpv__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_21(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 121);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_22(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue13__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue13__pf{};
	check(bpp__EntryPoint__pf == 137);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue13__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(72);
	bpv__CallFunc_Less_FloatFloat_ReturnValue13__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue13__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_22030C3F4ED87A965B2D15BFF400D9C6__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue13__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_23(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 124);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_24(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue12__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue12__pf{};
	check(bpp__EntryPoint__pf == 127);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue12__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(58);
	bpv__CallFunc_Less_FloatFloat_ReturnValue12__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue12__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_6AE1654D4E4311DC093F1AA942AA8139__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue12__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_25(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue10__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue10__pf{};
	check(bpp__EntryPoint__pf == 128);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue10__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(56);
	bpv__CallFunc_Less_FloatFloat_ReturnValue10__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue10__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_D92607A3416CD8B1A466C9BE25D2D90C__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue10__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_26(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue11__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue11__pf{};
	check(bpp__EntryPoint__pf == 193);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue11__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(58);
	bpv__CallFunc_Less_FloatFloat_ReturnValue11__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue11__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_383B1D2C42A7821657AD00BD0BC916C4__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue11__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_27(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue9__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue9__pf{};
	check(bpp__EntryPoint__pf == 131);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue9__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(56);
	bpv__CallFunc_Less_FloatFloat_ReturnValue9__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue9__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_44BB57B24B6A10042A6561A52C90824B__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue9__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_28(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 133);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_29(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 136);
	// optimized KCST_UnconditionalGoto
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_30(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf{};
	check(bpp__EntryPoint__pf == 143);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CharHealth__pf, 0.000000);
	bpv__AnimGraphNode_TransitionResult_CD1DDB14437AA60B81A9539ACCE80C6B__pf.bCanEnterTransition = bpv__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_31(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue8__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue8__pf{};
	check(bpp__EntryPoint__pf == 140);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue8__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(64);
	bpv__CallFunc_Less_FloatFloat_ReturnValue8__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue8__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_CF25E4A5461BD67D94F54EBF2EF70865__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue8__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_32(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_Not_PreBool_ReturnValue6__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue18__pf{};
	check(bpp__EntryPoint__pf == 144);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_Not_PreBool_ReturnValue6__pf = UKismetMathLibrary::Not_PreBool(bpv__IsMovingx__pfzy);
	bpv__CallFunc_BooleanAND_ReturnValue18__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_Not_PreBool_ReturnValue6__pf, bpv__TurnLeft__pf);
	bpv__AnimGraphNode_TransitionResult_EE1F591146D6F67B9B2188B96E19C52A__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue18__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_33(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 145);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_34(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue7__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue7__pf{};
	check(bpp__EntryPoint__pf == 147);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue7__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(62);
	bpv__CallFunc_Less_FloatFloat_ReturnValue7__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue7__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_ADD12AAA4CA4D7BEEB74D1B5926E8929__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue7__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_35(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_BooleanAND_ReturnValue17__pf{};
	check(bpp__EntryPoint__pf == 153);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_BooleanAND_ReturnValue17__pf = UKismetMathLibrary::BooleanAND(bpv__IsRunning__pf, bpv__StartRun__pf);
	bpv__AnimGraphNode_TransitionResult_3C19255E4FC60B71EDF658B59DD8FF1F__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue17__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_36(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 150);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_37(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_Not_PreBool_ReturnValue5__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue16__pf{};
	check(bpp__EntryPoint__pf == 154);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_Not_PreBool_ReturnValue5__pf = UKismetMathLibrary::Not_PreBool(bpv__IsMovingx__pfzy);
	bpv__CallFunc_BooleanAND_ReturnValue16__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_Not_PreBool_ReturnValue5__pf, bpv__TurnRight__pf);
	bpv__AnimGraphNode_TransitionResult_5C25FDFB46F185AED2903A9986BF5824__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue16__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_38(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue5__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue5__pf{};
	check(bpp__EntryPoint__pf == 155);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue5__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(60);
	bpv__CallFunc_Less_FloatFloat_ReturnValue5__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue5__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_8B3C658E45EB197AE10FC4A800E1A6C6__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue5__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_39(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_BooleanAND_ReturnValue15__pf{};
	check(bpp__EntryPoint__pf == 162);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_BooleanAND_ReturnValue15__pf = UKismetMathLibrary::BooleanAND(bpv__Interactx__pfzy, bpv__CanPickUpx__pfzy);
	bpv__AnimGraphNode_TransitionResult_29799D5846B680C6C5038787D85A2F48__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue15__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_40(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 158);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_41(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue6__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue6__pf{};
	check(bpp__EntryPoint__pf == 173);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue6__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(74);
	bpv__CallFunc_Less_FloatFloat_ReturnValue6__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue6__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_9151297B4C7C62EC73B8B39A62573AEC__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue6__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_42(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_BooleanAND_ReturnValue13__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue14__pf{};
	check(bpp__EntryPoint__pf == 163);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_BooleanAND_ReturnValue13__pf = UKismetMathLibrary::BooleanAND(bpv__Interactx__pfzy, bpv__CanPickUpx__pfzy);
	bpv__CallFunc_BooleanAND_ReturnValue14__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_BooleanAND_ReturnValue13__pf, false);
	bpv__AnimGraphNode_TransitionResult_1CA6E21240EA51CCC3DB3B970B016FCE__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue14__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_43(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_BooleanAND_ReturnValue12__pf{};
	check(bpp__EntryPoint__pf == 169);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_BooleanAND_ReturnValue12__pf = UKismetMathLibrary::BooleanAND(bpv__OpenGatex__pfzy, bpv__Interactx__pfzy);
	bpv__AnimGraphNode_TransitionResult_ED0CC38E4BCCEAB2F8423099BA852C1D__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue12__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_44(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 165);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_45(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue4__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue4__pf{};
	check(bpp__EntryPoint__pf == 167);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue4__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(60);
	bpv__CallFunc_Less_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue4__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_109DE5334665BB241501758A61E1EB92__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue4__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_46(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue2__pf{};
	bool bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue2__pf{};
	bool bpv__CallFunc_Not_PreBool_ReturnValue4__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue4__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue5__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue6__pf{};
	check(bpp__EntryPoint__pf == 174);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue2__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEnd(42);
	bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue2__pf, 0.000000);
	bpv__CallFunc_Not_PreBool_ReturnValue4__pf = UKismetMathLibrary::Not_PreBool(bpv__TurnRight__pf);
	bpv__CallFunc_BooleanOR_ReturnValue4__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue2__pf, bpv__CallFunc_Not_PreBool_ReturnValue4__pf);
	bpv__CallFunc_BooleanOR_ReturnValue5__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_BooleanOR_ReturnValue4__pf, bpv__TurnLeft__pf);
	bpv__CallFunc_BooleanOR_ReturnValue6__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_BooleanOR_ReturnValue5__pf, bpv__IsMovingx__pfzy);
	bpv__AnimGraphNode_TransitionResult_5821A86440622115833E14B4B9CF7779__pf.bCanEnterTransition = bpv__CallFunc_BooleanOR_ReturnValue6__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_47(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue2__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue2__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue11__pf{};
	check(bpp__EntryPoint__pf == 190);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue2__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(78);
	bpv__CallFunc_Less_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue2__pf, 0.100000);
	bpv__CallFunc_BooleanAND_ReturnValue11__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_Less_FloatFloat_ReturnValue2__pf, bpv__HasAWeaponx__pfzy);
	bpv__AnimGraphNode_TransitionResult_4F64279D46062EF9B7CF6193BC453E92__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue11__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_48(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_Not_PreBool_ReturnValue2__pf{};
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue__pf{};
	bool bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue2__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue3__pf{};
	check(bpp__EntryPoint__pf == 176);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_Not_PreBool_ReturnValue2__pf = UKismetMathLibrary::Not_PreBool(bpv__TurnLeft__pf);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEnd(44);
	bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue__pf, 0.000000);
	bpv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf, bpv__CallFunc_Not_PreBool_ReturnValue2__pf);
	bpv__CallFunc_BooleanOR_ReturnValue2__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_BooleanOR_ReturnValue__pf, bpv__TurnRight__pf);
	bpv__CallFunc_BooleanOR_ReturnValue3__pf = UKismetMathLibrary::BooleanOR(bpv__CallFunc_BooleanOR_ReturnValue2__pf, bpv__IsMovingx__pfzy);
	bpv__AnimGraphNode_TransitionResult_4355FD1E459E8D9D4F822CB7A9516D5A__pf.bCanEnterTransition = bpv__CallFunc_BooleanOR_ReturnValue3__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_49(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_BooleanAND_ReturnValue9__pf{};
	check(bpp__EntryPoint__pf == 177);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_BooleanAND_ReturnValue9__pf = UKismetMathLibrary::BooleanAND(bpv__IsRunning__pf, bpv__StartRun__pf);
	bpv__AnimGraphNode_TransitionResult_11A6AAD04D031EFE6A63EBAFD7A3A221__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue9__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_50(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue3__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue3__pf{};
	check(bpp__EntryPoint__pf == 178);
	bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue3__pf = UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(78);
	bpv__CallFunc_Less_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Less_FloatFloat(bpv__CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue3__pf, 0.100000);
	bpv__AnimGraphNode_TransitionResult_0FD3FBA14003DBA0180ABEA9725B3765__pf.bCanEnterTransition = bpv__CallFunc_Less_FloatFloat_ReturnValue3__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_51(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 180);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_52(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 183);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CharHealth__pf, 0.000000);
	bpv__AnimGraphNode_TransitionResult_9F933FC74BB2C4482B440DBAC079AC1C__pf.bCanEnterTransition = bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_53(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_BooleanAND_ReturnValue7__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue8__pf{};
	check(bpp__EntryPoint__pf == 188);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_BooleanAND_ReturnValue7__pf = UKismetMathLibrary::BooleanAND(bpv__Interactx__pfzy, bpv__CanPickUpx__pfzy);
	bpv__CallFunc_BooleanAND_ReturnValue8__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_BooleanAND_ReturnValue7__pf, bpv__HasAWeaponx__pfzy);
	bpv__AnimGraphNode_TransitionResult_71750ECA4BFC231CAEEEE9A8BE87DCE3__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue8__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_54(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 185);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_55(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_BooleanAND_ReturnValue5__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue6__pf{};
	check(bpp__EntryPoint__pf == 191);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_BooleanAND_ReturnValue5__pf = UKismetMathLibrary::BooleanAND(bpv__Interactx__pfzy, bpv__CanPickUpx__pfzy);
	bpv__CallFunc_BooleanAND_ReturnValue6__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_BooleanAND_ReturnValue5__pf, bpv__HasAWeaponx__pfzy);
	bpv__AnimGraphNode_TransitionResult_0BA5EB7542D89A5026301EB9DFE9B98F__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue6__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_56(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_BooleanAND_ReturnValue3__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue4__pf{};
	check(bpp__EntryPoint__pf == 192);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_BooleanAND_ReturnValue3__pf = UKismetMathLibrary::BooleanAND(bpv__OpenGatex__pfzy, bpv__Interactx__pfzy);
	bpv__CallFunc_BooleanAND_ReturnValue4__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_BooleanAND_ReturnValue3__pf, bpv__HasAWeaponx__pfzy);
	bpv__AnimGraphNode_TransitionResult_534EC2F2464CDFCDCF516B8C5DBAACC4__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue4__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_57(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_Not_PreBool_ReturnValue__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue__pf{};
	bool bpv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_BooleanAND_ReturnValue2__pf{};
	check(bpp__EntryPoint__pf == 197);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_Not_PreBool_ReturnValue__pf = UKismetMathLibrary::Not_PreBool(bpv__IsInAirx__pfzy);
	bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__Speed__pf, 206.000000);
	bpv__CallFunc_BooleanAND_ReturnValue__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_Not_PreBool_ReturnValue__pf, bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf);
	bpv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::NotEqual_FloatFloat(bpv__Speed__pf, 0.000000);
	bpv__CallFunc_BooleanAND_ReturnValue2__pf = UKismetMathLibrary::BooleanAND(bpv__CallFunc_BooleanAND_ReturnValue__pf, bpv__CallFunc_NotEqual_FloatFloat_ReturnValue__pf);
	bpv__AnimGraphNode_TransitionResult_7635C58146417CAC541DADBD8E586CF7__pf.bCanEnterTransition = bpv__CallFunc_BooleanAND_ReturnValue2__pf;
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_58(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 195);
	return; //KCST_EndOfThread
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__AnimNotify_Footstep_sound__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_0(6);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__Reload__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_3(21);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__AnimNotify_StopRunning__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_4(23);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__Shoot__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_5(26);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_9B7A8A864F9C88552BD0078BB0DDAD92__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_8(91);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__AnimNotify_UnholsterWeapon__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_7(94);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__AnimNotify_HolsterWeapon__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_9(96);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
{
	b0l__K2Node_Event_DeltaTimeX__pf = bpp__DeltaTimeX__pf;
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_2(99);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_A8B9D8FC41C94781152744B97EBCA1E9__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_6(100);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_C0ABE6AF4014212EADB33AA12E45020F__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_11(101);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_573282D44A09426CBF622995F0B295CB__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_12(103);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_BlendListByBool_3F79F1DE4BAB560312566C96B77FB07D__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_13(105);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_BlendListByBool_08E66BDD4C076E7D835C6CB969925102__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_14(107);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_BlendListByBool_70D55BFE4F780171EC2D6DBE207BA941__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_15(109);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_RotationOffsetBlendSpace_4F0385894D98B059CB731A83D4513C93__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_16(111);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_RotationOffsetBlendSpace_003C97EC462007A97705B5B638A65D04__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_17(113);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_BlendListByBool_B1B39077439A617E3F3B218E2EAF4EA7__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_18(115);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_BlendSpacePlayer_D46ABAE548237FBEC37A89B8A78D7F4E__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_19(117);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_715F148B43E79664E6BDF0B7ABF76C5F__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_20(119);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_BlendSpacePlayer_E57C56644EA81E474C57FA931247D0FF__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_21(121);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_BlendSpacePlayer_B94CD6FE45A89F97D5252A88E6D5C0F7__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_23(124);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_FFF022D6461C925CF15D698AE02BDCBF__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_29(136);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_22030C3F4ED87A965B2D15BFF400D9C6__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_22(137);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_CF25E4A5461BD67D94F54EBF2EF70865__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_31(140);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_CD1DDB14437AA60B81A9539ACCE80C6B__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_30(143);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_EE1F591146D6F67B9B2188B96E19C52A__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_32(144);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_34AFFD5546FA571F04C54791760FB1A1__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_33(145);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_ADD12AAA4CA4D7BEEB74D1B5926E8929__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_34(147);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_FE0F46CC410BB79D87ECF68F1E09139E__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_36(150);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_3C19255E4FC60B71EDF658B59DD8FF1F__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_35(153);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_5C25FDFB46F185AED2903A9986BF5824__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_37(154);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_8B3C658E45EB197AE10FC4A800E1A6C6__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_38(155);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_1B46A7F247E1AE873843409C1C410636__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_40(158);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_29799D5846B680C6C5038787D85A2F48__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_39(162);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_1CA6E21240EA51CCC3DB3B970B016FCE__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_42(163);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_67E9587544A620987F03D3AA7E92AF8B__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_44(165);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_109DE5334665BB241501758A61E1EB92__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_45(167);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_ED0CC38E4BCCEAB2F8423099BA852C1D__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_43(169);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_9151297B4C7C62EC73B8B39A62573AEC__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_41(173);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_5821A86440622115833E14B4B9CF7779__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_46(174);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_4355FD1E459E8D9D4F822CB7A9516D5A__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_48(176);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_11A6AAD04D031EFE6A63EBAFD7A3A221__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_49(177);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_0FD3FBA14003DBA0180ABEA9725B3765__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_50(178);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_B26D2A3246A77C89752F02A65E2B9B49__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_51(180);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_9F933FC74BB2C4482B440DBAC079AC1C__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_52(183);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_A182F3B84BBB4ABA051F99BFB9AAAB07__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_54(185);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_71750ECA4BFC231CAEEEE9A8BE87DCE3__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_53(188);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_4F64279D46062EF9B7CF6193BC453E92__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_47(190);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_0BA5EB7542D89A5026301EB9DFE9B98F__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_55(191);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_534EC2F2464CDFCDCF516B8C5DBAACC4__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_56(192);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_383B1D2C42A7821657AD00BD0BC916C4__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_26(193);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_3E2FA962449AFBA8E195E5A7D9BF7105__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_58(195);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_7635C58146417CAC541DADBD8E586CF7__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_57(197);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_6E4E6E584D879006C8D684923D3ACB8E__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_10(97);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_F154AFE44FB3D5E7372300B8B2B61400__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_1(138);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_73D39B2F4792CEB3225C6FA9E8681F49__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_28(133);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_44BB57B24B6A10042A6561A52C90824B__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_27(131);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_D92607A3416CD8B1A466C9BE25D2D90C__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_25(128);
}
void UMyAnimBP_Mannequin_C__pf2980937819::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_MyAnimBP_Mannequin_AnimGraphNode_TransitionResult_6AE1654D4E4311DC093F1AA942AA8139__pf()
{
	bpf__ExecuteUbergraph_MyAnimBP_Mannequin__pf_24(127);
}
void UMyAnimBP_Mannequin_C__pf2980937819::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__177 = TEXT("/Game/Mannequin/MovementAnimPack");
	const TCHAR* __Local__178 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__179 = TEXT("/Game/Mannequin/Animations");
	const TCHAR* __Local__180 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__181 = TEXT("/Game/Mannequin/AngrosEdit");
	const TCHAR* __Local__182 = TEXT("/Game/Mannequin/Character/Mesh");
	const TCHAR* __Local__183 = TEXT("/Game/Audio/walking-sounds");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__177, TEXT("ConsoleUse_LH"), TEXT("ConsoleUse_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("CrouchLoop_new"), TEXT("CrouchLoop_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("Crouch2Idle_new"), TEXT("Crouch2Idle_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("PickUp_LH"), TEXT("PickUp_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("Fists_Hit_Right"), TEXT("Fists_Hit_Right"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("Death_1"), TEXT("Death_1"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__178, TEXT("Pistol_SprintStart"), TEXT("Pistol_SprintStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("RunFwdStart"), TEXT("RunFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("JumpRun_LU_Land2Run"), TEXT("JumpRun_LU_Land2Run"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("JumpWalk_RU_Land2Walk"), TEXT("JumpWalk_RU_Land2Walk"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("JumpWalk_RU_Land"), TEXT("JumpWalk_RU_Land"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__179, TEXT("ThirdPersonJump_Loop"), TEXT("ThirdPersonJump_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__180, TEXT("WalkFwdStop_LU"), TEXT("WalkFwdStop_LU"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__180, TEXT("WalkFwdStart"), TEXT("WalkFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__181, TEXT("PistolGunUp_IdleToRun"), TEXT("PistolGunUp_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__181, TEXT("Pistol_IdleToRun"), TEXT("Pistol_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__177, TEXT("TurnLt90_Loop"), TEXT("TurnLt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__177, TEXT("TurnRt90_Loop"), TEXT("TurnRt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__181, TEXT("idleToRun"), TEXT("idleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__181, TEXT("PistolAO"), TEXT("PistolAO"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__181, TEXT("LookAround_1D"), TEXT("LookAround_1D"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__182, TEXT("UE4_Mannequin_Skeleton"), TEXT("UE4_Mannequin_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__183, TEXT("footsteps"), TEXT("footsteps"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__178, TEXT("Pistol_Reload"), TEXT("Pistol_Reload"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__178, TEXT("Pistol_ShootOnce_Montage"), TEXT("Pistol_ShootOnce_Montage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void UMyAnimBP_Mannequin_C__pf2980937819::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void UMyAnimBP_Mannequin_C__pf2980937819::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__184 = TEXT("/Game/Weapons");
	const TCHAR* __Local__185 = TEXT("/Game/Images");
	const TCHAR* __Local__186 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__187 = TEXT("/Game/Fonts");
	const TCHAR* __Local__188 = TEXT("/Game/OldTrainFactory/Textures/build");
	const TCHAR* __Local__189 = TEXT("/Game/Audio");
	const TCHAR* __Local__190 = TEXT("/Game/UI/Hud");
	const TCHAR* __Local__191 = TEXT("/Game/BulletVFX/Meshes");
	const TCHAR* __Local__192 = TEXT("/Game/Materials");
	const TCHAR* __Local__193 = TEXT("/Game/Audio/Zombie-Sounds");
	const TCHAR* __Local__194 = TEXT("/Game/Audio/SoundAttenuation");
	const TCHAR* __Local__195 = TEXT("/Game/Audio/injured-sounds");
	const TCHAR* __Local__196 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	const TCHAR* __Local__197 = TEXT("/Game/ZombieMixamoModels/Animations/ZombieCop");
	const TCHAR* __Local__198 = TEXT("/Game/ZombieMixamoModels/BlendSpace");
	const TCHAR* __Local__199 = TEXT("/Game/Zombie_01/Animation/Root_Motion");
	const TCHAR* __Local__200 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__201 = TEXT("/Game/BulletVFX/Particles");
	const TCHAR* __Local__202 = TEXT("/Game/Mannequin");
	const TCHAR* __Local__203 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__204 = TEXT("/Game/Soldier_ru_01/Meshes");
	const TCHAR* __Local__205 = TEXT("/Game/Mannequin/AngrosEdit");
	const TCHAR* __Local__206 = TEXT("/Game/UI/LoadingScreens");
	const TCHAR* __Local__207 = TEXT("/Game/UI");
	const TCHAR* __Local__208 = TEXT("/Game/Mannequin/AngrosEdit/InfectedBlueprints");
	const TCHAR* __Local__209 = TEXT("/Game/ZombieMixamoModels");
	const TCHAR* __Local__210 = TEXT("/Game/Blueprints");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__184, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__185, TEXT("LoadingScreen-Town"), TEXT("LoadingScreen-Town"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__186, TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__187, TEXT("ADOBESONGSTD-LIGHT"), TEXT("ADOBESONGSTD-LIGHT"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__188, TEXT("Wood_01_D"), TEXT("Wood_01_D"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__189, TEXT("onClick"), TEXT("onClick"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__189, TEXT("hoverSound"), TEXT("hoverSound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__185, TEXT("LowHealthScreen"), TEXT("LowHealthScreen"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__190, TEXT("handgun_img"), TEXT("handgun_img"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__190, TEXT("HealthBar_Full"), TEXT("HealthBar_Full"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__185, TEXT("grunge-01-transparent"), TEXT("grunge-01-transparent"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__187, TEXT("corbel"), TEXT("corbel"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__187, TEXT("corbelb"), TEXT("corbelb"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__189, TEXT("Scary_impact"), TEXT("Scary_impact"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__190, TEXT("Crosshair_HUD"), TEXT("Crosshair_HUD"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__190, TEXT("Crosshair_HUD_Shoot"), TEXT("Crosshair_HUD_Shoot"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__191, TEXT("SM_BulletCasing"), TEXT("SM_BulletCasing"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__192, TEXT("BulletPhysicalMaterial"), TEXT("BulletPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__193, TEXT("zombie-idle"), TEXT("zombie-idle"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__194, TEXT("3dSound"), TEXT("3dSound"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__193, TEXT("Zombie_-_attack"), TEXT("Zombie_-_attack"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__193, TEXT("zombie-dies"), TEXT("zombie-dies"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__193, TEXT("zombie-idle-2"), TEXT("zombie-idle-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__193, TEXT("zombie-idle-3"), TEXT("zombie-idle-3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__193, TEXT("zombie-detect"), TEXT("zombie-detect"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__193, TEXT("zombie-detect-2"), TEXT("zombie-detect-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__193, TEXT("zombie-dies-02"), TEXT("zombie-dies-02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__195, TEXT("injured-sounds"), TEXT("injured-sounds"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__196, TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__197, TEXT("zombie_biting"), TEXT("zombie_biting"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__197, TEXT("zombie_attack"), TEXT("zombie_attack"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__197, TEXT("zombie_dying"), TEXT("zombie_dying"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__198, TEXT("SimpleBlendSpace"), TEXT("SimpleBlendSpace"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__199, TEXT("Zombie_Chase_1_Full_Loop"), TEXT("Zombie_Chase_1_Full_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__196, TEXT("Copzombie_L_Actisdato"), TEXT("Copzombie_L_Actisdato"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__189, TEXT("Dramatic_Hit_Hard_10"), TEXT("Dramatic_Hit_Hard_10"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__189, TEXT("Death_Scream"), TEXT("Death_Scream"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__189, TEXT("LostIt"), TEXT("LostIt"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__200, TEXT("PistolEquipMontage"), TEXT("PistolEquipMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__189, TEXT("Player_Heal"), TEXT("Player_Heal"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__189, TEXT("SlowHeartbeat"), TEXT("SlowHeartbeat"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__200, TEXT("PistolEquipWeaponAnimMontage"), TEXT("PistolEquipWeaponAnimMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__189, TEXT("Flashlight_ON"), TEXT("Flashlight_ON"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__189, TEXT("Flashlight_OFF"), TEXT("Flashlight_OFF"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__201, TEXT("VFX_Impact_Flesh"), TEXT("VFX_Impact_Flesh"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__201, TEXT("VFX_Impact_Concrete"), TEXT("VFX_Impact_Concrete"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__189, TEXT("Trigger_click_empty"), TEXT("Trigger_click_empty"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__202, TEXT("Climbing"), TEXT("Climbing"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__203, TEXT("Pistol_Idle"), TEXT("Pistol_Idle"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__204, TEXT("Soldier_ru_01"), TEXT("Soldier_ru_01"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__192, TEXT("HumanPhysicalMaterial"), TEXT("HumanPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__205, TEXT("MyChar"), TEXT("MyChar_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__206, TEXT("LoadingScreen-WesternOak"), TEXT("LoadingScreen-WesternOak_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__207, TEXT("DeadScreen"), TEXT("DeadScreen_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__207, TEXT("InGameUI"), TEXT("InGameUI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__207, TEXT("BP_CrosshairShoot"), TEXT("BP_CrosshairShoot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__207, TEXT("BP_Crosshair"), TEXT("BP_Crosshair_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__184, TEXT("HandgunBullet"), TEXT("HandgunBullet_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__208, TEXT("Infected-AI"), TEXT("Infected-AI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__209, TEXT("InfectedAnimBP"), TEXT("InfectedAnimBP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__210, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__210, TEXT("RunCamShake"), TEXT("RunCamShake_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__UMyAnimBP_Mannequin_C__pf2980937819
{
	FRegisterHelper__UMyAnimBP_Mannequin_C__pf2980937819()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Mannequin/AngrosEdit/MyAnimBP_Mannequin"), &UMyAnimBP_Mannequin_C__pf2980937819::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UMyAnimBP_Mannequin_C__pf2980937819 Instance;
};
FRegisterHelper__UMyAnimBP_Mannequin_C__pf2980937819 FRegisterHelper__UMyAnimBP_Mannequin_C__pf2980937819::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
