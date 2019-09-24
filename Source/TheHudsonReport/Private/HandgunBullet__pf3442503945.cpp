#include "TheHudsonReport.h"
#include "HandgunBullet__pf3442503945.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
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
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
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
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
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
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/GameFramework/ProjectileMovementComponent.h"
#include "HandgunBullet__pf3442503945.h"
#include "InfectedxAI__pfG897084639.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "MyChar__pf2980937819.h"
#include "LoadingScreenxWesternOak__pfG3933423829.h"
#include "DeadScreen__pf122804083.h"
#include "InGameUI__pf122804083.h"
#include "BP_CrosshairShoot__pf122804083.h"
#include "BP_Crosshair__pf122804083.h"
#include "MyAnimBP_Mannequin__pf2980937819.h"
#include "M9xwxFlashlight__pfGG2403237688.h"
#include "RunCamShake__pf2403237688.h"
#include "InfectedAnimBP__pf529494595.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
AHandgunBullet_C__pf3442503945::AHandgunBullet_C__pf3442503945(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AHandgunBullet_C__pf3442503945::StaticClass() == GetClass()))
	{
		AHandgunBullet_C__pf3442503945::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__Sphere__pf = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	bpv__StaticMesh__pf = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = bpv__Sphere__pf;
	bpv__ProjectileMovement__pf = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
	bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__Sphere__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("BlockAll")));
	bpv__Sphere__pf->BodyInstance.bNotifyRigidBodyCollision = true;
	auto& __Local__0 = (*(AccessPrivateProperty<float >((bpv__Sphere__pf), USphereComponent::__PPO__SphereRadius() )));
	__Local__0 = 1.049202f;
	if(!bpv__Sphere__pf->IsTemplate())
	{
		bpv__Sphere__pf->BodyInstance.FixupData(bpv__Sphere__pf);
	}
	bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__StaticMesh__pf->AttachToComponent(bpv__Sphere__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__StaticMesh__pf->BodyInstance.SetCollisionProfileName(FName(TEXT("BlockAll")));
	auto& __Local__1 = (*(AccessPrivateProperty<UPhysicalMaterial* >(&(bpv__StaticMesh__pf->BodyInstance), FBodyInstance::__PPO__PhysMaterialOverride() )));
	__Local__1 = CastChecked<UPhysicalMaterial>(CastChecked<UDynamicClass>(AHandgunBullet_C__pf3442503945::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->StaticMesh = CastChecked<UStaticMesh>(CastChecked<UDynamicClass>(AHandgunBullet_C__pf3442503945::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__StaticMesh__pf->RelativeScale3D = FVector(0.546404, 0.725704, 0.644801);
	if(!bpv__StaticMesh__pf->IsTemplate())
	{
		bpv__StaticMesh__pf->BodyInstance.FixupData(bpv__StaticMesh__pf);
	}
	bpv__ProjectileMovement__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__ProjectileMovement__pf->InitialSpeed = 6000.000000f;
	bpv__ProjectileMovement__pf->MaxSpeed = 6000.000000f;
	bpv__ProjectileMovement__pf->bShouldBounce = true;
	bpv__Damage__pf = 0.200000f;
	Tags = TArray<FName> ();
	Tags.Reserve(1);
	Tags.Add(FName(TEXT("playerProjectile")));
}
void AHandgunBullet_C__pf3442503945::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__Sphere__pf)
	{
		bpv__Sphere__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__StaticMesh__pf)
	{
		bpv__StaticMesh__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__ProjectileMovement__pf)
	{
		bpv__ProjectileMovement__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AHandgunBullet_C__pf3442503945::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	extern UClass* Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_AM9xwxFlashlight_C__pfGG2403237688());
	extern UClass* Z_Construct_UClass_URunCamShake_C__pf2403237688();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_URunCamShake_C__pf2403237688());
	extern UClass* Z_Construct_UClass_UInfectedAnimBP_C__pf529494595();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UInfectedAnimBP_C__pf529494595());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__2 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__2);
	__Local__2->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__2->ComponentDelegateBindings.AddUninitialized(1);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__2->ComponentDelegateBindings.GetData(), 1);
	auto& __Local__3 = __Local__2->ComponentDelegateBindings[0];
	__Local__3.ComponentPropertyName = FName(TEXT("Sphere"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnComponentHit"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature"));
}
void AHandgunBullet_C__pf3442503945::bpf__ExecuteUbergraph_HandgunBullet__pf_0(int32 bpp__EntryPoint__pf)
{
	bool bpv__CallFunc_ActorHasTag_ReturnValue__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				UGameplayStatics::ApplyDamage(b0l__K2Node_DynamicCast_AsInfected__AI__pf, bpv__Damage__pf, nullptr, nullptr, nullptr);
			}
		case 2:
			{
				K2_DestroyActor();
				CurrentState = -1;
				break;
			}
		case 3:
			{
				if(IsValid(b0l__K2Node_ComponentBoundEvent_OtherActor__pf))
				{
					bpv__CallFunc_ActorHasTag_ReturnValue__pf = b0l__K2Node_ComponentBoundEvent_OtherActor__pf->AActor::ActorHasTag(FName(TEXT("Enemy")));
				}
				if (!bpv__CallFunc_ActorHasTag_ReturnValue__pf)
				{
					CurrentState = 2;
					break;
				}
			}
		case 4:
			{
				b0l__K2Node_DynamicCast_AsInfected__AI__pf = Cast<AInfectedxAI_C__pfG897084639>(b0l__K2Node_ComponentBoundEvent_OtherActor__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsInfected__AI__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 1;
				break;
			}
		case 5:
			{
				CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void AHandgunBullet_C__pf3442503945::bpf__BndEvt__Sphere_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__HitComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, FVector bpp__NormalImpulse__pf, /*out*/ FHitResult const& bpp__Hit__pf__const)
{
	typedef FHitResult  T__Local__4;
	T__Local__4& bpp__Hit__pf = *const_cast<T__Local__4 *>(&bpp__Hit__pf__const);
	b0l__K2Node_ComponentBoundEvent_HitComponent__pf = bpp__HitComponent__pf;
	b0l__K2Node_ComponentBoundEvent_OtherActor__pf = bpp__OtherActor__pf;
	b0l__K2Node_ComponentBoundEvent_OtherComp__pf = bpp__OtherComp__pf;
	b0l__K2Node_ComponentBoundEvent_NormalImpulse__pf = bpp__NormalImpulse__pf;
	b0l__K2Node_ComponentBoundEvent_Hit__pf = bpp__Hit__pf;
	bpf__ExecuteUbergraph_HandgunBullet__pf_0(5);
}
void AHandgunBullet_C__pf3442503945::bpf__UserConstructionScript__pf()
{
	APawn* bpv__CallFunc_GetInstigator_ReturnValue__pf{};
	bpv__CallFunc_GetInstigator_ReturnValue__pf = AActor::GetInstigator();
	if(IsValid(bpv__Sphere__pf))
	{
		bpv__Sphere__pf->UPrimitiveComponent::IgnoreActorWhenMoving(bpv__CallFunc_GetInstigator_ReturnValue__pf, true);
	}
}
void AHandgunBullet_C__pf3442503945::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__5 = TEXT("/Game/Materials");
	const TCHAR* __Local__6 = TEXT("/Game/BulletVFX/Meshes");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__5, TEXT("BulletPhysicalMaterial"), TEXT("BulletPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__6, TEXT("SM_BulletCasing"), TEXT("SM_BulletCasing"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void AHandgunBullet_C__pf3442503945::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void AHandgunBullet_C__pf3442503945::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__7 = TEXT("/Game/Audio/Zombie-Sounds");
	const TCHAR* __Local__8 = TEXT("/Game/Audio/SoundAttenuation");
	const TCHAR* __Local__9 = TEXT("/Game/Weapons");
	const TCHAR* __Local__10 = TEXT("/Game/Images");
	const TCHAR* __Local__11 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__12 = TEXT("/Game/Fonts");
	const TCHAR* __Local__13 = TEXT("/Game/OldTrainFactory/Textures/build");
	const TCHAR* __Local__14 = TEXT("/Game/Audio");
	const TCHAR* __Local__15 = TEXT("/Game/UI/Hud");
	const TCHAR* __Local__16 = TEXT("/Game/Mannequin/Character/Mesh");
	const TCHAR* __Local__17 = TEXT("/Game/Audio/walking-sounds");
	const TCHAR* __Local__18 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__19 = TEXT("/Game/Mannequin/MovementAnimPack");
	const TCHAR* __Local__20 = TEXT("/Game/Mannequin/Animations");
	const TCHAR* __Local__21 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__22 = TEXT("/Game/Mannequin/AngrosEdit");
	const TCHAR* __Local__23 = TEXT("/Game/BulletVFX/Particles");
	const TCHAR* __Local__24 = TEXT("/Game/Mannequin");
	const TCHAR* __Local__25 = TEXT("/Game/Soldier_ru_01/Meshes");
	const TCHAR* __Local__26 = TEXT("/Game/Materials");
	const TCHAR* __Local__27 = TEXT("/Game/Audio/injured-sounds");
	const TCHAR* __Local__28 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	const TCHAR* __Local__29 = TEXT("/Game/ZombieMixamoModels/Animations/ZombieCop");
	const TCHAR* __Local__30 = TEXT("/Game/ZombieMixamoModels/BlendSpace");
	const TCHAR* __Local__31 = TEXT("/Game/Zombie_01/Animation/Root_Motion");
	const TCHAR* __Local__32 = TEXT("/Game/Mannequin/AngrosEdit/InfectedBlueprints");
	const TCHAR* __Local__33 = TEXT("/Game/UI/LoadingScreens");
	const TCHAR* __Local__34 = TEXT("/Game/UI");
	const TCHAR* __Local__35 = TEXT("/Game/Blueprints");
	const TCHAR* __Local__36 = TEXT("/Game/ZombieMixamoModels");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__7, TEXT("zombie-idle"), TEXT("zombie-idle"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__8, TEXT("3dSound"), TEXT("3dSound"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__7, TEXT("Zombie_-_attack"), TEXT("Zombie_-_attack"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__7, TEXT("zombie-dies"), TEXT("zombie-dies"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__7, TEXT("zombie-idle-2"), TEXT("zombie-idle-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__7, TEXT("zombie-idle-3"), TEXT("zombie-idle-3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__7, TEXT("zombie-detect"), TEXT("zombie-detect"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__7, TEXT("zombie-detect-2"), TEXT("zombie-detect-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__7, TEXT("zombie-dies-02"), TEXT("zombie-dies-02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__9, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__10, TEXT("LoadingScreen-Town"), TEXT("LoadingScreen-Town"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__11, TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__12, TEXT("ADOBESONGSTD-LIGHT"), TEXT("ADOBESONGSTD-LIGHT"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__13, TEXT("Wood_01_D"), TEXT("Wood_01_D"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__14, TEXT("onClick"), TEXT("onClick"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__14, TEXT("hoverSound"), TEXT("hoverSound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__10, TEXT("LowHealthScreen"), TEXT("LowHealthScreen"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__15, TEXT("handgun_img"), TEXT("handgun_img"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__15, TEXT("HealthBar_Full"), TEXT("HealthBar_Full"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__10, TEXT("grunge-01-transparent"), TEXT("grunge-01-transparent"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__12, TEXT("corbel"), TEXT("corbel"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__12, TEXT("corbelb"), TEXT("corbelb"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__14, TEXT("Scary_impact"), TEXT("Scary_impact"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__15, TEXT("Crosshair_HUD"), TEXT("Crosshair_HUD"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__15, TEXT("Crosshair_HUD_Shoot"), TEXT("Crosshair_HUD_Shoot"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__16, TEXT("UE4_Mannequin_Skeleton"), TEXT("UE4_Mannequin_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__17, TEXT("footsteps"), TEXT("footsteps"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__18, TEXT("Pistol_Reload"), TEXT("Pistol_Reload"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__18, TEXT("Pistol_ShootOnce_Montage"), TEXT("Pistol_ShootOnce_Montage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__19, TEXT("ConsoleUse_LH"), TEXT("ConsoleUse_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("CrouchLoop_new"), TEXT("CrouchLoop_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("Crouch2Idle_new"), TEXT("Crouch2Idle_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("PickUp_LH"), TEXT("PickUp_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("Fists_Hit_Right"), TEXT("Fists_Hit_Right"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("Death_1"), TEXT("Death_1"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__18, TEXT("Pistol_SprintStart"), TEXT("Pistol_SprintStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("RunFwdStart"), TEXT("RunFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("JumpRun_LU_Land2Run"), TEXT("JumpRun_LU_Land2Run"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("JumpWalk_RU_Land2Walk"), TEXT("JumpWalk_RU_Land2Walk"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("JumpWalk_RU_Land"), TEXT("JumpWalk_RU_Land"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__20, TEXT("ThirdPersonJump_Loop"), TEXT("ThirdPersonJump_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__21, TEXT("WalkFwdStop_LU"), TEXT("WalkFwdStop_LU"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__21, TEXT("WalkFwdStart"), TEXT("WalkFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__22, TEXT("PistolGunUp_IdleToRun"), TEXT("PistolGunUp_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__22, TEXT("Pistol_IdleToRun"), TEXT("Pistol_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__19, TEXT("TurnLt90_Loop"), TEXT("TurnLt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__19, TEXT("TurnRt90_Loop"), TEXT("TurnRt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__22, TEXT("idleToRun"), TEXT("idleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__22, TEXT("PistolAO"), TEXT("PistolAO"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__22, TEXT("LookAround_1D"), TEXT("LookAround_1D"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__14, TEXT("Dramatic_Hit_Hard_10"), TEXT("Dramatic_Hit_Hard_10"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__14, TEXT("Death_Scream"), TEXT("Death_Scream"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__14, TEXT("LostIt"), TEXT("LostIt"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__18, TEXT("PistolEquipMontage"), TEXT("PistolEquipMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__14, TEXT("Player_Heal"), TEXT("Player_Heal"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__14, TEXT("SlowHeartbeat"), TEXT("SlowHeartbeat"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__18, TEXT("PistolEquipWeaponAnimMontage"), TEXT("PistolEquipWeaponAnimMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__14, TEXT("Flashlight_ON"), TEXT("Flashlight_ON"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__14, TEXT("Flashlight_OFF"), TEXT("Flashlight_OFF"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__23, TEXT("VFX_Impact_Flesh"), TEXT("VFX_Impact_Flesh"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__23, TEXT("VFX_Impact_Concrete"), TEXT("VFX_Impact_Concrete"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__14, TEXT("Trigger_click_empty"), TEXT("Trigger_click_empty"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__24, TEXT("Climbing"), TEXT("Climbing"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__21, TEXT("Pistol_Idle"), TEXT("Pistol_Idle"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__25, TEXT("Soldier_ru_01"), TEXT("Soldier_ru_01"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__26, TEXT("HumanPhysicalMaterial"), TEXT("HumanPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__27, TEXT("injured-sounds"), TEXT("injured-sounds"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__28, TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__29, TEXT("zombie_biting"), TEXT("zombie_biting"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__29, TEXT("zombie_attack"), TEXT("zombie_attack"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__29, TEXT("zombie_dying"), TEXT("zombie_dying"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__30, TEXT("SimpleBlendSpace"), TEXT("SimpleBlendSpace"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__31, TEXT("Zombie_Chase_1_Full_Loop"), TEXT("Zombie_Chase_1_Full_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__28, TEXT("Copzombie_L_Actisdato"), TEXT("Copzombie_L_Actisdato"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__32, TEXT("Infected-AI"), TEXT("Infected-AI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__22, TEXT("MyChar"), TEXT("MyChar_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__33, TEXT("LoadingScreen-WesternOak"), TEXT("LoadingScreen-WesternOak_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__34, TEXT("DeadScreen"), TEXT("DeadScreen_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__34, TEXT("InGameUI"), TEXT("InGameUI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__34, TEXT("BP_CrosshairShoot"), TEXT("BP_CrosshairShoot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__34, TEXT("BP_Crosshair"), TEXT("BP_Crosshair_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__22, TEXT("MyAnimBP_Mannequin"), TEXT("MyAnimBP_Mannequin_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__35, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__35, TEXT("RunCamShake"), TEXT("RunCamShake_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__36, TEXT("InfectedAnimBP"), TEXT("InfectedAnimBP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__AHandgunBullet_C__pf3442503945
{
	FRegisterHelper__AHandgunBullet_C__pf3442503945()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/Weapons/HandgunBullet"), &AHandgunBullet_C__pf3442503945::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AHandgunBullet_C__pf3442503945 Instance;
};
FRegisterHelper__AHandgunBullet_C__pf3442503945 FRegisterHelper__AHandgunBullet_C__pf3442503945::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
