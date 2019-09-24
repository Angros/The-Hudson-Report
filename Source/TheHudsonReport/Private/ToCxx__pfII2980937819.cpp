#include "TheHudsonReport.h"
#include "ToCxx__pfII2980937819.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
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
#include "ToCxx__pfII2980937819.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "LoadingScreenxWesternOak__pfG3933423829.h"
#include "DeadScreen__pf122804083.h"
#include "InGameUI__pf122804083.h"
#include "BP_CrosshairShoot__pf122804083.h"
#include "BP_Crosshair__pf122804083.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "MyAnimBP_Mannequin__pf2980937819.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "MyChar__pf2980937819.h"
#include "HandgunBullet__pf3442503945.h"
#include "InfectedxAI__pfG897084639.h"
#include "InfectedAnimBP__pf529494595.h"
#include "M9xwxFlashlight__pfGG2403237688.h"
#include "RunCamShake__pf2403237688.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
AToCxx_C__pfII2980937819::AToCxx_C__pfII2980937819(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AToCxx_C__pfII2980937819::StaticClass() == GetClass()))
	{
		AToCxx_C__pfII2980937819::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
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
	__Local__4->AnimationData.AnimToPlay = CastChecked<UAnimationAsset>(CastChecked<UDynamicClass>(AToCxx_C__pfII2980937819::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__4->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AToCxx_C__pfII2980937819::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
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
	__Local__10 = CastChecked<UPhysicalMaterial>(CastChecked<UDynamicClass>(AToCxx_C__pfII2980937819::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
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
	bpv__M9xwxFlashlight__pfGG->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AToCxx_C__pfII2980937819::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
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
void AToCxx_C__pfII2980937819::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
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
void AToCxx_C__pfII2980937819::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_AMyChar_C__pf2980937819();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AMyChar_C__pf2980937819());
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
	auto __Local__21 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__21);
	__Local__21->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__21->InputAxisDelegateBindings.AddUninitialized(2);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__21->InputAxisDelegateBindings.GetData(), 2);
	auto& __Local__22 = __Local__21->InputAxisDelegateBindings[0];
	__Local__22.InputAxisName = FName(TEXT("MoveRight"));
	__Local__22.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2"));
	auto& __Local__23 = __Local__21->InputAxisDelegateBindings[1];
	__Local__23.InputAxisName = FName(TEXT("MoveForward"));
	__Local__23.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0"));
}
void AToCxx_C__pfII2980937819::bpf__ExecuteUbergraph_ToCxx__pfII_0(int32 bpp__EntryPoint__pf)
{
	FRotator bpv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetRightVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_GetRightVector_ReturnValue__pf = UKismetMathLibrary::GetRightVector(bpv__CallFunc_MakeRotator_ReturnValue__pf);
	AddMovementInput(bpv__CallFunc_GetRightVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue__pf, false);
	return; // KCST_GotoReturn
}
void AToCxx_C__pfII2980937819::bpf__ExecuteUbergraph_ToCxx__pfII_1(int32 bpp__EntryPoint__pf)
{
	FRotator bpv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpv__CallFunc_MakeRotator_ReturnValue__pf(EForceInit::ForceInit);
	FVector bpv__CallFunc_GetForwardVector_ReturnValue__pf(EForceInit::ForceInit);
	check(bpp__EntryPoint__pf == 4);
	// optimized KCST_UnconditionalGoto
	bpv__CallFunc_GetControlRotation_ReturnValue__pf = APawn::GetControlRotation();
	UKismetMathLibrary::BreakRotator(bpv__CallFunc_GetControlRotation_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_MakeRotator_ReturnValue__pf = UKismetMathLibrary::MakeRotator(0.000000, 0.000000, b0l__CallFunc_BreakRotator_Yaw__pf);
	bpv__CallFunc_GetForwardVector_ReturnValue__pf = UKismetMathLibrary::GetForwardVector(bpv__CallFunc_MakeRotator_ReturnValue__pf);
	AddMovementInput(bpv__CallFunc_GetForwardVector_ReturnValue__pf, b0l__K2Node_InputAxisEvent_AxisValue2__pf, false);
	return; // KCST_GotoReturn
}
void AToCxx_C__pfII2980937819::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_ToCxx__pfII_0(3);
}
void AToCxx_C__pfII2980937819::bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_ToCxx__pfII_1(4);
}
void AToCxx_C__pfII2980937819::bpf__UserConstructionScript__pf()
{
}
void AToCxx_C__pfII2980937819::bpf__SetIsRunning__pf(bool bpp__IsRunning__pf)
{
	bpv__IsRunningx__pfzy = bpp__IsRunning__pf;
}
void AToCxx_C__pfII2980937819::bpf__SetIsMoving__pf(bool bpp__IsMoving__pf)
{
	bpv__Moving__pf = bpp__IsMoving__pf;
}
void AToCxx_C__pfII2980937819::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__24 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__25 = TEXT("/Game/Soldier_ru_01/Meshes");
	const TCHAR* __Local__26 = TEXT("/Game/Materials");
	const TCHAR* __Local__27 = TEXT("/Game/Weapons");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__24, TEXT("Pistol_Idle"), TEXT("Pistol_Idle"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__25, TEXT("Soldier_ru_01"), TEXT("Soldier_ru_01"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__26, TEXT("HumanPhysicalMaterial"), TEXT("HumanPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__27, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void AToCxx_C__pfII2980937819::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void AToCxx_C__pfII2980937819::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__28 = TEXT("/Game/Images");
	const TCHAR* __Local__29 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__30 = TEXT("/Game/Fonts");
	const TCHAR* __Local__31 = TEXT("/Game/OldTrainFactory/Textures/build");
	const TCHAR* __Local__32 = TEXT("/Game/Audio");
	const TCHAR* __Local__33 = TEXT("/Game/UI/Hud");
	const TCHAR* __Local__34 = TEXT("/Game/Mannequin/Character/Mesh");
	const TCHAR* __Local__35 = TEXT("/Game/Audio/walking-sounds");
	const TCHAR* __Local__36 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__37 = TEXT("/Game/Mannequin/MovementAnimPack");
	const TCHAR* __Local__38 = TEXT("/Game/Mannequin/Animations");
	const TCHAR* __Local__39 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__40 = TEXT("/Game/Mannequin/AngrosEdit");
	const TCHAR* __Local__41 = TEXT("/Game/BulletVFX/Meshes");
	const TCHAR* __Local__42 = TEXT("/Game/Materials");
	const TCHAR* __Local__43 = TEXT("/Game/Audio/Zombie-Sounds");
	const TCHAR* __Local__44 = TEXT("/Game/Audio/SoundAttenuation");
	const TCHAR* __Local__45 = TEXT("/Game/Audio/injured-sounds");
	const TCHAR* __Local__46 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	const TCHAR* __Local__47 = TEXT("/Game/ZombieMixamoModels/Animations/ZombieCop");
	const TCHAR* __Local__48 = TEXT("/Game/ZombieMixamoModels/BlendSpace");
	const TCHAR* __Local__49 = TEXT("/Game/Zombie_01/Animation/Root_Motion");
	const TCHAR* __Local__50 = TEXT("/Game/BulletVFX/Particles");
	const TCHAR* __Local__51 = TEXT("/Game/Mannequin");
	const TCHAR* __Local__52 = TEXT("/Game/UI/LoadingScreens");
	const TCHAR* __Local__53 = TEXT("/Game/UI");
	const TCHAR* __Local__54 = TEXT("/Game/Weapons");
	const TCHAR* __Local__55 = TEXT("/Game/Mannequin/AngrosEdit/InfectedBlueprints");
	const TCHAR* __Local__56 = TEXT("/Game/ZombieMixamoModels");
	const TCHAR* __Local__57 = TEXT("/Game/Blueprints");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__28, TEXT("LoadingScreen-Town"), TEXT("LoadingScreen-Town"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__29, TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__30, TEXT("ADOBESONGSTD-LIGHT"), TEXT("ADOBESONGSTD-LIGHT"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__31, TEXT("Wood_01_D"), TEXT("Wood_01_D"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__32, TEXT("onClick"), TEXT("onClick"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("hoverSound"), TEXT("hoverSound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__28, TEXT("LowHealthScreen"), TEXT("LowHealthScreen"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__33, TEXT("handgun_img"), TEXT("handgun_img"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__33, TEXT("HealthBar_Full"), TEXT("HealthBar_Full"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__28, TEXT("grunge-01-transparent"), TEXT("grunge-01-transparent"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__30, TEXT("corbel"), TEXT("corbel"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__30, TEXT("corbelb"), TEXT("corbelb"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__32, TEXT("Scary_impact"), TEXT("Scary_impact"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__33, TEXT("Crosshair_HUD"), TEXT("Crosshair_HUD"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__33, TEXT("Crosshair_HUD_Shoot"), TEXT("Crosshair_HUD_Shoot"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__34, TEXT("UE4_Mannequin_Skeleton"), TEXT("UE4_Mannequin_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__35, TEXT("footsteps"), TEXT("footsteps"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__36, TEXT("Pistol_Reload"), TEXT("Pistol_Reload"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__36, TEXT("Pistol_ShootOnce_Montage"), TEXT("Pistol_ShootOnce_Montage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__37, TEXT("ConsoleUse_LH"), TEXT("ConsoleUse_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("CrouchLoop_new"), TEXT("CrouchLoop_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("Crouch2Idle_new"), TEXT("Crouch2Idle_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("PickUp_LH"), TEXT("PickUp_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("Fists_Hit_Right"), TEXT("Fists_Hit_Right"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("Death_1"), TEXT("Death_1"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__36, TEXT("Pistol_SprintStart"), TEXT("Pistol_SprintStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("RunFwdStart"), TEXT("RunFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("JumpRun_LU_Land2Run"), TEXT("JumpRun_LU_Land2Run"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("JumpWalk_RU_Land2Walk"), TEXT("JumpWalk_RU_Land2Walk"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("JumpWalk_RU_Land"), TEXT("JumpWalk_RU_Land"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__38, TEXT("ThirdPersonJump_Loop"), TEXT("ThirdPersonJump_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__39, TEXT("WalkFwdStop_LU"), TEXT("WalkFwdStop_LU"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__39, TEXT("WalkFwdStart"), TEXT("WalkFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__40, TEXT("PistolGunUp_IdleToRun"), TEXT("PistolGunUp_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__40, TEXT("Pistol_IdleToRun"), TEXT("Pistol_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__37, TEXT("TurnLt90_Loop"), TEXT("TurnLt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__37, TEXT("TurnRt90_Loop"), TEXT("TurnRt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__40, TEXT("idleToRun"), TEXT("idleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__40, TEXT("PistolAO"), TEXT("PistolAO"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__40, TEXT("LookAround_1D"), TEXT("LookAround_1D"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__41, TEXT("SM_BulletCasing"), TEXT("SM_BulletCasing"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__42, TEXT("BulletPhysicalMaterial"), TEXT("BulletPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__43, TEXT("zombie-idle"), TEXT("zombie-idle"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__44, TEXT("3dSound"), TEXT("3dSound"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__43, TEXT("Zombie_-_attack"), TEXT("Zombie_-_attack"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__43, TEXT("zombie-dies"), TEXT("zombie-dies"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__43, TEXT("zombie-idle-2"), TEXT("zombie-idle-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__43, TEXT("zombie-idle-3"), TEXT("zombie-idle-3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__43, TEXT("zombie-detect"), TEXT("zombie-detect"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__43, TEXT("zombie-detect-2"), TEXT("zombie-detect-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__43, TEXT("zombie-dies-02"), TEXT("zombie-dies-02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__45, TEXT("injured-sounds"), TEXT("injured-sounds"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__46, TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__47, TEXT("zombie_biting"), TEXT("zombie_biting"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__47, TEXT("zombie_attack"), TEXT("zombie_attack"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__47, TEXT("zombie_dying"), TEXT("zombie_dying"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__48, TEXT("SimpleBlendSpace"), TEXT("SimpleBlendSpace"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__49, TEXT("Zombie_Chase_1_Full_Loop"), TEXT("Zombie_Chase_1_Full_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__46, TEXT("Copzombie_L_Actisdato"), TEXT("Copzombie_L_Actisdato"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__32, TEXT("Dramatic_Hit_Hard_10"), TEXT("Dramatic_Hit_Hard_10"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("Death_Scream"), TEXT("Death_Scream"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("LostIt"), TEXT("LostIt"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__36, TEXT("PistolEquipMontage"), TEXT("PistolEquipMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__32, TEXT("Player_Heal"), TEXT("Player_Heal"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("SlowHeartbeat"), TEXT("SlowHeartbeat"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__36, TEXT("PistolEquipWeaponAnimMontage"), TEXT("PistolEquipWeaponAnimMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__32, TEXT("Flashlight_ON"), TEXT("Flashlight_ON"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__32, TEXT("Flashlight_OFF"), TEXT("Flashlight_OFF"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__50, TEXT("VFX_Impact_Flesh"), TEXT("VFX_Impact_Flesh"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__50, TEXT("VFX_Impact_Concrete"), TEXT("VFX_Impact_Concrete"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__32, TEXT("Trigger_click_empty"), TEXT("Trigger_click_empty"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__51, TEXT("Climbing"), TEXT("Climbing"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__52, TEXT("LoadingScreen-WesternOak"), TEXT("LoadingScreen-WesternOak_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__40, TEXT("MyChar"), TEXT("MyChar_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__53, TEXT("DeadScreen"), TEXT("DeadScreen_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__53, TEXT("InGameUI"), TEXT("InGameUI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__53, TEXT("BP_CrosshairShoot"), TEXT("BP_CrosshairShoot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__53, TEXT("BP_Crosshair"), TEXT("BP_Crosshair_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__40, TEXT("MyAnimBP_Mannequin"), TEXT("MyAnimBP_Mannequin_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__54, TEXT("HandgunBullet"), TEXT("HandgunBullet_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__55, TEXT("Infected-AI"), TEXT("Infected-AI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__56, TEXT("InfectedAnimBP"), TEXT("InfectedAnimBP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__57, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__57, TEXT("RunCamShake"), TEXT("RunCamShake_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__AToCxx_C__pfII2980937819
{
	FRegisterHelper__AToCxx_C__pfII2980937819()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Mannequin/AngrosEdit/ToC++"), &AToCxx_C__pfII2980937819::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AToCxx_C__pfII2980937819 Instance;
};
FRegisterHelper__AToCxx_C__pfII2980937819 FRegisterHelper__AToCxx_C__pfII2980937819::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
