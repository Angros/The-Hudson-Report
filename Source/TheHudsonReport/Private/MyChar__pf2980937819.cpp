#include "TheHudsonReport.h"
#include "MyChar__pf2980937819.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
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
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
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
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
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
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "MyChar__pf2980937819.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "LoadingScreenxWesternOak__pfG3933423829.h"
#include "DeadScreen__pf122804083.h"
#include "InGameUI__pf122804083.h"
#include "BP_CrosshairShoot__pf122804083.h"
#include "BP_Crosshair__pf122804083.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "MyAnimBP_Mannequin__pf2980937819.h"
#include "HandgunBullet__pf3442503945.h"
#include "M9xwxFlashlight__pfGG2403237688.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
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
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "RunCamShake__pf2403237688.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "InfectedxAI__pfG897084639.h"
#include "InfectedAnimBP__pf529494595.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
AMyChar_C__pf2980937819::AMyChar_C__pf2980937819(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AMyChar_C__pf2980937819::StaticClass() == GetClass()))
	{
		AMyChar_C__pf2980937819::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(GetDefaultSubobjectByName(TEXT("CharMoveComp")));
	__Local__1->MaxWalkSpeed = 200.000000f;
	__Local__1->MaxWalkSpeedCrouched = 100.000000f;
	static TWeakObjectPtr<UProperty> __Local__3{};
	const UProperty* __Local__2 = __Local__3.Get();
	if (nullptr == __Local__2)
	{
		__Local__2 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
		check(__Local__2);
		__Local__3 = __Local__2;
	}
	(((UBoolProperty*)__Local__2)->SetPropertyValue_InContainer((__Local__1), false, 0));
	auto __Local__4 = CastChecked<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
	__Local__4->AnimClass = UMyAnimBP_Mannequin_C__pf2980937819::StaticClass();
	__Local__4->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__4->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__4->OverrideMaterials = TArray<UMaterialInterface*> ();
	__Local__4->OverrideMaterials.Reserve(2);
	__Local__4->OverrideMaterials.Add(nullptr);
	__Local__4->OverrideMaterials.Add(nullptr);
	auto& __Local__5 = (*(AccessPrivateProperty<FName >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__5 = FName(TEXT("Custom"));
	auto& __Local__6 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__6), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__7 = TArray<FResponseChannel> ();
	__Local__7.AddUninitialized(2);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__7.GetData(), 2);
	auto& __Local__8 = __Local__7[0];
	__Local__8.Channel = FName(TEXT("Pawn"));
	__Local__8.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__9 = __Local__7[1];
	__Local__9.Channel = FName(TEXT("Vehicle"));
	__Local__9.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__10 = (*(AccessPrivateProperty<UPhysicalMaterial* >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__PhysMaterialOverride() )));
	__Local__10 = CastChecked<UPhysicalMaterial>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__4->RelativeLocation = FVector(2.626808, -0.000170, -95.482933);
	__Local__4->RelativeRotation = FRotator(0.000000, -90.000061, 0.000000);
	bpv__MainSpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("MainSpringArm"));
	bpv__Camera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	bpv__BoxClimb__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxClimb"));
	bpv__M9xwxFlashlight__pfGG = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("M9-w-Flashlight"));
	bpv__AimingSpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("AimingSpringArm"));
	bpv__ShoulderAimCam__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("ShoulderAimCam"));
	bpv__MainSpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__MainSpringArm__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__MainSpringArm__pf->TargetArmLength = 119.346527f;
	bpv__MainSpringArm__pf->bUsePawnControlRotation = true;
	bpv__MainSpringArm__pf->RelativeLocation = FVector(-5.772446, 48.964081, 66.579254);
	bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Camera__pf->AttachToComponent(bpv__MainSpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform , TEXT("SpringEndpoint"));
	bpv__Camera__pf->FieldOfView = 60.000000f;
	bpv__Camera__pf->RelativeLocation = FVector(-30.144943, -0.001266, -8.883575);
	bpv__BoxClimb__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__BoxClimb__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__BoxClimb__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__11 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__BoxClimb__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__12 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__11), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__12 = TArray<FResponseChannel> ();
	__Local__12.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__12.GetData(), 8);
	auto& __Local__13 = __Local__12[0];
	__Local__13.Channel = FName(TEXT("WorldStatic"));
	__Local__13.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__14 = __Local__12[1];
	__Local__14.Channel = FName(TEXT("WorldDynamic"));
	__Local__14.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__15 = __Local__12[2];
	__Local__15.Channel = FName(TEXT("Pawn"));
	__Local__15.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__16 = __Local__12[3];
	__Local__16.Channel = FName(TEXT("Visibility"));
	__Local__16.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__17 = __Local__12[4];
	__Local__17.Channel = FName(TEXT("Camera"));
	__Local__17.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__18 = __Local__12[5];
	__Local__18.Channel = FName(TEXT("PhysicsBody"));
	__Local__18.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__19 = __Local__12[6];
	__Local__19.Channel = FName(TEXT("Vehicle"));
	__Local__19.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__20 = __Local__12[7];
	__Local__20.Channel = FName(TEXT("Destructible"));
	__Local__20.Response = ECollisionResponse::ECR_Ignore;
	bpv__BoxClimb__pf->RelativeLocation = FVector(36.522987, 0.001022, -3.328161);
	bpv__BoxClimb__pf->RelativeScale3D = FVector(0.564691, 0.180066, 0.394009);
	if(!bpv__BoxClimb__pf->IsTemplate())
	{
		bpv__BoxClimb__pf->BodyInstance.FixupData(bpv__BoxClimb__pf);
	}
	bpv__M9xwxFlashlight__pfGG->CreationMethod = EComponentCreationMethod::Native;
	bpv__M9xwxFlashlight__pfGG->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__M9xwxFlashlight__pfGG->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__M9xwxFlashlight__pfGG->bVisible = false;
	bpv__M9xwxFlashlight__pfGG->RelativeLocation = FVector(62.194057, 10.581857, 48.676098);
	bpv__M9xwxFlashlight__pfGG->RelativeRotation = FRotator(0.000000, -81.562347, 0.000000);
	if(!bpv__M9xwxFlashlight__pfGG->IsTemplate())
	{
		bpv__M9xwxFlashlight__pfGG->BodyInstance.FixupData(bpv__M9xwxFlashlight__pfGG);
	}
	bpv__AimingSpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__AimingSpringArm__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__AimingSpringArm__pf->TargetArmLength = 119.346527f;
	bpv__AimingSpringArm__pf->bUsePawnControlRotation = true;
	bpv__AimingSpringArm__pf->RelativeLocation = FVector(-5.772446, 48.964081, 66.579254);
	bpv__AimingSpringArm__pf->RelativeRotation = FRotator(2.812508, -5.625039, 0.000000);
	bpv__ShoulderAimCam__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ShoulderAimCam__pf->AttachToComponent(bpv__AimingSpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__ShoulderAimCam__pf->FieldOfView = 45.000000f;
	bpv__ShoulderAimCam__pf->RelativeLocation = FVector(-12.671261, 3.959755, -6.656523);
	bpv__ShoulderAimCam__pf->RelativeRotation = FRotator(2.812508, -5.625031, 0.000000);
	bpv__ShoulderAimCam__pf->bAutoActivate = false;
	bpv__Timeline_0_FOVchange_03F817B94C9EAEDB0DA054B35B3E5B0B__pf = 0.000000f;
	bpv__Timeline_0__Direction_03F817B94C9EAEDB0DA054B35B3E5B0B__pf = ETimelineDirection::Type::Forward;
	bpv__Timeline_0__pf = nullptr;
	bpv__ChangeFOV_FOVchange_CD1CADEC4FA9DAE82F5D1985704FD5E9__pf = 0.000000f;
	bpv__ChangeFOV__Direction_CD1CADEC4FA9DAE82F5D1985704FD5E9__pf = ETimelineDirection::Type::Forward;
	bpv__ChangeFOV__pf = nullptr;
	bpv__ToMainCamera_Rotation_Dynamic_144456974213271D75BC41AC463FE398__pf = 0.000000f;
	bpv__ToMainCamera_Location_Dynamic_144456974213271D75BC41AC463FE398__pf = 0.000000f;
	bpv__ToMainCamera__Direction_144456974213271D75BC41AC463FE398__pf = ETimelineDirection::Type::Forward;
	bpv__ToMainCamera__pf = nullptr;
	bpv__ToShoulderAim_Rotation_Dynamic_DA9B2277448FF7FBDEBD41B389145CA3__pf = 0.000000f;
	bpv__ToShoulderAim_Location_Dynamic_DA9B2277448FF7FBDEBD41B389145CA3__pf = 0.000000f;
	bpv__ToShoulderAim__Direction_DA9B2277448FF7FBDEBD41B389145CA3__pf = ETimelineDirection::Type::Forward;
	bpv__ToShoulderAim__pf = nullptr;
	bpv__RunSpeed_runspeed_B935A3774C2271BC4ECA2D9DC50D8DEA__pf = 0.000000f;
	bpv__RunSpeed__Direction_B935A3774C2271BC4ECA2D9DC50D8DEA__pf = ETimelineDirection::Type::Forward;
	bpv__RunSpeed__pf = nullptr;
	bpv__RunningFOV_Pistol_FOVchange_0D3A5CCF4EB96FE31FF436A33145F69F__pf = 0.000000f;
	bpv__RunningFOV_Pistol__Direction_0D3A5CCF4EB96FE31FF436A33145F69F__pf = ETimelineDirection::Type::Forward;
	bpv__RunningFOV_Pistol__pf = nullptr;
	bpv__RunningFOV_FOVchange_2EB9449342F7E836CCB587AD5E02E4BE__pf = 0.000000f;
	bpv__RunningFOV__Direction_2EB9449342F7E836CCB587AD5E02E4BE__pf = ETimelineDirection::Type::Forward;
	bpv__RunningFOV__pf = nullptr;
	bpv__BaseLookUpRate__pf = 0.000000f;
	bpv__BaseTurnRate__pf = 0.000000f;
	bpv__TurnRight__pf = false;
	bpv__TurnLeft__pf = false;
	bpv__Pitch__pf = 0.000000f;
	bpv__FieldOfView__pf = 0.000000f;
	bpv__HasWeaponAttached__pf = false;
	bpv__HasWeaponSheathed__pf = false;
	bpv__CurrentWeapon__pf = nullptr;
	bpv__HolsteredWeapon__pf = nullptr;
	bpv__HasWeaponInHand__pf = false;
	bpv__IsRunningx__pfzy = false;
	bpv__CanClimbx__pfzy = false;
	bpv__flashlightOnx__pfzy = false;
	bpv__IsLookAroundCharOnx__pfzy = false;
	bpv__IsShooting__pf = false;
	bpv__StartRun__pf = false;
	bpv__Moving__pf = false;
	bpv__CrosshairWidget__pf = nullptr;
	bpv__CrosshairActivex__pfzy = false;
	bpv__CrosshairxShootxWidget__pfTT = nullptr;
	bpv__CrosshairShootActivex__pfzy = false;
	bpv__MainCameraLocation__pf = FVector(0.000000, 0.000000, 0.000000);
	bpv__MainCameraRotation__pf = FRotator(0.000000, 0.000000, 0.000000);
	bpv__AmmoReserved__pf = 50.000000f;
	bpv__AmmoInGun__pf = 15.000000f;
	bpv__isReloadingx__pfzy = false;
	bpv__OutOfAmmo_Text__pf = false;
	bpv__CharHealth__pf = 1.000000f;
	bpv__InGameUI__pf = nullptr;
	bpv__IsTakingDamagex__pfzy = false;
	bpv__isLoadingx__pfzy = true;
	bpv__Interactx__pfzy = false;
	bpv__CanPickUpx__pfzy = false;
	bpv__AnimFirstLvl__pf = false;
	bpv__OpenGatex__pfzy = false;
	bpv__footstepSound__pf = nullptr;
	bpv__Objectivex01__pfG = false;
	bpv__Objectivex02__pfG = false;
	bpv__deadx__pfzy = false;
	bpv__DeadScreen__pf = nullptr;
	bpv__ShowInteractTxt__pf = false;
	bpv__LoadingScreenxCH2__pfG = nullptr;
	bpv__NearDeathSound__pf = nullptr;
	bpv__DeathScreenMusic__pf = nullptr;
	bpv__Level02x__pfzy = false;
	AutoPossessPlayer = EAutoReceiveInput::Type::Player0;
}
void AMyChar_C__pf2980937819::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__MainSpringArm__pf)
	{
		bpv__MainSpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Camera__pf)
	{
		bpv__Camera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__BoxClimb__pf)
	{
		bpv__BoxClimb__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__M9xwxFlashlight__pfGG)
	{
		bpv__M9xwxFlashlight__pfGG->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__AimingSpringArm__pf)
	{
		bpv__AimingSpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ShoulderAimCam__pf)
	{
		bpv__ShoulderAimCam__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AMyChar_C__pf2980937819::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
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
	extern UClass* Z_Construct_UClass_AInfectedxAI_C__pfG897084639();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AInfectedxAI_C__pfG897084639());
	extern UClass* Z_Construct_UClass_UInfectedAnimBP_C__pf529494595();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInfectedAnimBP_C__pf529494595());
	extern UClass* Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688());
	extern UClass* Z_Construct_UClass_URunCamShake_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_URunCamShake_C__pf2403237688());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__21 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("RunningFOV_Template"));
	InDynamicClass->Timelines.Add(__Local__21);
	auto __Local__22 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("RunningFOV_Pistol_Template"));
	InDynamicClass->Timelines.Add(__Local__22);
	auto __Local__23 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("RunSpeed_Template"));
	InDynamicClass->Timelines.Add(__Local__23);
	auto __Local__24 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("ToShoulderAim_Template"));
	InDynamicClass->Timelines.Add(__Local__24);
	auto __Local__25 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("ToMainCamera_Template"));
	InDynamicClass->Timelines.Add(__Local__25);
	auto __Local__26 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("ChangeFOV_Template"));
	InDynamicClass->Timelines.Add(__Local__26);
	auto __Local__27 = NewObject<UTimelineTemplate>(InDynamicClass, UTimelineTemplate::StaticClass(), TEXT("Timeline_0_Template"));
	InDynamicClass->Timelines.Add(__Local__27);
	auto __Local__28 = NewObject<UInputKeyDelegateBinding>(InDynamicClass, UInputKeyDelegateBinding::StaticClass(), TEXT("InputKeyDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__28);
	auto __Local__29 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__29);
	auto __Local__30 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__30);
	auto __Local__31 = NewObject<UInputActionDelegateBinding>(InDynamicClass, UInputActionDelegateBinding::StaticClass(), TEXT("InputActionDelegateBinding_1"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__31);
	__Local__21->TimelineLength = 1.000000f;
	__Local__21->bValidatedAsWired = true;
	__Local__21->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__21->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__21->FloatTracks.GetData(), 1);
	auto& __Local__32 = __Local__21->FloatTracks[0];
	auto __Local__33 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__33);
	__Local__33->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__33->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__33->FloatCurve.Keys.GetData(), 2);
	auto& __Local__34 = __Local__33->FloatCurve.Keys[0];
	__Local__34.Time = -0.005632f;
	__Local__34.Value = 75.000000f;
	auto& __Local__35 = __Local__33->FloatCurve.Keys[1];
	__Local__35.Time = 0.997575f;
	__Local__35.Value = 90.000000f;
	__Local__32.CurveFloat = __Local__33;
	__Local__32.TrackName = FName(TEXT("FOVchange"));
	__Local__21->TimelineGuid = FGuid(0x2EB94493, 0x42F7E836, 0xCCB587AD, 0x5E02E4BE);
	__Local__22->TimelineLength = 1.000000f;
	__Local__22->bValidatedAsWired = true;
	__Local__22->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__22->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__22->FloatTracks.GetData(), 1);
	auto& __Local__36 = __Local__22->FloatTracks[0];
	auto __Local__37 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_2"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__37);
	__Local__37->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__37->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__37->FloatCurve.Keys.GetData(), 2);
	auto& __Local__38 = __Local__37->FloatCurve.Keys[0];
	__Local__38.Time = -0.005632f;
	__Local__38.Value = 60.000000f;
	auto& __Local__39 = __Local__37->FloatCurve.Keys[1];
	__Local__39.Time = 0.997575f;
	__Local__39.Value = 90.000000f;
	__Local__36.CurveFloat = __Local__37;
	__Local__36.TrackName = FName(TEXT("FOVchange"));
	__Local__22->TimelineGuid = FGuid(0x0D3A5CCF, 0x4EB96FE3, 0x1FF436A3, 0x3145F69F);
	__Local__23->TimelineLength = 0.420000f;
	__Local__23->LengthMode = ETimelineLengthMode::TL_LastKeyFrame;
	__Local__23->bValidatedAsWired = true;
	__Local__23->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__23->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__23->FloatTracks.GetData(), 1);
	auto& __Local__40 = __Local__23->FloatTracks[0];
	auto __Local__41 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_1"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__41);
	__Local__41->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__41->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__41->FloatCurve.Keys.GetData(), 2);
	auto& __Local__42 = __Local__41->FloatCurve.Keys[0];
	__Local__42.Time = -0.005632f;
	__Local__42.Value = 200.000000f;
	__Local__42.ArriveTangent = 215.242355f;
	auto& __Local__43 = __Local__41->FloatCurve.Keys[1];
	__Local__43.Time = 0.400000f;
	__Local__43.Value = 600.000000f;
	__Local__43.ArriveTangent = 2333.862305f;
	__Local__43.LeaveTangent = 9167.940430f;
	__Local__40.CurveFloat = __Local__41;
	__Local__40.TrackName = FName(TEXT("runspeed"));
	__Local__23->TimelineGuid = FGuid(0xB935A377, 0x4C2271BC, 0x4ECA2D9D, 0xC50D8DEA);
	__Local__24->TimelineLength = 0.300000f;
	__Local__24->bValidatedAsWired = true;
	__Local__24->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__24->FloatTracks.AddUninitialized(2);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__24->FloatTracks.GetData(), 2);
	auto& __Local__44 = __Local__24->FloatTracks[0];
	auto __Local__45 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_4"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__45);
	__Local__45->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__45->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__45->FloatCurve.Keys.GetData(), 2);
	auto& __Local__46 = __Local__45->FloatCurve.Keys[0];
	auto& __Local__47 = __Local__45->FloatCurve.Keys[1];
	__Local__47.Time = 0.300000f;
	__Local__47.Value = 1.000000f;
	__Local__44.CurveFloat = __Local__45;
	__Local__44.TrackName = FName(TEXT("Location Dynamic"));
	auto& __Local__48 = __Local__24->FloatTracks[1];
	auto __Local__49 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_5"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__49);
	__Local__49->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__49->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__49->FloatCurve.Keys.GetData(), 2);
	auto& __Local__50 = __Local__49->FloatCurve.Keys[0];
	auto& __Local__51 = __Local__49->FloatCurve.Keys[1];
	__Local__51.Time = 0.300000f;
	__Local__51.Value = 1.000000f;
	__Local__48.CurveFloat = __Local__49;
	__Local__48.TrackName = FName(TEXT("Rotation Dynamic"));
	__Local__24->TimelineGuid = FGuid(0xDA9B2277, 0x448FF7FB, 0xDEBD41B3, 0x89145CA3);
	__Local__25->TimelineLength = 0.300000f;
	__Local__25->bValidatedAsWired = true;
	__Local__25->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__25->FloatTracks.AddUninitialized(2);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__25->FloatTracks.GetData(), 2);
	auto& __Local__52 = __Local__25->FloatTracks[0];
	auto __Local__53 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_4_5"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__53);
	__Local__53->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__53->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__53->FloatCurve.Keys.GetData(), 2);
	auto& __Local__54 = __Local__53->FloatCurve.Keys[0];
	auto& __Local__55 = __Local__53->FloatCurve.Keys[1];
	__Local__55.Time = 0.300000f;
	__Local__55.Value = 1.000000f;
	__Local__52.CurveFloat = __Local__53;
	__Local__52.TrackName = FName(TEXT("Location Dynamic"));
	auto& __Local__56 = __Local__25->FloatTracks[1];
	auto __Local__57 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_5_6"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__57);
	__Local__57->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__57->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__57->FloatCurve.Keys.GetData(), 2);
	auto& __Local__58 = __Local__57->FloatCurve.Keys[0];
	auto& __Local__59 = __Local__57->FloatCurve.Keys[1];
	__Local__59.Time = 0.300000f;
	__Local__59.Value = 1.000000f;
	__Local__56.CurveFloat = __Local__57;
	__Local__56.TrackName = FName(TEXT("Rotation Dynamic"));
	__Local__25->TimelineGuid = FGuid(0x14445697, 0x4213271D, 0x75BC41AC, 0x463FE398);
	__Local__26->TimelineLength = 0.400000f;
	__Local__26->bValidatedAsWired = true;
	__Local__26->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__26->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__26->FloatTracks.GetData(), 1);
	auto& __Local__60 = __Local__26->FloatTracks[0];
	auto __Local__61 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_2_3"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__61);
	__Local__61->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__61->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__61->FloatCurve.Keys.GetData(), 2);
	auto& __Local__62 = __Local__61->FloatCurve.Keys[0];
	__Local__62.Value = 60.000000f;
	auto& __Local__63 = __Local__61->FloatCurve.Keys[1];
	__Local__63.Time = 0.400000f;
	__Local__63.Value = 45.000000f;
	__Local__60.CurveFloat = __Local__61;
	__Local__60.TrackName = FName(TEXT("FOVchange"));
	__Local__26->TimelineGuid = FGuid(0xCD1CADEC, 0x4FA9DAE8, 0x2F5D1985, 0x704FD5E9);
	__Local__27->TimelineLength = 0.400000f;
	__Local__27->bValidatedAsWired = true;
	__Local__27->FloatTracks = TArray<FTTFloatTrack> ();
	__Local__27->FloatTracks.AddUninitialized(1);
	FTTFloatTrack::StaticStruct()->InitializeStruct(__Local__27->FloatTracks.GetData(), 1);
	auto& __Local__64 = __Local__27->FloatTracks[0];
	auto __Local__65 = NewObject<UCurveFloat>(InDynamicClass, UCurveFloat::StaticClass(), TEXT("CurveFloat_0_2_3_4"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__65);
	__Local__65->FloatCurve.Keys = TArray<FRichCurveKey> ();
	__Local__65->FloatCurve.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__65->FloatCurve.Keys.GetData(), 2);
	auto& __Local__66 = __Local__65->FloatCurve.Keys[0];
	__Local__66.Value = 60.000000f;
	auto& __Local__67 = __Local__65->FloatCurve.Keys[1];
	__Local__67.Time = 0.400000f;
	__Local__67.Value = 45.000000f;
	__Local__64.CurveFloat = __Local__65;
	__Local__64.TrackName = FName(TEXT("FOVchange"));
	__Local__27->TimelineGuid = FGuid(0x03F817B9, 0x4C9EAEDB, 0x0DA054B3, 0x5B3E5B0B);
	__Local__28->InputKeyDelegateBindings = TArray<FBlueprintInputKeyDelegateBinding> ();
	__Local__28->InputKeyDelegateBindings.AddUninitialized(8);
	FBlueprintInputKeyDelegateBinding::StaticStruct()->InitializeStruct(__Local__28->InputKeyDelegateBindings.GetData(), 8);
	auto& __Local__68 = __Local__28->InputKeyDelegateBindings[0];
	__Local__68.InputChord.Key = FKey(TEXT("LeftShift"));
	__Local__68.InputKeyEvent = EInputEvent::IE_Released;
	__Local__68.FunctionNameToBind = FName(TEXT("InpActEvt_LeftShift_K2Node_InputKeyEvent_15"));
	auto& __Local__69 = __Local__28->InputKeyDelegateBindings[1];
	__Local__69.InputChord.Key = FKey(TEXT("LeftShift"));
	__Local__69.FunctionNameToBind = FName(TEXT("InpActEvt_LeftShift_K2Node_InputKeyEvent_14"));
	auto& __Local__70 = __Local__28->InputKeyDelegateBindings[2];
	__Local__70.InputChord.Key = FKey(TEXT("Gamepad_LeftThumbstick"));
	__Local__70.FunctionNameToBind = FName(TEXT("InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8"));
	auto& __Local__71 = __Local__28->InputKeyDelegateBindings[3];
	__Local__71.InputChord.Key = FKey(TEXT("Gamepad_LeftThumbstick"));
	__Local__71.InputKeyEvent = EInputEvent::IE_Released;
	__Local__71.FunctionNameToBind = FName(TEXT("InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9"));
	auto& __Local__72 = __Local__28->InputKeyDelegateBindings[4];
	__Local__72.InputChord.Key = FKey(TEXT("LeftShift"));
	__Local__72.FunctionNameToBind = FName(TEXT("InpActEvt_LeftShift_K2Node_InputKeyEvent_10"));
	auto& __Local__73 = __Local__28->InputKeyDelegateBindings[5];
	__Local__73.InputChord.Key = FKey(TEXT("LeftShift"));
	__Local__73.InputKeyEvent = EInputEvent::IE_Released;
	__Local__73.FunctionNameToBind = FName(TEXT("InpActEvt_LeftShift_K2Node_InputKeyEvent_11"));
	auto& __Local__74 = __Local__28->InputKeyDelegateBindings[6];
	__Local__74.InputChord.Key = FKey(TEXT("Gamepad_LeftThumbstick"));
	__Local__74.FunctionNameToBind = FName(TEXT("InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12"));
	auto& __Local__75 = __Local__28->InputKeyDelegateBindings[7];
	__Local__75.InputChord.Key = FKey(TEXT("Gamepad_LeftThumbstick"));
	__Local__75.InputKeyEvent = EInputEvent::IE_Released;
	__Local__75.FunctionNameToBind = FName(TEXT("InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_13"));
	__Local__29->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__29->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__29->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__76 = __Local__29->ComponentDelegateBindings[0];
	__Local__76.ComponentPropertyName = FName(TEXT("BoxClimb"));
	__Local__76.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__76.FunctionNameToBind = FName(TEXT("BndEvt__BoxClimb_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__77 = __Local__29->ComponentDelegateBindings[1];
	__Local__77.ComponentPropertyName = FName(TEXT("BoxClimb"));
	__Local__77.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__77.FunctionNameToBind = FName(TEXT("BndEvt__BoxClimb_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature"));
	__Local__30->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__30->InputAxisDelegateBindings.AddUninitialized(6);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__30->InputAxisDelegateBindings.GetData(), 6);
	auto& __Local__78 = __Local__30->InputAxisDelegateBindings[0];
	__Local__78.InputAxisName = FName(TEXT("Turn"));
	__Local__78.FunctionNameToBind = FName(TEXT("InpAxisEvt_Turn_K2Node_InputAxisEvent_47"));
	__Local__78.bOverrideParentBinding = false;
	auto& __Local__79 = __Local__30->InputAxisDelegateBindings[1];
	__Local__79.InputAxisName = FName(TEXT("LookUp"));
	__Local__79.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_40"));
	__Local__79.bOverrideParentBinding = false;
	auto& __Local__80 = __Local__30->InputAxisDelegateBindings[2];
	__Local__80.InputAxisName = FName(TEXT("LookUpRate"));
	__Local__80.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53"));
	auto& __Local__81 = __Local__30->InputAxisDelegateBindings[3];
	__Local__81.InputAxisName = FName(TEXT("TurnRate"));
	__Local__81.FunctionNameToBind = FName(TEXT("InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38"));
	auto& __Local__82 = __Local__30->InputAxisDelegateBindings[4];
	__Local__82.InputAxisName = FName(TEXT("MoveRight"));
	__Local__82.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2"));
	auto& __Local__83 = __Local__30->InputAxisDelegateBindings[5];
	__Local__83.InputAxisName = FName(TEXT("MoveForward"));
	__Local__83.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0"));
	__Local__31->InputActionDelegateBindings = TArray<FBlueprintInputActionDelegateBinding> ();
	__Local__31->InputActionDelegateBindings.AddUninitialized(10);
	FBlueprintInputActionDelegateBinding::StaticStruct()->InitializeStruct(__Local__31->InputActionDelegateBindings.GetData(), 10);
	auto& __Local__84 = __Local__31->InputActionDelegateBindings[0];
	__Local__84.InputActionName = FName(TEXT("AimDownSights"));
	__Local__84.FunctionNameToBind = FName(TEXT("InpActEvt_AimDownSights_K2Node_InputActionEvent_10"));
	auto& __Local__85 = __Local__31->InputActionDelegateBindings[1];
	__Local__85.InputActionName = FName(TEXT("Interact"));
	__Local__85.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_11"));
	auto& __Local__86 = __Local__31->InputActionDelegateBindings[2];
	__Local__86.InputActionName = FName(TEXT("Interact"));
	__Local__86.InputKeyEvent = EInputEvent::IE_Released;
	__Local__86.FunctionNameToBind = FName(TEXT("InpActEvt_Interact_K2Node_InputActionEvent_12"));
	auto& __Local__87 = __Local__31->InputActionDelegateBindings[3];
	__Local__87.InputActionName = FName(TEXT("Reload"));
	__Local__87.FunctionNameToBind = FName(TEXT("InpActEvt_Reload_K2Node_InputActionEvent_13"));
	auto& __Local__88 = __Local__31->InputActionDelegateBindings[4];
	__Local__88.InputActionName = FName(TEXT("Reload"));
	__Local__88.InputKeyEvent = EInputEvent::IE_Released;
	__Local__88.FunctionNameToBind = FName(TEXT("InpActEvt_Reload_K2Node_InputActionEvent_14"));
	auto& __Local__89 = __Local__31->InputActionDelegateBindings[5];
	__Local__89.InputActionName = FName(TEXT("ZoomIn"));
	__Local__89.FunctionNameToBind = FName(TEXT("InpActEvt_ZoomIn_K2Node_InputActionEvent_15"));
	auto& __Local__90 = __Local__31->InputActionDelegateBindings[6];
	__Local__90.InputActionName = FName(TEXT("ZoomIn"));
	__Local__90.InputKeyEvent = EInputEvent::IE_Released;
	__Local__90.FunctionNameToBind = FName(TEXT("InpActEvt_ZoomIn_K2Node_InputActionEvent_16"));
	auto& __Local__91 = __Local__31->InputActionDelegateBindings[7];
	__Local__91.InputActionName = FName(TEXT("Shoot"));
	__Local__91.FunctionNameToBind = FName(TEXT("InpActEvt_Shoot_K2Node_InputActionEvent_17"));
	auto& __Local__92 = __Local__31->InputActionDelegateBindings[8];
	__Local__92.InputActionName = FName(TEXT("Shoot"));
	__Local__92.InputKeyEvent = EInputEvent::IE_Released;
	__Local__92.FunctionNameToBind = FName(TEXT("InpActEvt_Shoot_K2Node_InputActionEvent_18"));
	auto& __Local__93 = __Local__31->InputActionDelegateBindings[9];
	__Local__93.InputActionName = FName(TEXT("Flashlight"));
	__Local__93.FunctionNameToBind = FName(TEXT("InpActEvt_Flashlight_K2Node_InputActionEvent_19"));
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_0(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpv__CallFunc_GetAnimInstance_ReturnValue3__pf{};
	float bpv__CallFunc_Montage_Play_ReturnValue__pf{};
	APlayerController* bpv__CallFunc_GetPlayerController_ReturnValue3__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue5__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue6__pf{};
	UAudioComponent* bpv__CallFunc_SpawnSound2D_ReturnValue__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue2__pf{};
	UAudioComponent* bpv__CallFunc_SpawnSound2D_ReturnValue2__pf{};
	UAudioComponent* bpv__CallFunc_SpawnSound2D_ReturnValue3__pf{};
	UAudioComponent* bpv__CallFunc_SpawnSound2D_ReturnValue4__pf{};
	UAudioComponent* bpv__CallFunc_SpawnSound2D_ReturnValue5__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue3__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue7__pf{};
	bool bpv__CallFunc_BooleanOR_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bool  __Local__94 = false;
				bool  __Local__95 = false;
				bpv__CallFunc_BooleanOR_ReturnValue__pf = UKismetMathLibrary::BooleanOR(((IsValid(bpv__DeadScreen__pf)) ? (bpv__DeadScreen__pf->bpv__RestartLevel__pf) : (__Local__94)), ((IsValid(bpv__DeadScreen__pf)) ? (bpv__DeadScreen__pf->bpv__BackToMainMenux__pfzy) : (__Local__95)));
				if (!bpv__CallFunc_BooleanOR_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 2:
			{
				bpv__CallFunc_IsValid_ReturnValue3__pf = UKismetSystemLibrary::IsValid(bpv__DeathScreenMusic__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue3__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 3:
			{
				if(IsValid(bpv__DeathScreenMusic__pf))
				{
					bpv__DeathScreenMusic__pf->UAudioComponent::FadeOut(0.000000, 0.000000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 5:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue7__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CharHealth__pf, 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue7__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 6:
			{
				StateStack.Push(7);
				CurrentState = 9;
				break;
			}
		case 7:
			{
			}
		case 8:
			{
				if (!b0l__Temp_bool_IsClosed_Variable2__pf)
				{
					CurrentState = 13;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable3__pf)
				{
					CurrentState = 10;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 10:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable3__pf = true;
			}
		case 11:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 13:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
			}
		case 14:
			{
				bpv__CallFunc_SpawnSound2D_ReturnValue4__pf = UGameplayStatics::SpawnSound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), 0.300000, 1.000000, 0.000000, nullptr, false);
			}
		case 15:
			{
				bpv__CallFunc_SpawnSound2D_ReturnValue5__pf = UGameplayStatics::SpawnSound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed), 0.400000, 1.000000, 0.000000, nullptr, false);
			}
		case 16:
			{
				bpv__CallFunc_SpawnSound2D_ReturnValue3__pf = UGameplayStatics::SpawnSound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr, false);
			}
		case 17:
			{
				bpv__DeathScreenMusic__pf = bpv__CallFunc_SpawnSound2D_ReturnValue3__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				StateStack.Push(19);
				CurrentState = 5;
				break;
			}
		case 19:
			{
				CurrentState = 1;
				break;
			}
		case 27:
			{
				StateStack.Push(28);
				CurrentState = 33;
				break;
			}
		case 28:
			{
			}
		case 29:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue5__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CharHealth__pf, 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue5__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 30:
			{
				if(IsValid(bpv__NearDeathSound__pf))
				{
					bpv__NearDeathSound__pf->UAudioComponent::FadeOut(0.000000, 0.000000);
				}
			}
		case 31:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = false;
			}
		case 32:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 33:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue6__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CharHealth__pf, 0.300000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue6__pf)
				{
					CurrentState = 41;
					break;
				}
			}
		case 34:
			{
				StateStack.Push(35);
				CurrentState = 37;
				break;
			}
		case 35:
			{
			}
		case 36:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					CurrentState = 43;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 37:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					CurrentState = 38;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 38:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 39:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 40:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				bpv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(bpv__NearDeathSound__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 42:
			{
				bpv__CallFunc_SpawnSound2D_ReturnValue2__pf = UGameplayStatics::SpawnSound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed), 0.400000, 1.000000, 0.000000, nullptr, false);
				CurrentState = 30;
				break;
			}
		case 43:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 44:
			{
				bpv__CallFunc_SpawnSound2D_ReturnValue__pf = UGameplayStatics::SpawnSound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr, false);
			}
		case 45:
			{
				bpv__NearDeathSound__pf = bpv__CallFunc_SpawnSound2D_ReturnValue__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 47:
			{
				if(IsValid(bpv__DeadScreen__pf))
				{
					bpv__DeadScreen__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 48:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue3__pf))
				{
					bpv__CallFunc_GetPlayerController_ReturnValue3__pf->bShowMouseCursor = true;
				}
			}
		case 49:
			{
				bpv__deadx__pfzy = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 118:
			{
				if(IsValid(bpv__InGameUI__pf))
				{
					bpv__InGameUI__pf->RemoveFromParent();
				}
				CurrentState = 47;
				break;
			}
		case 119:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CharHealth__pf, 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 120:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf))
				{
					bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf->DisableInput(bpv__CallFunc_GetPlayerController_ReturnValue3__pf);
				}
				CurrentState = 118;
				break;
			}
		case 183:
			{
				b0l__Temp_bool_IsClosed_Variable4__pf = true;
			}
		case 184:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf))
				{
					bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf->DisableInput(bpv__CallFunc_GetPlayerController_ReturnValue3__pf);
				}
			}
		case 185:
			{
				if(IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->SetMovementMode(EMovementMode::MOVE_Flying, 0);
				}
			}
		case 186:
			{
				if(IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpv__CallFunc_GetAnimInstance_ReturnValue3__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin3__pf = Cast<UMyAnimBP_Mannequin_C__pf2980937819>(bpv__CallFunc_GetAnimInstance_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 187:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin3__pf))
				{
					bpv__CallFunc_Montage_Play_ReturnValue__pf = b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin3__pf->UAnimInstance::Montage_Play(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed), 1.000000, EMontagePlayReturnType::MontageLength, 0.000000);
				}
			}
		case 188:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(189, -2107487764, TEXT("ExecuteUbergraph_MyChar_0"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 189:
			{
			}
		case 190:
			{
				if(IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->SetMovementMode(EMovementMode::MOVE_Walking, 0);
				}
			}
		case 191:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue3__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf))
				{
					bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf->EnableInput(bpv__CallFunc_GetPlayerController_ReturnValue3__pf);
				}
			}
		case 192:
			{
				bpv__IsRunningx__pfzy = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 193:
			{
				b0l__Temp_bool_IsClosed_Variable4__pf = false;
			}
		case 194:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable4__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 195:
			{
				b0l__Temp_bool_IsClosed_Variable4__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 196:
			{
				if (!b0l__Temp_bool_IsClosed_Variable4__pf)
				{
					CurrentState = 183;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 267:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable4__pf)
				{
					CurrentState = 268;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 268:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable4__pf = true;
			}
		case 269:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 195;
				break;
			}
		case 270:
			{
				StateStack.Push(271);
				CurrentState = 267;
				break;
			}
		case 271:
			{
				CurrentState = 196;
				break;
			}
		case 288:
			{
				StateStack.Push(289);
				CurrentState = 292;
				break;
			}
		case 289:
			{
				StateStack.Push(290);
				CurrentState = 119;
				break;
			}
		case 290:
			{
				StateStack.Push(291);
				CurrentState = 27;
				break;
			}
		case 291:
			{
				CurrentState = 18;
				break;
			}
		case 292:
			{
				if (!bpv__CanClimbx__pfzy)
				{
					CurrentState = 193;
					break;
				}
				CurrentState = 270;
				break;
			}
		case 299:
			{
				CurrentState = 288;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 4);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 20);
	bpv__StartRun__pf = false;
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_3(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	UAnimInstance* bpv__CallFunc_GetAnimInstance_ReturnValue4__pf{};
	float bpv__CallFunc_Montage_Play_ReturnValue2__pf{};
	UAnimInstance* bpv__CallFunc_GetAnimInstance_ReturnValue5__pf{};
	float bpv__CallFunc_Montage_Play_ReturnValue3__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 22:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin5__pf))
				{
					bpv__CallFunc_Montage_Play_ReturnValue3__pf = b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin5__pf->UAnimInstance::Montage_Play(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed), 1.000000, EMontagePlayReturnType::MontageLength, 0.000000);
				}
			}
		case 23:
			{
				if (!bpv__flashlightOnx__pfzy)
				{
					CurrentState = -1;
					break;
				}
			}
		case 24:
			{
				b0l__K2Node_DynamicCast_AsM9_w__Flashlight3__pf = Cast<AM9xwxFlashlight_C__pfGG2403237688>(bpv__CurrentWeapon__pf);
				b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsM9_w__Flashlight3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess6__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 25:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsM9_w__Flashlight3__pf))
				{
					b0l__K2Node_DynamicCast_AsM9_w__Flashlight3__pf->bpf__TurnFlashlight__pf();
				}
			}
		case 26:
			{
				bpv__flashlightOnx__pfzy = false;
				CurrentState = -1;
				break;
			}
		case 46:
			{
				if(IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpv__CallFunc_GetAnimInstance_ReturnValue5__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin5__pf = Cast<UMyAnimBP_Mannequin_C__pf2980937819>(bpv__CallFunc_GetAnimInstance_ReturnValue5__pf);
				b0l__K2Node_DynamicCast_bSuccess8__pf = (b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin5__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess8__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 22;
				break;
			}
		case 68:
			{
			}
		case 69:
			{
				bpf__SwitchToAimView__pf();
			}
		case 70:
			{
				if (!bpv__CrosshairActivex__pfzy)
				{
					CurrentState = 80;
					break;
				}
			}
		case 71:
			{
				if (!bpv__IsRunningx__pfzy)
				{
					CurrentState = 72;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 72:
			{
				bpv__CrosshairActivex__pfzy = false;
			}
		case 73:
			{
				if(IsValid(bpv__CrosshairxShootxWidget__pfTT))
				{
					bpv__CrosshairxShootxWidget__pfTT->RemoveFromParent();
				}
				if(IsValid(bpv__CrosshairWidget__pf))
				{
					bpv__CrosshairWidget__pf->RemoveFromParent();
				}
			}
		case 74:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__CurrentWeapon__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = 76;
					break;
				}
			}
		case 75:
			{
				CurrentState = 46;
				break;
			}
		case 76:
			{
				if (!bpv__IsRunningx__pfzy)
				{
					CurrentState = 77;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 77:
			{
			}
		case 78:
			{
				if(IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpv__CallFunc_GetAnimInstance_ReturnValue4__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin4__pf = Cast<UMyAnimBP_Mannequin_C__pf2980937819>(bpv__CallFunc_GetAnimInstance_ReturnValue4__pf);
				b0l__K2Node_DynamicCast_bSuccess7__pf = (b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin4__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess7__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 79:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin4__pf))
				{
					bpv__CallFunc_Montage_Play_ReturnValue2__pf = b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin4__pf->UAnimInstance::Montage_Play(CastChecked<UAnimMontage>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), 1.000000, EMontagePlayReturnType::MontageLength, 0.000000);
				}
				CurrentState = -1;
				break;
			}
		case 80:
			{
				if (!bpv__IsRunningx__pfzy)
				{
					CurrentState = 81;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 81:
			{
				bpv__CrosshairActivex__pfzy = true;
			}
		case 82:
			{
				if(IsValid(bpv__CrosshairWidget__pf))
				{
					bpv__CrosshairWidget__pf->UUserWidget::AddToViewport(0);
				}
				CurrentState = 74;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_4(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	APlayerController* bpv__CallFunc_GetPlayerController_ReturnValue2__pf{};
	bool bpv__CallFunc_IsInputKeyDown_ReturnValue2__pf{};
	bool bpv__CallFunc_IsInViewport_ReturnValue2__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 50:
			{
				b0l__Temp_bool_IsClosed_Variable5__pf = true;
			}
		case 51:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue2__pf))
				{
					bpv__CallFunc_GetPlayerController_ReturnValue2__pf->ClientPlayCameraShake(URunCamShake_C__pf2403237688::StaticClass(), 0.200000, ECameraAnimPlaySpace::CameraLocal, FRotator(0.000000,0.000000,0.000000));
				}
			}
		case 52:
			{
				UKismetSystemLibrary::RetriggerableDelay(this, 0.000000, FLatentActionInfo(53, 1369944290, TEXT("ExecuteUbergraph_MyChar_4"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 53:
			{
			}
		case 54:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue2__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue2__pf))
				{
					uint8* __Local__99 = (uint8*)FMemory_Alloca(FKey::StaticStruct()->GetStructureSize());
					FKey::StaticStruct()->InitializeStruct(__Local__99);
					FKey& __Local__98 = *reinterpret_cast<FKey*>(__Local__99);
					auto& __Local__100 = (*(AccessPrivateProperty<FName >(&(__Local__98), FKey::__PPO__KeyName() )));
					__Local__100 = FName(TEXT("AnyKey"));
					bpv__CallFunc_IsInputKeyDown_ReturnValue2__pf = bpv__CallFunc_GetPlayerController_ReturnValue2__pf->APlayerController::IsInputKeyDown(__Local__98);
				}
				if (!bpv__CallFunc_IsInputKeyDown_ReturnValue2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 55:
			{
				if (!bpv__IsShooting__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 56:
			{
				StateStack.Push(57);
				CurrentState = 59;
				break;
			}
		case 57:
			{
			}
		case 58:
			{
				if (!b0l__Temp_bool_IsClosed_Variable5__pf)
				{
					CurrentState = 50;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable5__pf)
				{
					CurrentState = 60;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 60:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable5__pf = true;
			}
		case 61:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 62:
			{
				b0l__Temp_bool_IsClosed_Variable5__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 154:
			{
				if (!bpv__isReloadingx__pfzy)
				{
					CurrentState = 155;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 155:
			{
				bpv__CallFunc_Less_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Less_FloatFloat(bpv__AmmoInGun__pf, 1.000000);
				if (!bpv__CallFunc_Less_FloatFloat_ReturnValue2__pf)
				{
					CurrentState = 156;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 156:
			{
				if (!bpv__IsRunningx__pfzy)
				{
					CurrentState = 157;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 157:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 158:
			{
				bpv__IsShooting__pf = true;
			}
		case 159:
			{
				bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__AmmoInGun__pf, 1.000000);
				bpv__AmmoInGun__pf = bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
			}
		case 160:
			{
				if(IsValid(bpv__CrosshairWidget__pf))
				{
					bpv__CrosshairWidget__pf->RemoveFromParent();
				}
			}
		case 161:
			{
				if(IsValid(bpv__CrosshairxShootxWidget__pfTT))
				{
					bpv__CallFunc_IsInViewport_ReturnValue2__pf = bpv__CrosshairxShootxWidget__pfTT->UUserWidget::IsInViewport();
				}
				if (!bpv__CallFunc_IsInViewport_ReturnValue2__pf)
				{
					CurrentState = 163;
					break;
				}
			}
		case 162:
			{
				bpf__ShootTrace__pf();
				CurrentState = 51;
				break;
			}
		case 163:
			{
				if(IsValid(bpv__CrosshairxShootxWidget__pfTT))
				{
					bpv__CrosshairxShootxWidget__pfTT->UUserWidget::AddToViewport(0);
				}
				CurrentState = 162;
				break;
			}
		case 349:
			{
				b0l__Temp_struct_Variable4__pf = b0l__K2Node_InputActionEvent_Key8__pf;
				CurrentState = 154;
				break;
			}
		case 351:
			{
				CurrentState = 349;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_5(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsInViewport_ReturnValue__pf{};
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue2__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 63:
			{
				b0l__Temp_bool_IsClosed_Variable5__pf = false;
			}
		case 64:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable5__pf = true;
				CurrentState = -1;
				break;
			}
		case 142:
			{
				bpv__OutOfAmmo_Text__pf = true;
				CurrentState = -1;
				break;
			}
		case 164:
			{
				if (!bpv__isReloadingx__pfzy)
				{
					CurrentState = 165;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 165:
			{
				bpv__CallFunc_Less_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Less_FloatFloat(bpv__AmmoInGun__pf, 1.000000);
				if (!bpv__CallFunc_Less_FloatFloat_ReturnValue2__pf)
				{
					CurrentState = 168;
					break;
				}
			}
		case 166:
			{
				bpv__IsShooting__pf = false;
			}
		case 167:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[12], ECastCheckedType::NullAllowed), 0.100000, 1.000000, 0.000000, nullptr);
				CurrentState = 142;
				break;
			}
		case 168:
			{
				if (!bpv__IsRunningx__pfzy)
				{
					CurrentState = 169;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 169:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 170:
			{
				bpv__IsShooting__pf = false;
			}
		case 171:
			{
				if(IsValid(bpv__CrosshairxShootxWidget__pfTT))
				{
					bpv__CrosshairxShootxWidget__pfTT->RemoveFromParent();
				}
			}
		case 172:
			{
				if(IsValid(bpv__CrosshairWidget__pf))
				{
					bpv__CallFunc_IsInViewport_ReturnValue__pf = bpv__CrosshairWidget__pf->UUserWidget::IsInViewport();
				}
				if (!bpv__CallFunc_IsInViewport_ReturnValue__pf)
				{
					CurrentState = 173;
					break;
				}
				CurrentState = 63;
				break;
			}
		case 173:
			{
				if(IsValid(bpv__CrosshairWidget__pf))
				{
					bpv__CrosshairWidget__pf->UUserWidget::AddToViewport(0);
				}
				CurrentState = 63;
				break;
			}
		case 350:
			{
				b0l__Temp_struct_Variable4__pf = b0l__K2Node_InputActionEvent_Key9__pf;
				CurrentState = 164;
				break;
			}
		case 352:
			{
				CurrentState = 350;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 338);
	// optimized KCST_UnconditionalGoto
	bpf__HolsterxDrawxWeapon__pfET();
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_7(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 66:
			{
				if(IsValid(bpv__RunningFOV__pf))
				{
					bpv__RunningFOV__pf->UTimelineComponent::Play();
				}
				CurrentState = -1;
				break;
			}
		case 181:
			{
				if(IsValid(bpv__RunningFOV_Pistol__pf))
				{
					bpv__RunningFOV_Pistol__pf->UTimelineComponent::Play();
				}
				CurrentState = -1;
				break;
			}
		case 237:
			{
				if (!bpv__Moving__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 238:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = 240;
					break;
				}
			}
		case 239:
			{
				bpv__StartRun__pf = true;
				CurrentState = 181;
				break;
			}
		case 240:
			{
				bpv__StartRun__pf = true;
				CurrentState = 66;
				break;
			}
		case 321:
			{
				b0l__Temp_struct_Variable8__pf = b0l__K2Node_InputKeyEvent_Key7__pf;
				CurrentState = 237;
				break;
			}
		case 322:
			{
				CurrentState = 321;
				break;
			}
		case 361:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputKeyEvent_Key5__pf;
				CurrentState = 238;
				break;
			}
		case 364:
			{
				CurrentState = 361;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_8(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 67:
			{
				if(IsValid(bpv__RunningFOV__pf))
				{
					bpv__RunningFOV__pf->UTimelineComponent::Reverse();
				}
				CurrentState = -1;
				break;
			}
		case 182:
			{
				if(IsValid(bpv__RunningFOV_Pistol__pf))
				{
					bpv__RunningFOV_Pistol__pf->UTimelineComponent::Reverse();
				}
				CurrentState = -1;
				break;
			}
		case 243:
			{
				b0l__Temp_struct_Variable8__pf = b0l__K2Node_InputKeyEvent_Key8__pf;
			}
		case 244:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = 67;
					break;
				}
				CurrentState = 182;
				break;
			}
		case 245:
			{
				CurrentState = 243;
				break;
			}
		case 362:
			{
				b0l__Temp_struct_Variable__pf = b0l__K2Node_InputKeyEvent_Key6__pf;
				CurrentState = 244;
				break;
			}
		case 365:
			{
				CurrentState = 362;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_9(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_Subtract_FloatFloat_ReturnValue4__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf{};
	APlayerController* bpv__CallFunc_GetPlayerController_ReturnValue6__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 83:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(84, 534630569, TEXT("ExecuteUbergraph_MyChar_9"), this));
				CurrentState = -1;
				break;
			}
		case 84:
			{
			}
		case 85:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue6__pf))
				{
					bpv__CallFunc_GetPlayerController_ReturnValue6__pf->bEnableClickEvents = true;
				}
				CurrentState = -1;
				break;
			}
		case 101:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue6__pf))
				{
					bpv__CallFunc_GetPlayerController_ReturnValue6__pf->bEnableClickEvents = false;
				}
				CurrentState = 83;
				break;
			}
		case 116:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CharHealth__pf, 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf)
				{
					CurrentState = 117;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 117:
			{
				bpv__CallFunc_Subtract_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__CharHealth__pf, b0l__K2Node_Event_Damage__pf);
				bpv__CharHealth__pf = bpv__CallFunc_Subtract_FloatFloat_ReturnValue4__pf;
				CurrentState = 101;
				break;
			}
		case 121:
			{
				CurrentState = 116;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_10(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpv__CallFunc_GetPlayerController_ReturnValue6__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 86:
			{
				if (!bpv__CanPickUpx__pfzy)
				{
					CurrentState = -1;
					break;
				}
			}
		case 87:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf))
				{
					bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf->DisableInput(bpv__CallFunc_GetPlayerController_ReturnValue6__pf);
				}
			}
		case 88:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue6__pf))
				{
					bpv__CallFunc_GetPlayerController_ReturnValue6__pf->bEnableClickEvents = false;
				}
			}
		case 89:
			{
				UKismetSystemLibrary::Delay(this, 0.010000, FLatentActionInfo(90, 348996549, TEXT("ExecuteUbergraph_MyChar_10"), this));
				CurrentState = -1;
				break;
			}
		case 90:
			{
			}
		case 91:
			{
				bpv__Interactx__pfzy = false;
			}
		case 92:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(93, -451300237, TEXT("ExecuteUbergraph_MyChar_10"), this));
				CurrentState = -1;
				break;
			}
		case 93:
			{
			}
		case 94:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue6__pf))
				{
					bpv__CallFunc_GetPlayerController_ReturnValue6__pf->bEnableClickEvents = true;
				}
			}
		case 95:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue6__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf))
				{
					bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf->EnableInput(bpv__CallFunc_GetPlayerController_ReturnValue6__pf);
				}
				CurrentState = -1;
				break;
			}
		case 103:
			{
				bpv__Interactx__pfzy = true;
				CurrentState = 86;
				break;
			}
		case 336:
			{
				b0l__Temp_struct_Variable7__pf = b0l__K2Node_InputActionEvent_Key2__pf;
				CurrentState = 103;
				break;
			}
		case 339:
			{
				CurrentState = 336;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_11(int32 bpp__EntryPoint__pf)
{
	UInGameUI_C__pf122804083* bpv__CallFunc_Create_ReturnValue__pf{};
	UDeadScreen_C__pf122804083* bpv__CallFunc_Create_ReturnValue2__pf{};
	ULoadingScreenxWesternOak_C__pfG3933423829* bpv__CallFunc_Create_ReturnValue3__pf{};
	FTransform bpv__CallFunc_GetTransform_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AM9xwxFlashlight_C__pfGG2403237688* bpv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	APlayerController* bpv__CallFunc_GetPlayerController_ReturnValue4__pf{};
	APlayerController* bpv__CallFunc_GetPlayerController_ReturnValue5__pf{};
	UBP_CrosshairShoot_C__pf122804083* bpv__CallFunc_Create_ReturnValue4__pf{};
	UBP_Crosshair_C__pf122804083* bpv__CallFunc_Create_ReturnValue5__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 96:
			{
				bpv__AnimFirstLvl__pf = true;
			}
		case 97:
			{
				bpv__CallFunc_Create_ReturnValue2__pf = CastChecked<UDeadScreen_C__pf122804083>(UWidgetBlueprintLibrary::Create(this, UDeadScreen_C__pf122804083::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
			}
		case 98:
			{
				bpv__DeadScreen__pf = bpv__CallFunc_Create_ReturnValue2__pf;
			}
		case 99:
			{
				bpv__CallFunc_Create_ReturnValue3__pf = CastChecked<ULoadingScreenxWesternOak_C__pfG3933423829>(UWidgetBlueprintLibrary::Create(this, ULoadingScreenxWesternOak_C__pfG3933423829::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
			}
		case 100:
			{
				bpv__LoadingScreenxCH2__pfG = bpv__CallFunc_Create_ReturnValue3__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 105:
			{
				UWidgetLayoutLibrary::RemoveAllWidgets(this);
			}
		case 106:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue4__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpv__CallFunc_Create_ReturnValue4__pf = CastChecked<UBP_CrosshairShoot_C__pf122804083>(UWidgetBlueprintLibrary::Create(this, UBP_CrosshairShoot_C__pf122804083::StaticClass(), bpv__CallFunc_GetPlayerController_ReturnValue4__pf), ECastCheckedType::NullAllowed);
			}
		case 107:
			{
				bpv__CrosshairxShootxWidget__pfTT = bpv__CallFunc_Create_ReturnValue4__pf;
			}
		case 108:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue5__pf = UGameplayStatics::GetPlayerController(this, 0);
				bpv__CallFunc_Create_ReturnValue5__pf = CastChecked<UBP_Crosshair_C__pf122804083>(UWidgetBlueprintLibrary::Create(this, UBP_Crosshair_C__pf122804083::StaticClass(), bpv__CallFunc_GetPlayerController_ReturnValue5__pf), ECastCheckedType::NullAllowed);
			}
		case 109:
			{
				bpv__CrosshairWidget__pf = bpv__CallFunc_Create_ReturnValue5__pf;
			}
		case 110:
			{
				FVector  __Local__104 = FVector(0.000000,0.000000,0.000000);
				bpv__MainCameraLocation__pf = ((IsValid(bpv__Camera__pf)) ? (bpv__Camera__pf->RelativeLocation) : (__Local__104));
			}
		case 111:
			{
				FRotator  __Local__105 = FRotator(0.000000,0.000000,0.000000);
				bpv__MainCameraRotation__pf = ((IsValid(bpv__Camera__pf)) ? (bpv__Camera__pf->RelativeRotation) : (__Local__105));
			}
		case 112:
			{
				bpv__CallFunc_Create_ReturnValue__pf = CastChecked<UInGameUI_C__pf122804083>(UWidgetBlueprintLibrary::Create(this, UInGameUI_C__pf122804083::StaticClass(), nullptr), ECastCheckedType::NullAllowed);
			}
		case 113:
			{
				if(IsValid(bpv__CallFunc_Create_ReturnValue__pf))
				{
					bpv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
			}
		case 114:
			{
				bpv__InGameUI__pf = bpv__CallFunc_Create_ReturnValue__pf;
			}
		case 115:
			{
				bpv__isLoadingx__pfzy = false;
				CurrentState = 96;
				break;
			}
		case 198:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 199:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 234:
			{
				bpv__CrosshairActivex__pfzy = false;
				CurrentState = 105;
				break;
			}
		case 246:
			{
				bpv__IsLookAroundCharOnx__pfzy = false;
				CurrentState = 234;
				break;
			}
		case 272:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsM9_w__Flashlight2__pf))
				{
					b0l__K2Node_DynamicCast_AsM9_w__Flashlight2__pf->bpf__TurnFlashlight__pf();
				}
				CurrentState = 246;
				break;
			}
		case 277:
			{
				b0l__K2Node_DynamicCast_AsM9_w__Flashlight2__pf = Cast<AM9xwxFlashlight_C__pfGG2403237688>(bpv__HolsteredWeapon__pf);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsM9_w__Flashlight2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess5__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 272;
				break;
			}
		case 279:
			{
				StateStack.Push(280);
				CurrentState = 284;
				break;
			}
		case 280:
			{
			}
		case 281:
			{
				if (!b0l__Temp_bool_IsClosed_Variable3__pf)
				{
					CurrentState = 282;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 282:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
			}
		case 283:
			{
				bpv__flashlightOnx__pfzy = false;
				CurrentState = 277;
				break;
			}
		case 284:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable2__pf)
				{
					CurrentState = 285;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 285:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable2__pf = true;
				CurrentState = 198;
				break;
			}
		case 286:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = 279;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 312:
			{
				if(IsValid(bpv__HolsteredWeapon__pf))
				{
					bpv__HolsteredWeapon__pf->AActor::K2_AttachRootComponentTo((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("HolsterSocket")), EAttachLocation::SnapToTarget, true);
				}
				CurrentState = 286;
				break;
			}
		case 313:
			{
				bpv__HolsteredWeapon__pf = bpv__CallFunc_FinishSpawningActor_ReturnValue__pf;
				CurrentState = 312;
				break;
			}
		case 314:
			{
				bpv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				bpv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AM9xwxFlashlight_C__pfGG2403237688>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpv__CallFunc_GetTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
				CurrentState = 313;
				break;
			}
		case 315:
			{
				bpv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AM9xwxFlashlight_C__pfGG2403237688::StaticClass(), bpv__CallFunc_GetTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, nullptr);
				CurrentState = 314;
				break;
			}
		case 316:
			{
				CurrentState = 315;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_12(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 340);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_struct_Variable7__pf = b0l__K2Node_InputActionEvent_Key3__pf;
	// optimized KCST_UnconditionalGoto
	bpv__Interactx__pfzy = false;
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_13(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 104);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_14(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpv__CallFunc_GetAnimInstance_ReturnValue2__pf{};
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 122:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 123:
			{
				if(IsValid(bpv__CrosshairWidget__pf))
				{
					bpv__CrosshairWidget__pf->RemoveFromParent();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 132:
			{
				StateStack.Push(133);
				CurrentState = 134;
				break;
			}
		case 133:
			{
				CurrentState = 122;
				break;
			}
		case 134:
			{
				bpv__IsRunningx__pfzy = true;
			}
		case 135:
			{
				if(IsValid(bpv__RunSpeed__pf))
				{
					bpv__RunSpeed__pf->UTimelineComponent::Play();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 300:
			{
				float  __Local__106 = 0.000000;
				bpv__CallFunc_Greater_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Greater_FloatFloat(((IsValid(b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin2__pf->bpv__Speed__pf) : (__Local__106)), 0.000000);
				if (!bpv__CallFunc_Greater_FloatFloat_ReturnValue3__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 132;
				break;
			}
		case 303:
			{
				if(IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpv__CallFunc_GetAnimInstance_ReturnValue2__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin2__pf = Cast<UMyAnimBP_Mannequin_C__pf2980937819>(bpv__CallFunc_GetAnimInstance_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 300;
				break;
			}
		case 354:
			{
				b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputKeyEvent_Key__pf;
				CurrentState = 303;
				break;
			}
		case 356:
			{
				CurrentState = 354;
				break;
			}
		case 357:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputKeyEvent_Key3__pf;
				CurrentState = 303;
				break;
			}
		case 360:
			{
				CurrentState = 357;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_15(int32 bpp__EntryPoint__pf)
{
	UAnimInstance* bpv__CallFunc_GetAnimInstance_ReturnValue__pf{};
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 124:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 125:
			{
				if(IsValid(bpv__CrosshairWidget__pf))
				{
					bpv__CrosshairWidget__pf->UUserWidget::AddToViewport(0);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 128:
			{
				StateStack.Push(129);
				CurrentState = 130;
				break;
			}
		case 129:
			{
				CurrentState = 124;
				break;
			}
		case 130:
			{
				bpv__IsRunningx__pfzy = false;
			}
		case 131:
			{
				if(IsValid(bpv__RunSpeed__pf))
				{
					bpv__RunSpeed__pf->UTimelineComponent::Reverse();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 334:
			{
				float  __Local__107 = 0.000000;
				bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(((IsValid(b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin__pf->bpv__Speed__pf) : (__Local__107)), 0.000000);
				if (!bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 128;
				break;
			}
		case 335:
			{
				if(IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpv__CallFunc_GetAnimInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USkeletalMeshComponent::GetAnimInstance();
				}
				b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin__pf = Cast<UMyAnimBP_Mannequin_C__pf2980937819>(bpv__CallFunc_GetAnimInstance_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 334;
				break;
			}
		case 355:
			{
				b0l__Temp_struct_Variable3__pf = b0l__K2Node_InputKeyEvent_Key2__pf;
				CurrentState = 335;
				break;
			}
		case 358:
			{
				b0l__Temp_struct_Variable2__pf = b0l__K2Node_InputKeyEvent_Key4__pf;
				CurrentState = 335;
				break;
			}
		case 359:
			{
				CurrentState = 355;
				break;
			}
		case 363:
			{
				CurrentState = 358;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_16(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 126);
	bpv__StartRun__pf = false;
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_17(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 136:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[13], ECastCheckedType::NullAllowed), 0.600000, 1.000000, 1.200000, nullptr);
				CurrentState = -1;
				break;
			}
		case 137:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[14], ECastCheckedType::NullAllowed), 0.600000, 1.000000, 0.300000, nullptr);
				CurrentState = -1;
				break;
			}
		case 273:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsM9_w__Flashlight__pf))
				{
					b0l__K2Node_DynamicCast_AsM9_w__Flashlight__pf->bpf__TurnFlashlight__pf();
				}
			}
		case 274:
			{
				if (!bpv__flashlightOnx__pfzy)
				{
					CurrentState = 276;
					break;
				}
			}
		case 275:
			{
				bpv__flashlightOnx__pfzy = false;
				CurrentState = 137;
				break;
			}
		case 276:
			{
				bpv__flashlightOnx__pfzy = true;
				CurrentState = 136;
				break;
			}
		case 278:
			{
				b0l__K2Node_DynamicCast_AsM9_w__Flashlight__pf = Cast<AM9xwxFlashlight_C__pfGG2403237688>(bpv__CurrentWeapon__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsM9_w__Flashlight__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 273;
				break;
			}
		case 293:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 278;
				break;
			}
		case 353:
			{
				CurrentState = 293;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_18(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf{};
	float bpv__CallFunc_Subtract_FloatFloat_ReturnValue3__pf{};
	float bpv__CallFunc_Add_FloatFloat_ReturnValue2__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf{};
	float bpv__CallFunc_Add_FloatFloat_ReturnValue3__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 138:
			{
				bpv__OutOfAmmo_Text__pf = false;
				CurrentState = -1;
				break;
			}
		case 139:
			{
				bpv__CallFunc_Add_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Add_FloatFloat(bpv__AmmoReserved__pf, bpv__AmmoInGun__pf);
				bpv__AmmoInGun__pf = bpv__CallFunc_Add_FloatFloat_ReturnValue3__pf;
			}
		case 140:
			{
				bpv__AmmoReserved__pf = 0.000000;
			}
		case 141:
			{
				bpv__isReloadingx__pfzy = true;
				CurrentState = 138;
				break;
			}
		case 143:
			{
				bpv__CallFunc_Add_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Add_FloatFloat(bpv__AmmoReserved__pf, bpv__AmmoInGun__pf);
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__CallFunc_Add_FloatFloat_ReturnValue2__pf, 15.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf)
				{
					CurrentState = 144;
					break;
				}
				CurrentState = 139;
				break;
			}
		case 144:
			{
				bpv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Subtract_FloatFloat(15.000000, bpv__AmmoInGun__pf);
				bpv__CallFunc_Subtract_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__AmmoReserved__pf, bpv__CallFunc_Subtract_FloatFloat_ReturnValue2__pf);
				bpv__AmmoReserved__pf = bpv__CallFunc_Subtract_FloatFloat_ReturnValue3__pf;
			}
		case 145:
			{
				bpv__AmmoInGun__pf = 15.000000;
				CurrentState = 141;
				break;
			}
		case 174:
			{
				bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::EqualEqual_FloatFloat(bpv__AmmoInGun__pf, 15.000000);
				if (!bpv__CallFunc_EqualEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 175;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 175:
			{
				if (!bpv__IsRunningx__pfzy)
				{
					CurrentState = 176;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 176:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 177:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__AmmoReserved__pf, 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 143;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 341:
			{
				b0l__Temp_struct_Variable6__pf = b0l__K2Node_InputActionEvent_Key4__pf;
				CurrentState = 174;
				break;
			}
		case 343:
			{
				CurrentState = 341;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_19(int32 bpp__EntryPoint__pf)
{
	FTransform bpv__CallFunc_GetSocketTransform_ReturnValue__pf{};
	FVector bpv__CallFunc_GetSocketLocation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetForwardVector_ReturnValue2__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_Add_VectorVector_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_LineTraceSingle_NEW_ReturnValue__pf{};
	TEnumAsByte<EPhysicalSurface> bpv__CallFunc_GetSurfaceType_ReturnValue__pf{};
	FRotator bpv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	UParticleSystemComponent* bpv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf{};
	UParticleSystemComponent* bpv__CallFunc_SpawnEmitterAtLocation_ReturnValue2__pf{};
	FRotator bpv__CallFunc_FindLookAtRotation_ReturnValue__pf(EForceInit::ForceInit);
	FTransform bpv__CallFunc_MakeTransform_ReturnValue__pf{};
	AActor* bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf{};
	AHandgunBullet_C__pf3442503945* bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 146:
			{
				if(IsValid(bpv__M9xwxFlashlight__pfGG))
				{
					bpv__CallFunc_GetSocketTransform_ReturnValue__pf = bpv__M9xwxFlashlight__pfGG->GetSocketTransform(FName(TEXT("ShootSocket")), ERelativeTransformSpace::RTS_World);
				}
				UKismetMathLibrary::BreakTransform(bpv__CallFunc_GetSocketTransform_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakTransform_Location__pf, /*out*/ b0l__CallFunc_BreakTransform_Rotation__pf, /*out*/ b0l__CallFunc_BreakTransform_Scale__pf);
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(b0l__CallFunc_BreakTransform_Location__pf, b0l__CallFunc_BreakHitResult_Location__pf);
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_BreakTransform_Location__pf, bpv__CallFunc_FindLookAtRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_FinishSpawningActor_ReturnValue2__pf = CastChecked<AHandgunBullet_C__pf3442503945>(UGameplayStatics::FinishSpawningActor(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, bpv__CallFunc_MakeTransform_ReturnValue__pf), ECastCheckedType::NullAllowed);
				CurrentState = -1;
				break;
			}
		case 147:
			{
				UKismetSystemLibrary::SetObjectPropertyByName(bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf, FName(TEXT("Instigator")), this);
				CurrentState = 146;
				break;
			}
		case 148:
			{
				if(IsValid(bpv__M9xwxFlashlight__pfGG))
				{
					bpv__CallFunc_GetSocketTransform_ReturnValue__pf = bpv__M9xwxFlashlight__pfGG->GetSocketTransform(FName(TEXT("ShootSocket")), ERelativeTransformSpace::RTS_World);
				}
				UKismetMathLibrary::BreakTransform(bpv__CallFunc_GetSocketTransform_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakTransform_Location__pf, /*out*/ b0l__CallFunc_BreakTransform_Rotation__pf, /*out*/ b0l__CallFunc_BreakTransform_Scale__pf);
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__CallFunc_FindLookAtRotation_ReturnValue__pf = UKismetMathLibrary::FindLookAtRotation(b0l__CallFunc_BreakTransform_Location__pf, b0l__CallFunc_BreakHitResult_Location__pf);
				bpv__CallFunc_MakeTransform_ReturnValue__pf = UKismetMathLibrary::MakeTransform(b0l__CallFunc_BreakTransform_Location__pf, bpv__CallFunc_FindLookAtRotation_ReturnValue__pf, FVector(1.000000,1.000000,1.000000));
				bpv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue2__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AHandgunBullet_C__pf3442503945::StaticClass(), bpv__CallFunc_MakeTransform_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::AlwaysSpawn, nullptr);
				CurrentState = 147;
				break;
			}
		case 149:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(b0l__CallFunc_BreakHitResult_Normal__pf);
				bpv__CallFunc_SpawnEmitterAtLocation_ReturnValue2__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[15], ECastCheckedType::NullAllowed), b0l__CallFunc_BreakHitResult_Location__pf, bpv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, true);
				CurrentState = 148;
				break;
			}
		case 150:
			{
				UGameplayStatics::BreakHitResult(b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bBlockingHit__pf, /*out*/ b0l__CallFunc_BreakHitResult_bInitialOverlap__pf, /*out*/ b0l__CallFunc_BreakHitResult_Time__pf, /*out*/ b0l__CallFunc_BreakHitResult_Location__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactPoint__pf, /*out*/ b0l__CallFunc_BreakHitResult_Normal__pf, /*out*/ b0l__CallFunc_BreakHitResult_ImpactNormal__pf, /*out*/ b0l__CallFunc_BreakHitResult_PhysMat__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitActor__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitComponent__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitBoneName__pf, /*out*/ b0l__CallFunc_BreakHitResult_HitItem__pf, /*out*/ b0l__CallFunc_BreakHitResult_FaceIndex__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceStart__pf, /*out*/ b0l__CallFunc_BreakHitResult_TraceEnd__pf);
				bpv__CallFunc_SpawnEmitterAtLocation_ReturnValue__pf = UGameplayStatics::SpawnEmitterAtLocation(this, CastChecked<UParticleSystem>(CastChecked<UDynamicClass>(AMyChar_C__pf2980937819::StaticClass())->UsedAssets[16], ECastCheckedType::NullAllowed), b0l__CallFunc_BreakHitResult_Location__pf, FRotator(0.000000,0.000000,0.000000), true);
				CurrentState = 148;
				break;
			}
		case 151:
			{
				bpv__CallFunc_GetSurfaceType_ReturnValue__pf = UGameplayStatics::GetSurfaceType(b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf);
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(bpv__CallFunc_GetSurfaceType_ReturnValue__pf)), EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(EPhysicalSurface::SurfaceType_Default)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 150;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(bpv__CallFunc_GetSurfaceType_ReturnValue__pf)), EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(EPhysicalSurface::SurfaceType1)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(bpv__CallFunc_GetSurfaceType_ReturnValue__pf)), EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(EPhysicalSurface::SurfaceType2)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(bpv__CallFunc_GetSurfaceType_ReturnValue__pf)), EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(EPhysicalSurface::SurfaceType3)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				b0l__K2Node_SwitchEnum_CmpSuccess__pf = UKismetMathLibrary::NotEqual_ByteByte(EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(bpv__CallFunc_GetSurfaceType_ReturnValue__pf)), EnumToByte<EPhysicalSurface>(TEnumAsByte<EPhysicalSurface>(EPhysicalSurface::SurfaceType4)));
				if (!b0l__K2Node_SwitchEnum_CmpSuccess__pf)
				{
					CurrentState = 149;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 152:
			{
				if (!bpv__CallFunc_LineTraceSingle_NEW_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 151;
				break;
			}
		case 153:
			{
				if(IsValid(bpv__Camera__pf))
				{
					bpv__CallFunc_GetSocketLocation_ReturnValue__pf = bpv__Camera__pf->GetSocketLocation(FName(TEXT("None")));
				}
				if(IsValid(bpv__Camera__pf))
				{
					bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf = bpv__Camera__pf->USceneComponent::K2_GetComponentRotation();
				}
				bpv__CallFunc_GetForwardVector_ReturnValue2__pf = UKismetMathLibrary::GetForwardVector(bpv__CallFunc_K2_GetComponentRotation_ReturnValue__pf);
				bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_VectorFloat(bpv__CallFunc_GetForwardVector_ReturnValue2__pf, 5000.000000);
				bpv__CallFunc_Add_VectorVector_ReturnValue__pf = UKismetMathLibrary::Add_VectorVector(bpv__CallFunc_GetSocketLocation_ReturnValue__pf, bpv__CallFunc_Multiply_VectorFloat_ReturnValue__pf);
				bpv__CallFunc_LineTraceSingle_NEW_ReturnValue__pf = UKismetSystemLibrary::LineTraceSingle_NEW(this, bpv__CallFunc_GetSocketLocation_ReturnValue__pf, bpv__CallFunc_Add_VectorVector_ReturnValue__pf, ETraceTypeQuery::TraceTypeQuery1, false, b0l__Temp_object_Variable__pf, EDrawDebugTrace::None, /*out*/ b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf, true, FLinearColor(1.000000,0.000000,0.000000,1.000000), FLinearColor(0.000000,1.000000,0.000000,1.000000), 5.000000);
				CurrentState = 152;
				break;
			}
		case 235:
			{
			}
		case 236:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 153;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_20(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 178:
			{
				bpv__isReloadingx__pfzy = false;
				CurrentState = -1;
				break;
			}
		case 179:
			{
				UKismetSystemLibrary::Delay(this, 2.333000, FLatentActionInfo(180, 637021618, TEXT("ExecuteUbergraph_MyChar_20"), this));
				CurrentState = -1;
				break;
			}
		case 180:
			{
				CurrentState = 178;
				break;
			}
		case 342:
			{
				b0l__Temp_struct_Variable6__pf = b0l__K2Node_InputActionEvent_Key5__pf;
				CurrentState = 179;
				break;
			}
		case 346:
			{
				CurrentState = 342;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_21(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 197);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_22(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 200:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = 201;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 201:
			{
				if(IsValid(bpv__Timeline_0__pf))
				{
					bpv__Timeline_0__pf->UTimelineComponent::Reverse();
				}
				CurrentState = -1;
				break;
			}
		case 345:
			{
				b0l__Temp_struct_Variable5__pf = b0l__K2Node_InputActionEvent_Key7__pf;
				CurrentState = 200;
				break;
			}
		case 348:
			{
				CurrentState = 345;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_23(int32 bpp__EntryPoint__pf)
{
	APlayerController* bpv__CallFunc_GetPlayerController_ReturnValue__pf{};
	bool bpv__CallFunc_IsInputKeyDown_ReturnValue__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 202:
			{
			}
		case 203:
			{
				if(IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = bpv__RunSpeed_runspeed_B935A3774C2271BC4ECA2D9DC50D8DEA__pf;
				}
			}
		case 204:
			{
				if (!bpv__Moving__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 205:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					uint8* __Local__110 = (uint8*)FMemory_Alloca(FKey::StaticStruct()->GetStructureSize());
					FKey::StaticStruct()->InitializeStruct(__Local__110);
					FKey& __Local__109 = *reinterpret_cast<FKey*>(__Local__110);
					auto& __Local__111 = (*(AccessPrivateProperty<FName >(&(__Local__109), FKey::__PPO__KeyName() )));
					__Local__111 = FName(TEXT("AnyKey"));
					bpv__CallFunc_IsInputKeyDown_ReturnValue__pf = bpv__CallFunc_GetPlayerController_ReturnValue__pf->APlayerController::IsInputKeyDown(__Local__109);
				}
				if (!bpv__CallFunc_IsInputKeyDown_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 206:
			{
				if (!bpv__IsRunningx__pfzy)
				{
					CurrentState = -1;
					break;
				}
			}
		case 207:
			{
				bpv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				if(IsValid(bpv__CallFunc_GetPlayerController_ReturnValue__pf))
				{
					bpv__CallFunc_GetPlayerController_ReturnValue__pf->ClientPlayCameraShake(URunCamShake_C__pf2403237688::StaticClass(), 0.200000, ECameraAnimPlaySpace::CameraLocal, FRotator(0.000000,0.000000,0.000000));
				}
			}
		case 208:
			{
				UKismetSystemLibrary::RetriggerableDelay(this, 0.010000, FLatentActionInfo(209, 1793382560, TEXT("ExecuteUbergraph_MyChar_23"), this));
				CurrentState = -1;
				break;
			}
		case 209:
			{
				CurrentState = 205;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_24(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 210:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = 211;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 211:
			{
				if(IsValid(bpv__Timeline_0__pf))
				{
					bpv__Timeline_0__pf->UTimelineComponent::Play();
				}
				CurrentState = -1;
				break;
			}
		case 344:
			{
				b0l__Temp_struct_Variable5__pf = b0l__K2Node_InputActionEvent_Key6__pf;
				CurrentState = 210;
				break;
			}
		case 347:
			{
				CurrentState = 344;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_25(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 232);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Camera__pf))
	{
		bpv__Camera__pf->FieldOfView = bpv__Timeline_0_FOVchange_03F817B94C9EAEDB0DA054B35B3E5B0B__pf;
	}
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_26(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 213:
			{
				if (!bpv__IsRunningx__pfzy)
				{
					CurrentState = 214;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 214:
			{
				if (!bpv__HasWeaponInHand__pf)
				{
					CurrentState = 222;
					break;
				}
			}
		case 215:
			{
				StateStack.Push(216);
				CurrentState = 218;
				break;
			}
		case 216:
			{
			}
		case 217:
			{
				if(IsValid(bpv__ChangeFOV__pf))
				{
					bpv__ChangeFOV__pf->UTimelineComponent::Reverse();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 218:
			{
				StateStack.Push(219);
				CurrentState = 221;
				break;
			}
		case 219:
			{
			}
		case 220:
			{
				if(IsValid(bpv__ToShoulderAim__pf))
				{
					bpv__ToShoulderAim__pf->UTimelineComponent::Reverse();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 221:
			{
				if(IsValid(bpv__ToMainCamera__pf))
				{
					bpv__ToMainCamera__pf->UTimelineComponent::Play();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 222:
			{
				StateStack.Push(223);
				CurrentState = 225;
				break;
			}
		case 223:
			{
			}
		case 224:
			{
				if(IsValid(bpv__ChangeFOV__pf))
				{
					bpv__ChangeFOV__pf->UTimelineComponent::Play();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 225:
			{
				StateStack.Push(226);
				CurrentState = 228;
				break;
			}
		case 226:
			{
			}
		case 227:
			{
				if(IsValid(bpv__ToMainCamera__pf))
				{
					bpv__ToMainCamera__pf->UTimelineComponent::Reverse();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 228:
			{
				if(IsValid(bpv__ToShoulderAim__pf))
				{
					bpv__ToShoulderAim__pf->UTimelineComponent::Play();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 233:
			{
				CurrentState = 213;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_27(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 320);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__Camera__pf))
	{
		bpv__Camera__pf->FieldOfView = bpv__ChangeFOV_FOVchange_CD1CADEC4FA9DAE82F5D1985704FD5E9__pf;
	}
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_28(int32 bpp__EntryPoint__pf)
{
	FVector bpv__CallFunc_VLerp_ReturnValue2__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_RLerp_ReturnValue2__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 242);
	// optimized KCST_UnconditionalGoto
	FVector  __Local__113 = FVector(0.000000,0.000000,0.000000);
	bpv__CallFunc_VLerp_ReturnValue2__pf = UKismetMathLibrary::VLerp(bpv__MainCameraLocation__pf, ((IsValid(bpv__ShoulderAimCam__pf)) ? (bpv__ShoulderAimCam__pf->RelativeLocation) : (__Local__113)), bpv__ToShoulderAim_Location_Dynamic_DA9B2277448FF7FBDEBD41B389145CA3__pf);
	FRotator  __Local__114 = FRotator(0.000000,0.000000,0.000000);
	bpv__CallFunc_RLerp_ReturnValue2__pf = UKismetMathLibrary::RLerp(bpv__MainCameraRotation__pf, ((IsValid(bpv__ShoulderAimCam__pf)) ? (bpv__ShoulderAimCam__pf->RelativeRotation) : (__Local__114)), bpv__ToShoulderAim_Rotation_Dynamic_DA9B2277448FF7FBDEBD41B389145CA3__pf, false);
	if(IsValid(bpv__Camera__pf))
	{
		bpv__Camera__pf->USceneComponent::K2_SetRelativeLocationAndRotation(bpv__CallFunc_VLerp_ReturnValue2__pf, bpv__CallFunc_RLerp_ReturnValue2__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult2__pf, false);
	}
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_29(int32 bpp__EntryPoint__pf)
{
	FVector bpv__CallFunc_VLerp_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_RLerp_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 294);
	// optimized KCST_UnconditionalGoto
	FVector  __Local__115 = FVector(0.000000,0.000000,0.000000);
	bpv__CallFunc_VLerp_ReturnValue__pf = UKismetMathLibrary::VLerp(((IsValid(bpv__ShoulderAimCam__pf)) ? (bpv__ShoulderAimCam__pf->RelativeLocation) : (__Local__115)), bpv__MainCameraLocation__pf, bpv__ToMainCamera_Location_Dynamic_144456974213271D75BC41AC463FE398__pf);
	FRotator  __Local__116 = FRotator(0.000000,0.000000,0.000000);
	bpv__CallFunc_RLerp_ReturnValue__pf = UKismetMathLibrary::RLerp(((IsValid(bpv__ShoulderAimCam__pf)) ? (bpv__ShoulderAimCam__pf->RelativeRotation) : (__Local__116)), bpv__MainCameraRotation__pf, bpv__ToMainCamera_Rotation_Dynamic_144456974213271D75BC41AC463FE398__pf, false);
	if(IsValid(bpv__Camera__pf))
	{
		bpv__Camera__pf->USceneComponent::K2_SetRelativeLocationAndRotation(bpv__CallFunc_VLerp_ReturnValue__pf, bpv__CallFunc_RLerp_ReturnValue__pf, false, /*out*/ b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf, false);
	}
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_30(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 241);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_31(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_Less_FloatFloat_ReturnValue__pf{};
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue2__pf{};
	FVector bpv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	bool bpv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 247:
			{
				StateStack.Push(248);
				CurrentState = 265;
				break;
			}
		case 248:
			{
			}
		case 249:
			{
				if (!bpv__IsLookAroundCharOnx__pfzy)
				{
					CurrentState = 250;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 250:
			{
				StateStack.Push(251);
				CurrentState = 254;
				break;
			}
		case 251:
			{
			}
		case 252:
			{
				bpv__TurnRight__pf = bpv__TurnRight__pf;
			}
		case 253:
			{
				bpv__TurnLeft__pf = bpv__TurnLeft__pf;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 254:
			{
				bpv__CallFunc_GetVelocity_ReturnValue__pf = GetVelocity();
				bpv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf = UKismetMathLibrary::EqualEqual_VectorVector(bpv__CallFunc_GetVelocity_ReturnValue__pf, FVector(0.000000,0.000000,0.000000), 0.010000);
				if (!bpv__CallFunc_EqualEqual_VectorVector_ReturnValue__pf)
				{
					CurrentState = 263;
					break;
				}
			}
		case 255:
			{
				StateStack.Push(256);
				CurrentState = 259;
				break;
			}
		case 256:
			{
			}
		case 257:
			{
				bpv__CallFunc_Less_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Less_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue__pf, -0.300000);
				if (!bpv__CallFunc_Less_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 266;
					break;
				}
			}
		case 258:
			{
				bpv__TurnLeft__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 259:
			{
				bpv__CallFunc_Greater_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Greater_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue__pf, 0.300000);
				if (!bpv__CallFunc_Greater_FloatFloat_ReturnValue2__pf)
				{
					CurrentState = 262;
					break;
				}
			}
		case 260:
			{
				bpv__TurnRight__pf = true;
			}
		case 261:
			{
				bpv__TurnLeft__pf = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 262:
			{
				bpv__TurnRight__pf = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 263:
			{
				bpv__TurnRight__pf = false;
			}
		case 264:
			{
				bpv__TurnLeft__pf = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 265:
			{
				AddControllerYawInput(b0l__K2Node_InputAxisEvent_AxisValue__pf);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 266:
			{
				bpv__TurnLeft__pf = false;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 326:
			{
				CurrentState = 247;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_32(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 287);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_33(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 295);
	bpv__CanClimbx__pfzy = false;
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_34(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 297);
	bpv__CanClimbx__pfzy = true;
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_35(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 311);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__CurrentWeapon__pf))
	{
		bpv__CurrentWeapon__pf->AActor::K2_AttachRootComponentTo((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("HolsterSocket")), EAttachLocation::SnapToTarget, true);
	}
	// optimized KCST_UnconditionalGoto
	bpv__HolsteredWeapon__pf = bpv__CurrentWeapon__pf;
	// optimized KCST_UnconditionalGoto
	bpv__CurrentWeapon__pf = nullptr;
	// optimized KCST_UnconditionalGoto
	bpv__HasWeaponInHand__pf = false;
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_36(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 307);
	// optimized KCST_UnconditionalGoto
	if(IsValid(bpv__HolsteredWeapon__pf))
	{
		bpv__HolsteredWeapon__pf->AActor::K2_AttachRootComponentTo((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("weaponSocket")), EAttachLocation::SnapToTarget, true);
	}
	// optimized KCST_UnconditionalGoto
	bpv__CurrentWeapon__pf = bpv__HolsteredWeapon__pf;
	// optimized KCST_UnconditionalGoto
	bpv__HolsteredWeapon__pf = nullptr;
	// optimized KCST_UnconditionalGoto
	bpv__HasWeaponInHand__pf = true;
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_37(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_Add_FloatFloat_ReturnValue__pf{};
	FRotator bpv__CallFunc_GetControlRotation_ReturnValue2__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_NormalizedDeltaRotator_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 327);
	// optimized KCST_UnconditionalGoto
	AddControllerPitchInput(b0l__K2Node_InputAxisEvent_AxisValue2__pf);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetControlRotation_ReturnValue2__pf = APawn::GetControlRotation();
	bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf = AActor::K2_GetActorRotation();
	bpv__CallFunc_NormalizedDeltaRotator_ReturnValue__pf = UKismetMathLibrary::NormalizedDeltaRotator(bpv__CallFunc_GetControlRotation_ReturnValue2__pf, bpv__CallFunc_K2_GetActorRotation_ReturnValue__pf);
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_NormalizedDeltaRotator_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll2__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch2__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw2__pf);
	bpv__Pitch__pf = b0l__CallFunc_BreakRotator_Pitch2__pf;
	bpv__CallFunc_Add_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Add_FloatFloat(bpv__Pitch__pf, 10.000000);
	bpv__Pitch__pf = bpv__CallFunc_Add_FloatFloat_ReturnValue__pf;
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_38(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 319);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_39(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf{};
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf{};
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf{};
	check(bpp__EntryPoint__pf == 329);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue4__pf, bpv__BaseTurnRate__pf);
	bpv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__CallFunc_Multiply_FloatFloat_ReturnValue2__pf, bpv__CallFunc_GetWorldDeltaSeconds_ReturnValue__pf);
	AddControllerYawInput(bpv__CallFunc_Multiply_FloatFloat_ReturnValue4__pf);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_40(int32 bpp__EntryPoint__pf)
{
	float bpv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf{};
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf{};
	check(bpp__EntryPoint__pf == 328);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf = UGameplayStatics::GetWorldDeltaSeconds(this);
	bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Multiply_FloatFloat(b0l__K2Node_InputAxisEvent_AxisValue3__pf, bpv__BaseLookUpRate__pf);
	bpv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::Multiply_FloatFloat(bpv__CallFunc_Multiply_FloatFloat_ReturnValue__pf, bpv__CallFunc_GetWorldDeltaSeconds_ReturnValue2__pf);
	AddControllerPitchInput(bpv__CallFunc_Multiply_FloatFloat_ReturnValue3__pf);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_41(int32 bpp__EntryPoint__pf)
{
	FRotator bpv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 333);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpv__CallFunc_MakeRotator_ReturnValue__pf);
	AddMovementInput(bpv__CallFunc_GetForwardVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue6__pf, false);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_42(int32 bpp__EntryPoint__pf)
{
	FRotator bpv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 332);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpv__CallFunc_MakeRotator_ReturnValue__pf);
	AddMovementInput(bpv__CallFunc_GetRightVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue5__pf, false);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__ExecuteUbergraph_MyChar__pf_43(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 366);
	return; //KCST_EndOfThread
}
void AMyChar_C__pf2980937819::bpf__HolsterxDrawxWeapon__pfET()
{
	bpf__ExecuteUbergraph_MyChar__pf_3(68);
}
void AMyChar_C__pf2980937819::bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
{
	typedef UDamageType*  T__Local__117;
	T__Local__117& bpp__DamageType__pf = *const_cast<T__Local__117 *>(&bpp__DamageType__pf__const);
	b0l__K2Node_Event_Damage__pf = bpp__Damage__pf;
	b0l__K2Node_Event_DamageType__pf = bpp__DamageType__pf;
	b0l__K2Node_Event_InstigatedBy__pf = bpp__InstigatedBy__pf;
	b0l__K2Node_Event_DamageCauser__pf = bpp__DamageCauser__pf;
	bpf__ExecuteUbergraph_MyChar__pf_9(121);
}
void AMyChar_C__pf2980937819::bpf__SwitchToAimView__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_26(233);
}
void AMyChar_C__pf2980937819::bpf__ShootTrace__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_19(235);
}
void AMyChar_C__pf2980937819::bpf__BndEvt__BoxClimb_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_MyChar__pf_33(295);
}
void AMyChar_C__pf2980937819::bpf__BndEvt__BoxClimb_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__118;
	T__Local__118& bpp__SweepResult__pf = *const_cast<T__Local__118 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_MyChar__pf_34(297);
}
void AMyChar_C__pf2980937819::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_MyChar__pf_0(299);
}
void AMyChar_C__pf2980937819::bpf__UnHolsterWeapon__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_36(307);
}
void AMyChar_C__pf2980937819::bpf__HolsterWeapon__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_35(311);
}
void AMyChar_C__pf2980937819::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_11(316);
}
void AMyChar_C__pf2980937819::bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MyChar__pf_31(326);
}
void AMyChar_C__pf2980937819::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MyChar__pf_37(327);
}
void AMyChar_C__pf2980937819::bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MyChar__pf_40(328);
}
void AMyChar_C__pf2980937819::bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MyChar__pf_39(329);
}
void AMyChar_C__pf2980937819::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue5__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MyChar__pf_42(332);
}
void AMyChar_C__pf2980937819::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue6__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_MyChar__pf_41(333);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_AimDownSights_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_6(338);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Interact_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_10(339);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Interact_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_12(340);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Reload_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_18(343);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Reload_K2Node_InputActionEvent_14__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_20(346);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_15__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_24(347);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_16__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_22(348);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Shoot_K2Node_InputActionEvent_17__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_4(351);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Shoot_K2Node_InputActionEvent_18__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key9__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_5(352);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Flashlight_K2Node_InputActionEvent_19__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputActionEvent_Key10__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_17(353);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_14(356);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key2__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_15(359);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_LeftShift_K2Node_InputKeyEvent_10__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key3__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_14(360);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_LeftShift_K2Node_InputKeyEvent_11__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key4__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_15(363);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key5__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_7(364);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_13__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key6__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_8(365);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_LeftShift_K2Node_InputKeyEvent_14__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key7__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_7(322);
}
void AMyChar_C__pf2980937819::bpf__InpActEvt_LeftShift_K2Node_InputKeyEvent_15__pf(FKey bpp__Key__pf)
{
	b0l__K2Node_InputKeyEvent_Key8__pf = bpp__Key__pf;
	bpf__ExecuteUbergraph_MyChar__pf_8(245);
}
void AMyChar_C__pf2980937819::bpf__Timeline_0__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_25(232);
}
void AMyChar_C__pf2980937819::bpf__Timeline_0__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_1(4);
}
void AMyChar_C__pf2980937819::bpf__ChangeFOV__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_27(320);
}
void AMyChar_C__pf2980937819::bpf__ChangeFOV__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_38(319);
}
void AMyChar_C__pf2980937819::bpf__ToMainCamera__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_29(294);
}
void AMyChar_C__pf2980937819::bpf__ToMainCamera__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_32(287);
}
void AMyChar_C__pf2980937819::bpf__ToShoulderAim__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_28(242);
}
void AMyChar_C__pf2980937819::bpf__ToShoulderAim__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_30(241);
}
void AMyChar_C__pf2980937819::bpf__RunSpeed__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_23(202);
}
void AMyChar_C__pf2980937819::bpf__RunSpeed__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_21(197);
}
void AMyChar_C__pf2980937819::bpf__RunningFOV_Pistol__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_16(126);
}
void AMyChar_C__pf2980937819::bpf__RunningFOV_Pistol__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_13(104);
}
void AMyChar_C__pf2980937819::bpf__RunningFOV__UpdateFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_2(20);
}
void AMyChar_C__pf2980937819::bpf__RunningFOV__FinishedFunc__pf()
{
	bpf__ExecuteUbergraph_MyChar__pf_43(366);
}
void AMyChar_C__pf2980937819::bpf__UserConstructionScript__pf()
{
}
void AMyChar_C__pf2980937819::bpf__SetIsRunning__pf(bool bpp__IsRunning__pf)
{
	bpv__IsRunningx__pfzy = bpp__IsRunning__pf;
}
void AMyChar_C__pf2980937819::bpf__SetIsMoving__pf(bool bpp__IsMoving__pf)
{
	bpv__Moving__pf = bpp__IsMoving__pf;
}
void AMyChar_C__pf2980937819::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__119 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__120 = TEXT("/Game/Soldier_ru_01/Meshes");
	const TCHAR* __Local__121 = TEXT("/Game/Materials");
	const TCHAR* __Local__122 = TEXT("/Game/Weapons");
	const TCHAR* __Local__123 = TEXT("/Game/Audio");
	const TCHAR* __Local__124 = TEXT("/Game/Mannequin");
	const TCHAR* __Local__125 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__126 = TEXT("/Game/BulletVFX/Particles");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__119, TEXT("Pistol_Idle"), TEXT("Pistol_Idle"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__120, TEXT("Soldier_ru_01"), TEXT("Soldier_ru_01"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__121, TEXT("HumanPhysicalMaterial"), TEXT("HumanPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__122, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__123, TEXT("Dramatic_Hit_Hard_10"), TEXT("Dramatic_Hit_Hard_10"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__123, TEXT("Death_Scream"), TEXT("Death_Scream"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__123, TEXT("LostIt"), TEXT("LostIt"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__123, TEXT("Player_Heal"), TEXT("Player_Heal"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__123, TEXT("SlowHeartbeat"), TEXT("SlowHeartbeat"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__124, TEXT("Climbing"), TEXT("Climbing"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__125, TEXT("PistolEquipMontage"), TEXT("PistolEquipMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__125, TEXT("PistolEquipWeaponAnimMontage"), TEXT("PistolEquipWeaponAnimMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__123, TEXT("Trigger_click_empty"), TEXT("Trigger_click_empty"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__123, TEXT("Flashlight_ON"), TEXT("Flashlight_ON"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__123, TEXT("Flashlight_OFF"), TEXT("Flashlight_OFF"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__126, TEXT("VFX_Impact_Flesh"), TEXT("VFX_Impact_Flesh"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__126, TEXT("VFX_Impact_Concrete"), TEXT("VFX_Impact_Concrete"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void AMyChar_C__pf2980937819::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void AMyChar_C__pf2980937819::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__127 = TEXT("/Game/Images");
	const TCHAR* __Local__128 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__129 = TEXT("/Game/Fonts");
	const TCHAR* __Local__130 = TEXT("/Game/OldTrainFactory/Textures/build");
	const TCHAR* __Local__131 = TEXT("/Game/Audio");
	const TCHAR* __Local__132 = TEXT("/Game/UI/Hud");
	const TCHAR* __Local__133 = TEXT("/Game/Mannequin/Character/Mesh");
	const TCHAR* __Local__134 = TEXT("/Game/Audio/walking-sounds");
	const TCHAR* __Local__135 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__136 = TEXT("/Game/Mannequin/MovementAnimPack");
	const TCHAR* __Local__137 = TEXT("/Game/Mannequin/Animations");
	const TCHAR* __Local__138 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__139 = TEXT("/Game/Mannequin/AngrosEdit");
	const TCHAR* __Local__140 = TEXT("/Game/BulletVFX/Meshes");
	const TCHAR* __Local__141 = TEXT("/Game/Materials");
	const TCHAR* __Local__142 = TEXT("/Game/Audio/Zombie-Sounds");
	const TCHAR* __Local__143 = TEXT("/Game/Audio/SoundAttenuation");
	const TCHAR* __Local__144 = TEXT("/Game/Audio/injured-sounds");
	const TCHAR* __Local__145 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	const TCHAR* __Local__146 = TEXT("/Game/ZombieMixamoModels/Animations/ZombieCop");
	const TCHAR* __Local__147 = TEXT("/Game/ZombieMixamoModels/BlendSpace");
	const TCHAR* __Local__148 = TEXT("/Game/Zombie_01/Animation/Root_Motion");
	const TCHAR* __Local__149 = TEXT("/Game/UI/LoadingScreens");
	const TCHAR* __Local__150 = TEXT("/Game/UI");
	const TCHAR* __Local__151 = TEXT("/Game/Weapons");
	const TCHAR* __Local__152 = TEXT("/Game/Mannequin/AngrosEdit/InfectedBlueprints");
	const TCHAR* __Local__153 = TEXT("/Game/ZombieMixamoModels");
	const TCHAR* __Local__154 = TEXT("/Game/Blueprints");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__127, TEXT("LoadingScreen-Town"), TEXT("LoadingScreen-Town"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__128, TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__129, TEXT("ADOBESONGSTD-LIGHT"), TEXT("ADOBESONGSTD-LIGHT"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__130, TEXT("Wood_01_D"), TEXT("Wood_01_D"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__131, TEXT("onClick"), TEXT("onClick"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__131, TEXT("hoverSound"), TEXT("hoverSound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__127, TEXT("LowHealthScreen"), TEXT("LowHealthScreen"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__132, TEXT("handgun_img"), TEXT("handgun_img"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__132, TEXT("HealthBar_Full"), TEXT("HealthBar_Full"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__127, TEXT("grunge-01-transparent"), TEXT("grunge-01-transparent"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__129, TEXT("corbel"), TEXT("corbel"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__129, TEXT("corbelb"), TEXT("corbelb"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__131, TEXT("Scary_impact"), TEXT("Scary_impact"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__132, TEXT("Crosshair_HUD"), TEXT("Crosshair_HUD"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__132, TEXT("Crosshair_HUD_Shoot"), TEXT("Crosshair_HUD_Shoot"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__133, TEXT("UE4_Mannequin_Skeleton"), TEXT("UE4_Mannequin_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__134, TEXT("footsteps"), TEXT("footsteps"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__135, TEXT("Pistol_Reload"), TEXT("Pistol_Reload"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__135, TEXT("Pistol_ShootOnce_Montage"), TEXT("Pistol_ShootOnce_Montage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__136, TEXT("ConsoleUse_LH"), TEXT("ConsoleUse_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("CrouchLoop_new"), TEXT("CrouchLoop_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("Crouch2Idle_new"), TEXT("Crouch2Idle_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("PickUp_LH"), TEXT("PickUp_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("Fists_Hit_Right"), TEXT("Fists_Hit_Right"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("Death_1"), TEXT("Death_1"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__135, TEXT("Pistol_SprintStart"), TEXT("Pistol_SprintStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("RunFwdStart"), TEXT("RunFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("JumpRun_LU_Land2Run"), TEXT("JumpRun_LU_Land2Run"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("JumpWalk_RU_Land2Walk"), TEXT("JumpWalk_RU_Land2Walk"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("JumpWalk_RU_Land"), TEXT("JumpWalk_RU_Land"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__137, TEXT("ThirdPersonJump_Loop"), TEXT("ThirdPersonJump_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__138, TEXT("WalkFwdStop_LU"), TEXT("WalkFwdStop_LU"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__138, TEXT("WalkFwdStart"), TEXT("WalkFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__139, TEXT("PistolGunUp_IdleToRun"), TEXT("PistolGunUp_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__139, TEXT("Pistol_IdleToRun"), TEXT("Pistol_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__136, TEXT("TurnLt90_Loop"), TEXT("TurnLt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__136, TEXT("TurnRt90_Loop"), TEXT("TurnRt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__139, TEXT("idleToRun"), TEXT("idleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__139, TEXT("PistolAO"), TEXT("PistolAO"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__139, TEXT("LookAround_1D"), TEXT("LookAround_1D"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__140, TEXT("SM_BulletCasing"), TEXT("SM_BulletCasing"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__141, TEXT("BulletPhysicalMaterial"), TEXT("BulletPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__142, TEXT("zombie-idle"), TEXT("zombie-idle"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__143, TEXT("3dSound"), TEXT("3dSound"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__142, TEXT("Zombie_-_attack"), TEXT("Zombie_-_attack"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__142, TEXT("zombie-dies"), TEXT("zombie-dies"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__142, TEXT("zombie-idle-2"), TEXT("zombie-idle-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__142, TEXT("zombie-idle-3"), TEXT("zombie-idle-3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__142, TEXT("zombie-detect"), TEXT("zombie-detect"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__142, TEXT("zombie-detect-2"), TEXT("zombie-detect-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__142, TEXT("zombie-dies-02"), TEXT("zombie-dies-02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__144, TEXT("injured-sounds"), TEXT("injured-sounds"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__145, TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__146, TEXT("zombie_biting"), TEXT("zombie_biting"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__146, TEXT("zombie_attack"), TEXT("zombie_attack"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__146, TEXT("zombie_dying"), TEXT("zombie_dying"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__147, TEXT("SimpleBlendSpace"), TEXT("SimpleBlendSpace"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__148, TEXT("Zombie_Chase_1_Full_Loop"), TEXT("Zombie_Chase_1_Full_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__145, TEXT("Copzombie_L_Actisdato"), TEXT("Copzombie_L_Actisdato"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__149, TEXT("LoadingScreen-WesternOak"), TEXT("LoadingScreen-WesternOak_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__150, TEXT("DeadScreen"), TEXT("DeadScreen_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__150, TEXT("InGameUI"), TEXT("InGameUI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__150, TEXT("BP_CrosshairShoot"), TEXT("BP_CrosshairShoot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__150, TEXT("BP_Crosshair"), TEXT("BP_Crosshair_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__139, TEXT("MyAnimBP_Mannequin"), TEXT("MyAnimBP_Mannequin_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__151, TEXT("HandgunBullet"), TEXT("HandgunBullet_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__152, TEXT("Infected-AI"), TEXT("Infected-AI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__153, TEXT("InfectedAnimBP"), TEXT("InfectedAnimBP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__154, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__154, TEXT("RunCamShake"), TEXT("RunCamShake_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__AMyChar_C__pf2980937819
{
	FRegisterHelper__AMyChar_C__pf2980937819()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Mannequin/AngrosEdit/MyChar"), &AMyChar_C__pf2980937819::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AMyChar_C__pf2980937819 Instance;
};
FRegisterHelper__AMyChar_C__pf2980937819 FRegisterHelper__AMyChar_C__pf2980937819::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
