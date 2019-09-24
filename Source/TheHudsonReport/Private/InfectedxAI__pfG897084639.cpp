#include "TheHudsonReport.h"
#include "InfectedxAI__pfG897084639.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/AIModule/Classes/Perception/PawnSensingComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
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
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
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
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "InfectedxAI__pfG897084639.h"
#include "MyChar__pf2980937819.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
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
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "LoadingScreenxWesternOak__pfG3933423829.h"
#include "DeadScreen__pf122804083.h"
#include "InGameUI__pf122804083.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundCue.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
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
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "InfectedAnimBP__pf529494595.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
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
AInfectedxAI_C__pfG897084639::AInfectedxAI_C__pfG897084639(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AInfectedxAI_C__pfG897084639::StaticClass() == GetClass()))
	{
		AInfectedxAI_C__pfG897084639::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
	__Local__0->bGenerateOverlapEvents = false;
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(GetDefaultSubobjectByName(TEXT("CharMoveComp")));
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
	__Local__4->AnimClass = UInfectedAnimBP_C__pf529494595::StaticClass();
	__Local__4->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__4->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	auto& __Local__5 = (*(AccessPrivateProperty<FName >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionProfileName() )));
	__Local__5 = FName(TEXT("Custom"));
	auto& __Local__6 = (*(AccessPrivateProperty<FCollisionResponse >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__7 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__6), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__7 = TArray<FResponseChannel> ();
	__Local__7.AddUninitialized(1);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__7.GetData(), 1);
	auto& __Local__8 = __Local__7[0];
	__Local__8.Channel = FName(TEXT("WorldStatic"));
	__Local__8.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__9 = (*(AccessPrivateProperty<TEnumAsByte<ECollisionEnabled::Type> >(&(__Local__4->BodyInstance), FBodyInstance::__PPO__CollisionEnabled() )));
	__Local__9 = ECollisionEnabled::Type::QueryAndPhysics;
	__Local__4->CanCharacterStepUpOn = ECanBeCharacterBase::ECB_No;
	__Local__4->RelativeLocation = FVector(-32.046875, -0.000717, -90.766541);
	__Local__4->RelativeRotation = FRotator(0.000000, -89.999969, 0.000000);
	__Local__4->RelativeScale3D = FVector(1.018234, 1.018234, 1.018234);
	bpv__PawnSensing__pf = CreateDefaultSubobject<UPawnSensingComponent>(TEXT("PawnSensing"));
	bpv__InRange__pf = CreateDefaultSubobject<UBoxComponent>(TEXT("InRange"));
	bpv__zombiexidle__pfG = CreateDefaultSubobject<UAudioComponent>(TEXT("zombie-idle"));
	bpv__Zombiexattack__pfG = CreateDefaultSubobject<UAudioComponent>(TEXT("Zombie-attack"));
	bpv__Zombiexdead__pfG = CreateDefaultSubobject<UAudioComponent>(TEXT("Zombie-dead"));
	bpv__zombiexidlex2__pfGG = CreateDefaultSubobject<UAudioComponent>(TEXT("zombie-idle-2"));
	bpv__zombiexidlex3__pfGG = CreateDefaultSubobject<UAudioComponent>(TEXT("zombie-idle-3"));
	bpv__zombiexdetect__pfG = CreateDefaultSubobject<UAudioComponent>(TEXT("zombie-detect"));
	bpv__zombiexdetectx2__pfGG = CreateDefaultSubobject<UAudioComponent>(TEXT("zombie-detect-2"));
	bpv__Zombiexdeadx02__pfGG = CreateDefaultSubobject<UAudioComponent>(TEXT("Zombie-dead-02"));
	bpv__PawnSensing__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__PawnSensing__pf->HearingThreshold = 2800.000000f;
	auto& __Local__10 = (*(AccessPrivateProperty<float >((bpv__PawnSensing__pf), UPawnSensingComponent::__PPO__PeripheralVisionAngle() )));
	__Local__10 = 45.000000f;
	bpv__InRange__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__InRange__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__InRange__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("Custom")));
	auto& __Local__11 = (*(AccessPrivateProperty<FCollisionResponse >(&(bpv__InRange__pf->BodyInstance), FBodyInstance::__PPO__CollisionResponses() )));
	auto& __Local__12 = (*(AccessPrivateProperty<TArray<FResponseChannel> >(&(__Local__11), FCollisionResponse::__PPO__ResponseArray() )));
	__Local__12 = TArray<FResponseChannel> ();
	__Local__12.AddUninitialized(8);
	FResponseChannel::StaticStruct()->InitializeStruct(__Local__12.GetData(), 8);
	auto& __Local__13 = __Local__12[0];
	__Local__13.Channel = FName(TEXT("Pawn"));
	__Local__13.Response = ECollisionResponse::ECR_Overlap;
	auto& __Local__14 = __Local__12[1];
	__Local__14.Channel = FName(TEXT("PhysicsBody"));
	__Local__14.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__15 = __Local__12[2];
	__Local__15.Channel = FName(TEXT("Visibility"));
	__Local__15.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__16 = __Local__12[3];
	__Local__16.Channel = FName(TEXT("Camera"));
	__Local__16.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__17 = __Local__12[4];
	__Local__17.Channel = FName(TEXT("WorldStatic"));
	__Local__17.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__18 = __Local__12[5];
	__Local__18.Channel = FName(TEXT("WorldDynamic"));
	__Local__18.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__19 = __Local__12[6];
	__Local__19.Channel = FName(TEXT("Vehicle"));
	__Local__19.Response = ECollisionResponse::ECR_Ignore;
	auto& __Local__20 = __Local__12[7];
	__Local__20.Channel = FName(TEXT("Destructible"));
	__Local__20.Response = ECollisionResponse::ECR_Ignore;
	bpv__InRange__pf->RelativeLocation = FVector(43.967720, -0.000076, -57.551853);
	bpv__InRange__pf->RelativeScale3D = FVector(1.604489, 1.900952, 0.547044);
	if(!bpv__InRange__pf->IsTemplate())
	{
		bpv__InRange__pf->BodyInstance.FixupData(bpv__InRange__pf);
	}
	bpv__zombiexidle__pfG->CreationMethod = EComponentCreationMethod::Native;
	bpv__zombiexidle__pfG->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__zombiexidle__pfG->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__zombiexidle__pfG->VolumeMultiplier = 0.700000f;
	bpv__zombiexidle__pfG->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__zombiexidle__pfG->AttenuationOverrides.AttenuationShapeExtents = FVector(500.000000, 0.000000, 0.000000);
	bpv__zombiexidle__pfG->AttenuationOverrides.FalloffDistance = 1500.000000f;
	bpv__zombiexidle__pfG->bAutoActivate = false;
	bpv__Zombiexattack__pfG->CreationMethod = EComponentCreationMethod::Native;
	bpv__Zombiexattack__pfG->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Zombiexattack__pfG->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	bpv__Zombiexattack__pfG->bOverrideAttenuation = true;
	bpv__Zombiexattack__pfG->VolumeMultiplier = 1.200000f;
	bpv__Zombiexattack__pfG->AttenuationOverrides.AttenuationShapeExtents = FVector(500.000000, 0.000000, 0.000000);
	bpv__Zombiexattack__pfG->AttenuationOverrides.FalloffDistance = 1500.000000f;
	bpv__Zombiexattack__pfG->bAutoActivate = false;
	bpv__Zombiexdead__pfG->CreationMethod = EComponentCreationMethod::Native;
	bpv__Zombiexdead__pfG->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Zombiexdead__pfG->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	bpv__Zombiexdead__pfG->bOverrideAttenuation = true;
	bpv__Zombiexdead__pfG->AttenuationOverrides.AttenuationShapeExtents = FVector(500.000000, 0.000000, 0.000000);
	bpv__Zombiexdead__pfG->AttenuationOverrides.FalloffDistance = 1500.000000f;
	bpv__Zombiexdead__pfG->bAutoActivate = false;
	bpv__zombiexidlex2__pfGG->CreationMethod = EComponentCreationMethod::Native;
	bpv__zombiexidlex2__pfGG->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__zombiexidlex2__pfGG->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	bpv__zombiexidlex2__pfGG->VolumeMultiplier = 0.700000f;
	bpv__zombiexidlex2__pfGG->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__zombiexidlex2__pfGG->AttenuationOverrides.AttenuationShapeExtents = FVector(500.000000, 0.000000, 0.000000);
	bpv__zombiexidlex2__pfGG->AttenuationOverrides.FalloffDistance = 1500.000000f;
	bpv__zombiexidlex2__pfGG->bAutoActivate = false;
	bpv__zombiexidlex3__pfGG->CreationMethod = EComponentCreationMethod::Native;
	bpv__zombiexidlex3__pfGG->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__zombiexidlex3__pfGG->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed);
	bpv__zombiexidlex3__pfGG->VolumeMultiplier = 0.700000f;
	bpv__zombiexidlex3__pfGG->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__zombiexidlex3__pfGG->AttenuationOverrides.AttenuationShapeExtents = FVector(500.000000, 0.000000, 0.000000);
	bpv__zombiexidlex3__pfGG->AttenuationOverrides.FalloffDistance = 1500.000000f;
	bpv__zombiexidlex3__pfGG->bAutoActivate = false;
	bpv__zombiexdetect__pfG->CreationMethod = EComponentCreationMethod::Native;
	bpv__zombiexdetect__pfG->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__zombiexdetect__pfG->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[8], ECastCheckedType::NullAllowed);
	bpv__zombiexdetect__pfG->VolumeMultiplier = 3.000000f;
	bpv__zombiexdetect__pfG->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__zombiexdetect__pfG->AttenuationOverrides.AttenuationShapeExtents = FVector(500.000000, 0.000000, 0.000000);
	bpv__zombiexdetect__pfG->AttenuationOverrides.FalloffDistance = 1500.000000f;
	bpv__zombiexdetect__pfG->bAutoActivate = false;
	bpv__zombiexdetectx2__pfGG->CreationMethod = EComponentCreationMethod::Native;
	bpv__zombiexdetectx2__pfGG->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__zombiexdetectx2__pfGG->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[9], ECastCheckedType::NullAllowed);
	bpv__zombiexdetectx2__pfGG->VolumeMultiplier = 3.000000f;
	bpv__zombiexdetectx2__pfGG->AttenuationSettings = CastChecked<USoundAttenuation>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__zombiexdetectx2__pfGG->AttenuationOverrides.AttenuationShapeExtents = FVector(500.000000, 0.000000, 0.000000);
	bpv__zombiexdetectx2__pfGG->AttenuationOverrides.FalloffDistance = 1500.000000f;
	bpv__zombiexdetectx2__pfGG->bAutoActivate = false;
	bpv__Zombiexdeadx02__pfGG->CreationMethod = EComponentCreationMethod::Native;
	bpv__Zombiexdeadx02__pfGG->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__Zombiexdeadx02__pfGG->Sound = CastChecked<USoundBase>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[10], ECastCheckedType::NullAllowed);
	bpv__Zombiexdeadx02__pfGG->bOverrideAttenuation = true;
	bpv__Zombiexdeadx02__pfGG->AttenuationOverrides.AttenuationShapeExtents = FVector(500.000000, 0.000000, 0.000000);
	bpv__Zombiexdeadx02__pfGG->AttenuationOverrides.FalloffDistance = 1500.000000f;
	bpv__Zombiexdeadx02__pfGG->bAutoActivate = false;
	bpv__Damage__pf = 0.100000f;
	bpv__ZombieHealth__pf = 0.570000f;
	bpv__Chasing__pf = false;
	bpv__IsAttackingx__pfzy = false;
	bpv__PlayerHealth__pf = 0.000000f;
	bpv__SpecialxInfectedx__pfGzy = false;
	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	Tags = TArray<FName> ();
	Tags.Reserve(1);
	Tags.Add(FName(TEXT("Enemy")));
}
void AInfectedxAI_C__pfG897084639::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__PawnSensing__pf)
	{
		bpv__PawnSensing__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__InRange__pf)
	{
		bpv__InRange__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__zombiexidle__pfG)
	{
		bpv__zombiexidle__pfG->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Zombiexattack__pfG)
	{
		bpv__Zombiexattack__pfG->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Zombiexdead__pfG)
	{
		bpv__Zombiexdead__pfG->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__zombiexidlex2__pfGG)
	{
		bpv__zombiexidlex2__pfGG->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__zombiexidlex3__pfGG)
	{
		bpv__zombiexidlex3__pfGG->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__zombiexdetect__pfG)
	{
		bpv__zombiexdetect__pfG->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__zombiexdetectx2__pfGG)
	{
		bpv__zombiexdetectx2__pfGG->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__Zombiexdeadx02__pfGG)
	{
		bpv__Zombiexdeadx02__pfGG->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AInfectedxAI_C__pfG897084639::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_UMyAnimBP_Mannequin_C__pf2980937819();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UMyAnimBP_Mannequin_C__pf2980937819());
	extern UClass* Z_Construct_UClass_AHandgunBullet_C__pf3442503945();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AHandgunBullet_C__pf3442503945());
	extern UClass* Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688());
	extern UClass* Z_Construct_UClass_URunCamShake_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_URunCamShake_C__pf2403237688());
	extern UClass* Z_Construct_UClass_UInfectedAnimBP_C__pf529494595();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInfectedAnimBP_C__pf529494595());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__21 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__21);
	__Local__21->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__21->ComponentDelegateBindings.AddUninitialized(3);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__21->ComponentDelegateBindings.GetData(), 3);
	auto& __Local__22 = __Local__21->ComponentDelegateBindings[0];
	__Local__22.ComponentPropertyName = FName(TEXT("InRange"));
	__Local__22.DelegatePropertyName = FName(TEXT("OnComponentEndOverlap"));
	__Local__22.FunctionNameToBind = FName(TEXT("BndEvt__InRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"));
	auto& __Local__23 = __Local__21->ComponentDelegateBindings[1];
	__Local__23.ComponentPropertyName = FName(TEXT("InRange"));
	__Local__23.DelegatePropertyName = FName(TEXT("OnComponentBeginOverlap"));
	__Local__23.FunctionNameToBind = FName(TEXT("BndEvt__InRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"));
	auto& __Local__24 = __Local__21->ComponentDelegateBindings[2];
	__Local__24.ComponentPropertyName = FName(TEXT("PawnSensing"));
	__Local__24.DelegatePropertyName = FName(TEXT("OnSeePawn"));
	__Local__24.FunctionNameToBind = FName(TEXT("BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature"));
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_0(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf{};
	AController* bpv__CallFunc_GetController_ReturnValue__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue3__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue5__pf{};
	bool bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	UAudioComponent* bpv__CallFunc_SpawnSound2D_ReturnValue__pf{};
	int32 bpv__CallFunc_RandomIntegerInRange_ReturnValue3__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__zombiexidle__pfG))
				{
					bpv__zombiexidle__pfG->UAudioComponent::Stop();
				}
				if(IsValid(bpv__zombiexidlex3__pfGG))
				{
					bpv__zombiexidlex3__pfGG->UAudioComponent::Stop();
				}
				if(IsValid(bpv__zombiexidlex2__pfGG))
				{
					bpv__zombiexidlex2__pfGG->UAudioComponent::Stop();
				}
				if(IsValid(bpv__zombiexdetect__pfG))
				{
					bpv__zombiexdetect__pfG->UAudioComponent::Stop();
				}
				if(IsValid(bpv__zombiexdetectx2__pfGG))
				{
					bpv__zombiexdetectx2__pfGG->UAudioComponent::Stop();
				}
			}
		case 2:
			{
				bpv__CallFunc_RandomIntegerInRange_ReturnValue3__pf = UKismetMathLibrary::RandomIntegerInRange(0, 1);
				b0l__Temp_int_Variable3__pf = bpv__CallFunc_RandomIntegerInRange_ReturnValue3__pf;
				if(IsValid(TSwitchValue<int32 , UAudioComponent* >(b0l__Temp_int_Variable3__pf, b0l__K2Node_Select3_Default__pf, 2, TSwitchPair<int32 , UAudioComponent* >(0, bpv__Zombiexdead__pfG), TSwitchPair<int32 , UAudioComponent* >(1, bpv__Zombiexdeadx02__pfGG))))
				{
					TSwitchValue<int32 , UAudioComponent* >(b0l__Temp_int_Variable3__pf, b0l__K2Node_Select3_Default__pf, 2, TSwitchPair<int32 , UAudioComponent* >(0, bpv__Zombiexdead__pfG), TSwitchPair<int32 , UAudioComponent* >(1, bpv__Zombiexdeadx02__pfGG))->UAudioComponent::Play(0.000000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				b0l__Temp_bool_IsClosed_Variable6__pf = true;
			}
		case 45:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__IsTakingDamagex__pfzy = true;
				}
			}
		case 46:
			{
				UGameplayStatics::ApplyDamage(b0l__K2Node_DynamicCast_AsMy_Char5__pf, bpv__Damage__pf, nullptr, nullptr, nullptr);
			}
		case 47:
			{
				float  __Local__25 = 0.000000;
				bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(((IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__CharHealth__pf) : (__Local__25)), 0.000000);
				if (!bpv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 48:
			{
				bpv__CallFunc_SpawnSound2D_ReturnValue__pf = UGameplayStatics::SpawnSound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(AInfectedxAI_C__pfG897084639::StaticClass())->UsedAssets[11], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr, false);
			}
		case 49:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf) && IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__InGameUI__pf) && IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__InGameUI__pf->bpv__DamageTaken__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__InGameUI__pf->bpv__DamageTaken__pf->SetVisibility(ESlateVisibility::Visible);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 50:
			{
				b0l__Temp_bool_IsClosed_Variable6__pf = false;
			}
		case 51:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable6__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 52:
			{
				b0l__Temp_bool_IsClosed_Variable6__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 53:
			{
				if (!b0l__Temp_bool_IsClosed_Variable6__pf)
				{
					CurrentState = 44;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 56:
			{
				UKismetSystemLibrary::Delay(this, 0.300000, FLatentActionInfo(57, -784872615, TEXT("ExecuteUbergraph_Infected-AI_0"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 57:
			{
			}
		case 58:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf) && IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__InGameUI__pf) && IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__InGameUI__pf->bpv__DamageTaken__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__InGameUI__pf->bpv__DamageTaken__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 59:
			{
			}
		case 60:
			{
				float  __Local__27 = 0.000000;
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue5__pf = UKismetMathLibrary::LessEqual_FloatFloat(((IsValid(b0l__K2Node_DynamicCast_AsMy_Char4__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char4__pf->bpv__CharHealth__pf) : (__Local__27)), 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue5__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 61:
			{
				if(IsValid(bpv__zombiexidle__pfG))
				{
					bpv__zombiexidle__pfG->UAudioComponent::Stop();
				}
				if(IsValid(bpv__zombiexidlex3__pfGG))
				{
					bpv__zombiexidlex3__pfGG->UAudioComponent::Stop();
				}
				if(IsValid(bpv__zombiexidlex2__pfGG))
				{
					bpv__zombiexidlex2__pfGG->UAudioComponent::Stop();
				}
				if(IsValid(bpv__Zombiexattack__pfG))
				{
					bpv__Zombiexattack__pfG->UAudioComponent::Stop();
				}
				if(IsValid(bpv__zombiexdetect__pfG))
				{
					bpv__zombiexdetect__pfG->UAudioComponent::Stop();
				}
				if(IsValid(bpv__zombiexdetectx2__pfGG))
				{
					bpv__zombiexdetectx2__pfGG->UAudioComponent::Stop();
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 63:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable6__pf)
				{
					CurrentState = 64;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 64:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable6__pf = true;
			}
		case 65:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 52;
				break;
			}
		case 69:
			{
				UKismetSystemLibrary::Delay(this, 1.000000, FLatentActionInfo(70, 2147483647, TEXT("ExecuteUbergraph_Infected-AI_0"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 70:
			{
				CurrentState = 50;
				break;
			}
		case 71:
			{
				StateStack.Push(72);
				CurrentState = 73;
				break;
			}
		case 72:
			{
				CurrentState = 69;
				break;
			}
		case 73:
			{
				StateStack.Push(74);
				CurrentState = 63;
				break;
			}
		case 74:
			{
				CurrentState = 53;
				break;
			}
		case 75:
			{
				UKismetSystemLibrary::Delay(this, 0.480000, FLatentActionInfo(76, 2147483647, TEXT("ExecuteUbergraph_Infected-AI_0"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 76:
			{
				CurrentState = 71;
				break;
			}
		case 77:
			{
				if (!bpv__IsAttackingx__pfzy)
				{
					CurrentState = 78;
					break;
				}
				CurrentState = 75;
				break;
			}
		case 78:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__IsTakingDamagex__pfzy = false;
				}
				CurrentState = 56;
				break;
			}
		case 92:
			{
				float  __Local__30 = 0.000000;
				bpv__PlayerHealth__pf = ((IsValid(b0l__K2Node_DynamicCast_AsMy_Char5__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char5__pf->bpv__CharHealth__pf) : (__Local__30));
				CurrentState = 77;
				break;
			}
		case 93:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue3__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMy_Char5__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess5__pf = (b0l__K2Node_DynamicCast_AsMy_Char5__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess5__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 92;
				break;
			}
		case 94:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue3__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMy_Char4__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue3__pf);
				b0l__K2Node_DynamicCast_bSuccess4__pf = (b0l__K2Node_DynamicCast_AsMy_Char4__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess4__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 59;
				break;
			}
		case 103:
			{
				StateStack.Push(104);
				CurrentState = 106;
				break;
			}
		case 104:
			{
				StateStack.Push(105);
				CurrentState = 93;
				break;
			}
		case 105:
			{
				CurrentState = 94;
				break;
			}
		case 106:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__ZombieHealth__pf, 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 107:
			{
				bpv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				if(IsValid(bpv__CallFunc_GetController_ReturnValue__pf))
				{
					bpv__CallFunc_GetController_ReturnValue__pf->StopMovement();
				}
			}
		case 108:
			{
				AActor::SetActorEnableCollision(false);
			}
		case 109:
			{
				StateStack.Push(110);
				CurrentState = 113;
				break;
			}
		case 110:
			{
			}
		case 111:
			{
				if (!b0l__Temp_bool_IsClosed_Variable5__pf)
				{
					CurrentState = 112;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 112:
			{
				b0l__Temp_bool_IsClosed_Variable5__pf = true;
				CurrentState = 1;
				break;
			}
		case 113:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable5__pf)
				{
					CurrentState = 114;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 114:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable5__pf = true;
			}
		case 115:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 116:
			{
				b0l__Temp_bool_IsClosed_Variable5__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 117:
			{
				CurrentState = 103;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_1(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_IsValid_ReturnValue2__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	int32 bpv__CallFunc_RandomIntegerInRange_ReturnValue2__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 3:
			{
				bpv__SpecialxInfectedx__pfGzy = false;
			}
		case 4:
			{
				StateStack.Push(5);
				CurrentState = 9;
				break;
			}
		case 5:
			{
			}
		case 6:
			{
				StateStack.Push(7);
				CurrentState = 15;
				break;
			}
		case 7:
			{
			}
		case 8:
			{
				if (!b0l__Temp_bool_IsClosed_Variable4__pf)
				{
					CurrentState = 19;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 9:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMy_Char2__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsMy_Char2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 10:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__ZombieHealth__pf, 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue3__pf)
				{
					CurrentState = 11;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, this, FVector(0.000000,0.000000,0.000000), b0l__K2Node_CustomEvent_TargetActor__pf, 5.000000, false);
			}
		case 12:
			{
				bpv__CallFunc_IsValid_ReturnValue2__pf = UKismetSystemLibrary::IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 13:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate3__pf.BindUFunction(this,FName(TEXT("OnSuccess_329799874A4B74ABDD2DCDB1E6BE70BF")));
				if(IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf->OnSuccess.Add(b0l__K2Node_CreateDelegate_OutputDelegate3__pf);
				}
			}
		case 14:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate4__pf.BindUFunction(this,FName(TEXT("OnFail_329799874A4B74ABDD2DCDB1E6BE70BF")));
				if(IsValid(b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf))
				{
					b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf->OnFail.Add(b0l__K2Node_CreateDelegate_OutputDelegate4__pf);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 15:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable2__pf)
				{
					CurrentState = 16;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable2__pf = true;
			}
		case 17:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 18:
			{
				b0l__Temp_bool_IsClosed_Variable4__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 19:
			{
				b0l__Temp_bool_IsClosed_Variable4__pf = true;
			}
		case 20:
			{
				b0l__Temp_object_Variable__pf = nullptr;
				bpv__CallFunc_RandomIntegerInRange_ReturnValue2__pf = UKismetMathLibrary::RandomIntegerInRange(0, 1);
				b0l__Temp_int_Variable2__pf = bpv__CallFunc_RandomIntegerInRange_ReturnValue2__pf;
				if(IsValid(TSwitchValue<int32 , UAudioComponent* >(b0l__Temp_int_Variable2__pf, b0l__K2Node_Select2_Default__pf, 3, TSwitchPair<int32 , UAudioComponent* >(0, bpv__zombiexdetect__pfG), TSwitchPair<int32 , UAudioComponent* >(1, bpv__zombiexdetectx2__pfGG), TSwitchPair<int32 , UAudioComponent* >(2, b0l__Temp_object_Variable__pf))))
				{
					TSwitchValue<int32 , UAudioComponent* >(b0l__Temp_int_Variable2__pf, b0l__K2Node_Select2_Default__pf, 3, TSwitchPair<int32 , UAudioComponent* >(0, bpv__zombiexdetect__pfG), TSwitchPair<int32 , UAudioComponent* >(1, bpv__zombiexdetectx2__pfGG), TSwitchPair<int32 , UAudioComponent* >(2, b0l__Temp_object_Variable__pf))->UAudioComponent::Play(0.000000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				UKismetSystemLibrary::Delay(this, 0.300000, FLatentActionInfo(22, 1004621352, TEXT("ExecuteUbergraph_Infected-AI_1"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 22:
			{
				CurrentState = 3;
				break;
			}
		case 23:
			{
				if (!bpv__SpecialxInfectedx__pfGzy)
				{
					CurrentState = 4;
					break;
				}
			}
		case 24:
			{
				StateStack.Push(25);
				CurrentState = 28;
				break;
			}
		case 25:
			{
			}
		case 26:
			{
				if (!b0l__Temp_bool_IsClosed_Variable3__pf)
				{
					CurrentState = 27;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 27:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
				CurrentState = 21;
				break;
			}
		case 28:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable4__pf)
				{
					CurrentState = 29;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable4__pf = true;
			}
		case 30:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 31:
			{
				b0l__Temp_bool_IsClosed_Variable3__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 118:
			{
				CurrentState = 23;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_2(int32 bpp__EntryPoint__pf)
{
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 32:
			{
				b0l__Temp_byte_Variable2__pf = b0l__K2Node_CustomEvent_MovementResult3__pf;
			}
		case 33:
			{
				UKismetSystemLibrary::Delay(this, 5.000000, FLatentActionInfo(34, -79704585, TEXT("ExecuteUbergraph_Infected-AI_2"), this));
				CurrentState = -1;
				break;
			}
		case 34:
			{
			}
		case 35:
			{
				bpf__Roam__pf();
				CurrentState = -1;
				break;
			}
		case 36:
			{
				CurrentState = 32;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 133);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable2__pf = b0l__K2Node_CustomEvent_MovementResult4__pf;
	return; //KCST_EndOfThread
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_4(int32 bpp__EntryPoint__pf)
{
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 38:
			{
				if (!bpv__IsAttackingx__pfzy)
				{
					CurrentState = 42;
					break;
				}
			}
		case 39:
			{
				if(IsValid(bpv__Zombiexattack__pfG))
				{
					bpv__Zombiexattack__pfG->UAudioComponent::Play(0.000000);
				}
			}
		case 40:
			{
				UKismetSystemLibrary::Delay(this, 1.300000, FLatentActionInfo(41, 2147483647, TEXT("ExecuteUbergraph_Infected-AI_4"), this));
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 41:
			{
				CurrentState = 38;
				break;
			}
		case 42:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = false;
			}
		case 43:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable3__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 79:
			{
				bpv__IsAttackingx__pfzy = true;
			}
		case 80:
			{
				StateStack.Push(81);
				CurrentState = 84;
				break;
			}
		case 81:
			{
			}
		case 82:
			{
				if (!b0l__Temp_bool_IsClosed_Variable2__pf)
				{
					CurrentState = 83;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 83:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				CurrentState = 39;
				break;
			}
		case 84:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable3__pf)
				{
					CurrentState = 85;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 85:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable3__pf = true;
			}
		case 86:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 87:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 89:
			{
				b0l__K2Node_DynamicCast_AsMy_Char6__pf = Cast<AMyChar_C__pf2980937819>(b0l__K2Node_ComponentBoundEvent_OtherActor2__pf);
				b0l__K2Node_DynamicCast_bSuccess6__pf = (b0l__K2Node_DynamicCast_AsMy_Char6__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess6__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 79;
				break;
			}
		case 91:
			{
				CurrentState = 89;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 55);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult2__pf;
	return; //KCST_EndOfThread
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_6(int32 bpp__EntryPoint__pf)
{
	int32 bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 62:
			{
				bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf = UKismetMathLibrary::RandomIntegerInRange(0, 2);
				b0l__Temp_int_Variable__pf = bpv__CallFunc_RandomIntegerInRange_ReturnValue__pf;
				if(IsValid(TSwitchValue<int32 , UAudioComponent* >(b0l__Temp_int_Variable__pf, b0l__K2Node_Select_Default__pf, 3, TSwitchPair<int32 , UAudioComponent* >(0, bpv__zombiexidle__pfG), TSwitchPair<int32 , UAudioComponent* >(1, bpv__zombiexidlex2__pfGG), TSwitchPair<int32 , UAudioComponent* >(2, bpv__zombiexidlex3__pfGG))))
				{
					TSwitchValue<int32 , UAudioComponent* >(b0l__Temp_int_Variable__pf, b0l__K2Node_Select_Default__pf, 3, TSwitchPair<int32 , UAudioComponent* >(0, bpv__zombiexidle__pfG), TSwitchPair<int32 , UAudioComponent* >(1, bpv__zombiexidlex2__pfGG), TSwitchPair<int32 , UAudioComponent* >(2, bpv__zombiexidlex3__pfGG))->UAudioComponent::Play(0.000000);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 120:
			{
				if(IsValid((*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))))
				{
					(*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )))->MaxWalkSpeed = 55.555557;
				}
			}
		case 121:
			{
				StateStack.Push(122);
				CurrentState = 125;
				break;
			}
		case 122:
			{
			}
		case 123:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					CurrentState = 124;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 124:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				CurrentState = 62;
				break;
			}
		case 125:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					CurrentState = 126;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 126:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 127:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 128:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 131:
			{
				CurrentState = 120;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_7(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	float bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 66:
			{
				bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Subtract_FloatFloat(bpv__ZombieHealth__pf, b0l__K2Node_Event_Damage__pf);
				bpv__ZombieHealth__pf = bpv__CallFunc_Subtract_FloatFloat_ReturnValue__pf;
				CurrentState = -1;
				break;
			}
		case 67:
			{
			}
		case 68:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__ZombieHealth__pf, 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 66;
					break;
				}
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_8(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 90);
	// optimized KCST_UnconditionalGoto
	bpv__IsAttackingx__pfzy = false;
	return; //KCST_EndOfThread
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_9(int32 bpp__EntryPoint__pf)
{
	FVector bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetRandomPointInNavigableRadius_ReturnValue__pf(EForceInit::ForceInit);
	UAIAsyncTaskBlueprintProxy* bpv__CallFunc_CreateMoveToProxyObject_ReturnValue__pf{};
	bool bpv__CallFunc_IsValid_ReturnValue__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 95:
			{
				if(IsValid(b0l__K2Node_DynamicCast_AsMy_Char3__pf))
				{
					b0l__K2Node_DynamicCast_AsMy_Char3__pf->bpv__IsTakingDamagex__pfzy = false;
				}
			}
		case 96:
			{
				bpv__IsAttackingx__pfzy = false;
			}
		case 97:
			{
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf = UKismetMathLibrary::LessEqual_FloatFloat(bpv__ZombieHealth__pf, 0.000000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue4__pf)
				{
					CurrentState = 98;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 98:
			{
				bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf = AActor::K2_GetActorLocation();
				bpv__CallFunc_GetRandomPointInNavigableRadius_ReturnValue__pf = UNavigationSystem::GetRandomPointInNavigableRadius(this, bpv__CallFunc_K2_GetActorLocation_ReturnValue__pf, 500.000000, nullptr, nullptr);
				bpv__CallFunc_CreateMoveToProxyObject_ReturnValue__pf = UAIBlueprintHelperLibrary::CreateMoveToProxyObject(this, this, bpv__CallFunc_GetRandomPointInNavigableRadius_ReturnValue__pf, nullptr, 5.000000, false);
			}
		case 99:
			{
				bpv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpv__CallFunc_CreateMoveToProxyObject_ReturnValue__pf);
				if (!bpv__CallFunc_IsValid_ReturnValue__pf)
				{
					CurrentState = -1;
					break;
				}
			}
		case 100:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate__pf.BindUFunction(this,FName(TEXT("OnSuccess_445D30DB4D31073BD7764C951B0F3ECE")));
				if(IsValid(bpv__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					bpv__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnSuccess.Add(b0l__K2Node_CreateDelegate_OutputDelegate__pf);
				}
			}
		case 101:
			{
				b0l__K2Node_CreateDelegate_OutputDelegate2__pf.BindUFunction(this,FName(TEXT("OnFail_445D30DB4D31073BD7764C951B0F3ECE")));
				if(IsValid(bpv__CallFunc_CreateMoveToProxyObject_ReturnValue__pf))
				{
					bpv__CallFunc_CreateMoveToProxyObject_ReturnValue__pf->OnFail.Add(b0l__K2Node_CreateDelegate_OutputDelegate2__pf);
				}
				CurrentState = -1;
				break;
			}
		case 102:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMy_Char3__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess3__pf = (b0l__K2Node_DynamicCast_AsMy_Char3__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess3__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 95;
				break;
			}
		case 119:
			{
				CurrentState = 102;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_10(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 132);
	// optimized KCST_UnconditionalGoto
	b0l__K2Node_DynamicCast_AsMy_Char__pf = Cast<AMyChar_C__pf2980937819>(b0l__K2Node_ComponentBoundEvent_Pawn__pf);
	b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMy_Char__pf != nullptr);;
	if (!b0l__K2Node_DynamicCast_bSuccess__pf)
	{
		return; //KCST_EndOfThreadIfNot
	}
	// optimized KCST_UnconditionalGoto
	bpf__ChasePlayer__pf(b0l__K2Node_DynamicCast_AsMy_Char__pf);
	return; //KCST_EndOfThread
}
void AInfectedxAI_C__pfG897084639::bpf__ExecuteUbergraph_InfectedxAI__pfG_11(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 135);
	// optimized KCST_UnconditionalGoto
	b0l__Temp_byte_Variable__pf = b0l__K2Node_CustomEvent_MovementResult__pf;
	return; //KCST_EndOfThread
}
void AInfectedxAI_C__pfG897084639::bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf)
{
	typedef UDamageType*  T__Local__34;
	T__Local__34& bpp__DamageType__pf = *const_cast<T__Local__34 *>(&bpp__DamageType__pf__const);
	b0l__K2Node_Event_Damage__pf = bpp__Damage__pf;
	b0l__K2Node_Event_DamageType__pf = bpp__DamageType__pf;
	b0l__K2Node_Event_InstigatedBy__pf = bpp__InstigatedBy__pf;
	b0l__K2Node_Event_DamageCauser__pf = bpp__DamageCauser__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_7(67);
}
void AInfectedxAI_C__pfG897084639::bpf__BndEvt__InRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf)
{
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf = bpp__OtherBodyIndex__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_8(90);
}
void AInfectedxAI_C__pfG897084639::bpf__BndEvt__InRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const)
{
	typedef FHitResult  T__Local__35;
	T__Local__35& bpp__SweepResult__pf = *const_cast<T__Local__35 *>(&bpp__SweepResult__pf__const);
	b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf = bpp__OverlappedComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor2__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp2__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf = bpp__OtherBodyIndex__pf;
	b0l__K2Node_ComponentBoundEvent_bFromSweep__pf = bpp__bFromSweep__pf;
	b0l__K2Node_ComponentBoundEvent_SweepResult__pf = bpp__SweepResult__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_4(91);
}
void AInfectedxAI_C__pfG897084639::bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
{
	b0l__K2Node_Event_DeltaSeconds__pf = bpp__DeltaSeconds__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_0(117);
}
void AInfectedxAI_C__pfG897084639::bpf__ChasePlayer__pf(APawn* bpp__TargetActor__pf)
{
	b0l__K2Node_CustomEvent_TargetActor__pf = bpp__TargetActor__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_1(118);
}
void AInfectedxAI_C__pfG897084639::bpf__Roam__pf()
{
	bpf__ExecuteUbergraph_InfectedxAI__pfG_9(119);
}
void AInfectedxAI_C__pfG897084639::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_InfectedxAI__pfG_6(131);
}
void AInfectedxAI_C__pfG897084639::bpf__BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature__pf(APawn* bpp__Pawn__pf)
{
	b0l__K2Node_ComponentBoundEvent_Pawn__pf = bpp__Pawn__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_10(132);
}
void AInfectedxAI_C__pfG897084639::bpf__OnSuccess_329799874A4B74ABDD2DCDB1E6BE70BF__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_11(135);
}
void AInfectedxAI_C__pfG897084639::bpf__OnFail_329799874A4B74ABDD2DCDB1E6BE70BF__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult2__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_5(55);
}
void AInfectedxAI_C__pfG897084639::bpf__OnSuccess_445D30DB4D31073BD7764C951B0F3ECE__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult3__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_2(36);
}
void AInfectedxAI_C__pfG897084639::bpf__OnFail_445D30DB4D31073BD7764C951B0F3ECE__pf(EPathFollowingResult::Type bpp__MovementResult__pf)
{
	b0l__K2Node_CustomEvent_MovementResult4__pf = bpp__MovementResult__pf;
	bpf__ExecuteUbergraph_InfectedxAI__pfG_3(133);
}
void AInfectedxAI_C__pfG897084639::bpf__UserConstructionScript__pf()
{
}
void AInfectedxAI_C__pfG897084639::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__36 = TEXT("/Game/Zombie_01/Animation/Root_Motion");
	const TCHAR* __Local__37 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	const TCHAR* __Local__38 = TEXT("/Game/Audio/Zombie-Sounds");
	const TCHAR* __Local__39 = TEXT("/Game/Audio/SoundAttenuation");
	const TCHAR* __Local__40 = TEXT("/Game/Audio/injured-sounds");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__36, TEXT("Zombie_Chase_1_Full_Loop"), TEXT("Zombie_Chase_1_Full_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("Copzombie_L_Actisdato"), TEXT("Copzombie_L_Actisdato"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__38, TEXT("zombie-idle"), TEXT("zombie-idle"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__39, TEXT("3dSound"), TEXT("3dSound"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__38, TEXT("Zombie_-_attack"), TEXT("Zombie_-_attack"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__38, TEXT("zombie-dies"), TEXT("zombie-dies"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__38, TEXT("zombie-idle-2"), TEXT("zombie-idle-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__38, TEXT("zombie-idle-3"), TEXT("zombie-idle-3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__38, TEXT("zombie-detect"), TEXT("zombie-detect"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__38, TEXT("zombie-detect-2"), TEXT("zombie-detect-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__38, TEXT("zombie-dies-02"), TEXT("zombie-dies-02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__40, TEXT("injured-sounds"), TEXT("injured-sounds"), TEXT("/Script/Engine"), TEXT("SoundCue")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void AInfectedxAI_C__pfG897084639::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void AInfectedxAI_C__pfG897084639::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__41 = TEXT("/Game/Weapons");
	const TCHAR* __Local__42 = TEXT("/Game/Images");
	const TCHAR* __Local__43 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__44 = TEXT("/Game/Fonts");
	const TCHAR* __Local__45 = TEXT("/Game/OldTrainFactory/Textures/build");
	const TCHAR* __Local__46 = TEXT("/Game/Audio");
	const TCHAR* __Local__47 = TEXT("/Game/UI/Hud");
	const TCHAR* __Local__48 = TEXT("/Game/Mannequin/Character/Mesh");
	const TCHAR* __Local__49 = TEXT("/Game/Audio/walking-sounds");
	const TCHAR* __Local__50 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__51 = TEXT("/Game/Mannequin/MovementAnimPack");
	const TCHAR* __Local__52 = TEXT("/Game/Mannequin/Animations");
	const TCHAR* __Local__53 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__54 = TEXT("/Game/Mannequin/AngrosEdit");
	const TCHAR* __Local__55 = TEXT("/Game/BulletVFX/Meshes");
	const TCHAR* __Local__56 = TEXT("/Game/Materials");
	const TCHAR* __Local__57 = TEXT("/Game/BulletVFX/Particles");
	const TCHAR* __Local__58 = TEXT("/Game/Mannequin");
	const TCHAR* __Local__59 = TEXT("/Game/Soldier_ru_01/Meshes");
	const TCHAR* __Local__60 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	const TCHAR* __Local__61 = TEXT("/Game/ZombieMixamoModels/Animations/ZombieCop");
	const TCHAR* __Local__62 = TEXT("/Game/ZombieMixamoModels/BlendSpace");
	const TCHAR* __Local__63 = TEXT("/Game/UI/LoadingScreens");
	const TCHAR* __Local__64 = TEXT("/Game/UI");
	const TCHAR* __Local__65 = TEXT("/Game/Blueprints");
	const TCHAR* __Local__66 = TEXT("/Game/ZombieMixamoModels");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__41, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__42, TEXT("LoadingScreen-Town"), TEXT("LoadingScreen-Town"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__43, TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__44, TEXT("ADOBESONGSTD-LIGHT"), TEXT("ADOBESONGSTD-LIGHT"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__45, TEXT("Wood_01_D"), TEXT("Wood_01_D"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__46, TEXT("onClick"), TEXT("onClick"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__46, TEXT("hoverSound"), TEXT("hoverSound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__42, TEXT("LowHealthScreen"), TEXT("LowHealthScreen"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__47, TEXT("handgun_img"), TEXT("handgun_img"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__47, TEXT("HealthBar_Full"), TEXT("HealthBar_Full"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__42, TEXT("grunge-01-transparent"), TEXT("grunge-01-transparent"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__44, TEXT("corbel"), TEXT("corbel"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__44, TEXT("corbelb"), TEXT("corbelb"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__46, TEXT("Scary_impact"), TEXT("Scary_impact"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__47, TEXT("Crosshair_HUD"), TEXT("Crosshair_HUD"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__47, TEXT("Crosshair_HUD_Shoot"), TEXT("Crosshair_HUD_Shoot"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__48, TEXT("UE4_Mannequin_Skeleton"), TEXT("UE4_Mannequin_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__49, TEXT("footsteps"), TEXT("footsteps"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__50, TEXT("Pistol_Reload"), TEXT("Pistol_Reload"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__50, TEXT("Pistol_ShootOnce_Montage"), TEXT("Pistol_ShootOnce_Montage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__51, TEXT("ConsoleUse_LH"), TEXT("ConsoleUse_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("CrouchLoop_new"), TEXT("CrouchLoop_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("Crouch2Idle_new"), TEXT("Crouch2Idle_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("PickUp_LH"), TEXT("PickUp_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("Fists_Hit_Right"), TEXT("Fists_Hit_Right"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("Death_1"), TEXT("Death_1"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__50, TEXT("Pistol_SprintStart"), TEXT("Pistol_SprintStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("RunFwdStart"), TEXT("RunFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("JumpRun_LU_Land2Run"), TEXT("JumpRun_LU_Land2Run"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("JumpWalk_RU_Land2Walk"), TEXT("JumpWalk_RU_Land2Walk"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("JumpWalk_RU_Land"), TEXT("JumpWalk_RU_Land"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__52, TEXT("ThirdPersonJump_Loop"), TEXT("ThirdPersonJump_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__53, TEXT("WalkFwdStop_LU"), TEXT("WalkFwdStop_LU"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__53, TEXT("WalkFwdStart"), TEXT("WalkFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__54, TEXT("PistolGunUp_IdleToRun"), TEXT("PistolGunUp_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__54, TEXT("Pistol_IdleToRun"), TEXT("Pistol_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__51, TEXT("TurnLt90_Loop"), TEXT("TurnLt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__51, TEXT("TurnRt90_Loop"), TEXT("TurnRt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__54, TEXT("idleToRun"), TEXT("idleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__54, TEXT("PistolAO"), TEXT("PistolAO"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__54, TEXT("LookAround_1D"), TEXT("LookAround_1D"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__55, TEXT("SM_BulletCasing"), TEXT("SM_BulletCasing"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__56, TEXT("BulletPhysicalMaterial"), TEXT("BulletPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__46, TEXT("Dramatic_Hit_Hard_10"), TEXT("Dramatic_Hit_Hard_10"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__46, TEXT("Death_Scream"), TEXT("Death_Scream"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__46, TEXT("LostIt"), TEXT("LostIt"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__50, TEXT("PistolEquipMontage"), TEXT("PistolEquipMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__46, TEXT("Player_Heal"), TEXT("Player_Heal"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__46, TEXT("SlowHeartbeat"), TEXT("SlowHeartbeat"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__50, TEXT("PistolEquipWeaponAnimMontage"), TEXT("PistolEquipWeaponAnimMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__46, TEXT("Flashlight_ON"), TEXT("Flashlight_ON"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__46, TEXT("Flashlight_OFF"), TEXT("Flashlight_OFF"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__57, TEXT("VFX_Impact_Flesh"), TEXT("VFX_Impact_Flesh"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__57, TEXT("VFX_Impact_Concrete"), TEXT("VFX_Impact_Concrete"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__46, TEXT("Trigger_click_empty"), TEXT("Trigger_click_empty"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__58, TEXT("Climbing"), TEXT("Climbing"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__53, TEXT("Pistol_Idle"), TEXT("Pistol_Idle"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__59, TEXT("Soldier_ru_01"), TEXT("Soldier_ru_01"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__56, TEXT("HumanPhysicalMaterial"), TEXT("HumanPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__60, TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__61, TEXT("zombie_biting"), TEXT("zombie_biting"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__61, TEXT("zombie_attack"), TEXT("zombie_attack"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__61, TEXT("zombie_dying"), TEXT("zombie_dying"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__62, TEXT("SimpleBlendSpace"), TEXT("SimpleBlendSpace"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__54, TEXT("MyChar"), TEXT("MyChar_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__63, TEXT("LoadingScreen-WesternOak"), TEXT("LoadingScreen-WesternOak_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__64, TEXT("DeadScreen"), TEXT("DeadScreen_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__64, TEXT("InGameUI"), TEXT("InGameUI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__64, TEXT("BP_CrosshairShoot"), TEXT("BP_CrosshairShoot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__64, TEXT("BP_Crosshair"), TEXT("BP_Crosshair_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__54, TEXT("MyAnimBP_Mannequin"), TEXT("MyAnimBP_Mannequin_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__41, TEXT("HandgunBullet"), TEXT("HandgunBullet_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__65, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__65, TEXT("RunCamShake"), TEXT("RunCamShake_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__66, TEXT("InfectedAnimBP"), TEXT("InfectedAnimBP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__AInfectedxAI_C__pfG897084639
{
	FRegisterHelper__AInfectedxAI_C__pfG897084639()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Mannequin/AngrosEdit/InfectedBlueprints/Infected-AI"), &AInfectedxAI_C__pfG897084639::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AInfectedxAI_C__pfG897084639 Instance;
};
FRegisterHelper__AInfectedxAI_C__pfG897084639 FRegisterHelper__AInfectedxAI_C__pfG897084639::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
