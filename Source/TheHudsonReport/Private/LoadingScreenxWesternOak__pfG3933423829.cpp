#include "TheHudsonReport.h"
#include "LoadingScreenxWesternOak__pfG3933423829.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Border.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/CircularThrobber.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "LoadingScreenxWesternOak__pfG3933423829.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
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
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
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
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
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
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
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
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "MyChar__pf2980937819.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "DeadScreen__pf122804083.h"
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
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "InGameUI__pf122804083.h"
#include "BP_CrosshairShoot__pf122804083.h"
#include "BP_Crosshair__pf122804083.h"
#include "MyAnimBP_Mannequin__pf2980937819.h"
#include "HandgunBullet__pf3442503945.h"
#include "InfectedxAI__pfG897084639.h"
#include "InfectedAnimBP__pf529494595.h"
#include "M9xwxFlashlight__pfGG2403237688.h"
#include "RunCamShake__pf2403237688.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
ULoadingScreenxWesternOak_C__pfG3933423829::ULoadingScreenxWesternOak_C__pfG3933423829(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (ULoadingScreenxWesternOak_C__pfG3933423829::StaticClass() == GetClass()))
	{
		ULoadingScreenxWesternOak_C__pfG3933423829::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
}
void ULoadingScreenxWesternOak_C__pfG3933423829::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void ULoadingScreenxWesternOak_C__pfG3933423829::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__0 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__0);
	auto __Local__1 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__2 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__1), UPanelWidget::__PPO__Slots() )));
	__Local__2 = TArray<UPanelSlot*> ();
	__Local__2.Reserve(6);
	auto __Local__3 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__3->LayoutData.Offsets.Left = 4.000000f;
	__Local__3->LayoutData.Offsets.Top = 4.000000f;
	__Local__3->LayoutData.Offsets.Right = 8000.000000f;
	__Local__3->LayoutData.Offsets.Bottom = 8000.000000f;
	__Local__3->Parent = __Local__1;
	auto __Local__4 = NewObject<UBorder>(__Local__0, UBorder::StaticClass(), TEXT("Border_490"));
	__Local__4->BrushColor = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__4->Slot = __Local__3;
	__Local__3->Content = __Local__4;
	__Local__2.Add(__Local__3);
	auto __Local__5 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__5->LayoutData.Offsets.Left = -76.000000f;
	__Local__5->LayoutData.Offsets.Right = 2004.000000f;
	__Local__5->LayoutData.Offsets.Bottom = 1078.000000f;
	__Local__5->Parent = __Local__1;
	auto __Local__6 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image_399"));
	__Local__6->Brush.ImageSize = FVector2D(1920.000000, 1040.000000);
	auto& __Local__7 = (*(AccessPrivateProperty<UObject* >(&(__Local__6->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__7 = CastChecked<UObject>(CastChecked<UDynamicClass>(ULoadingScreenxWesternOak_C__pfG3933423829::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__6->Slot = __Local__5;
	__Local__5->Content = __Local__6;
	__Local__2.Add(__Local__5);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__8->LayoutData.Offsets.Left = 252.000000f;
	__Local__8->LayoutData.Offsets.Top = 956.000000f;
	__Local__8->LayoutData.Offsets.Right = 58.074074f;
	__Local__8->LayoutData.Offsets.Bottom = 57.407413f;
	__Local__8->Parent = __Local__1;
	auto __Local__9 = NewObject<UCircularThrobber>(__Local__0, UCircularThrobber::StaticClass(), TEXT("CircularThrobber_641"));
	__Local__9->NumberOfPieces = 24;
	__Local__9->Period = 4.000000f;
	__Local__9->Image.ImageSize = FVector2D(13.285151, 61.763515);
	__Local__9->Image.Tiling = ESlateBrushTileType::Type::Horizontal;
	__Local__9->Slot = __Local__8;
	__Local__8->Content = __Local__9;
	__Local__2.Add(__Local__8);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_9"));
	__Local__10->LayoutData.Offsets.Left = 105.000000f;
	__Local__10->LayoutData.Offsets.Top = 992.000000f;
	__Local__10->LayoutData.Offsets.Right = 151.000000f;
	__Local__10->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__10->Parent = __Local__1;
	auto __Local__11 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("TextBlock_2"));
	__Local__11->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("PLEASE WAIT"), /* Literal Text */
	TEXT("[D3389DC24B3709B79A4A24A49CB59AA6]"), /* Namespace */
	TEXT("7EEFA9FA4586E2E6CD766CB6E7CB7669") /* Key */
	);
	__Local__11->Font.Size = 14;
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__2.Add(__Local__10);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_3"));
	__Local__12->LayoutData.Offsets.Left = 104.000000f;
	__Local__12->LayoutData.Offsets.Top = 960.000000f;
	__Local__12->LayoutData.Offsets.Right = 151.000000f;
	__Local__12->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__12->Parent = __Local__1;
	auto __Local__13 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("LOADING"));
	__Local__13->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("LOADING"), /* Literal Text */
	TEXT("[D3389DC24B3709B79A4A24A49CB59AA6]"), /* Namespace */
	TEXT("02684FA3425D3A4EA1D65CB79E906E0E") /* Key */
	);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__2.Add(__Local__12);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__1, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__14->LayoutData.Offsets.Left = 272.000000f;
	__Local__14->LayoutData.Offsets.Top = 972.000000f;
	__Local__14->LayoutData.Offsets.Right = 22.940742f;
	__Local__14->LayoutData.Offsets.Bottom = 7.907409f;
	__Local__14->Parent = __Local__1;
	auto __Local__15 = NewObject<UCircularThrobber>(__Local__0, UCircularThrobber::StaticClass(), TEXT("CircularThrobber_642"));
	__Local__15->NumberOfPieces = 10;
	__Local__15->Period = 1.177158f;
	__Local__15->Image.ImageSize = FVector2D(2.000000, 2.000000);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__2.Add(__Local__14);
	__Local__0->RootWidget = __Local__1;
}
void ULoadingScreenxWesternOak_C__pfG3933423829::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__16;
	SlotNames.Append(__Local__16);
}
void ULoadingScreenxWesternOak_C__pfG3933423829::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__17;
	TArray<FDelegateRuntimeBinding>  __Local__18;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), true, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(ULoadingScreenxWesternOak_C__pfG3933423829::StaticClass())->MiscConvertedSubobjects[0]), __Local__17, __Local__18);
}
void ULoadingScreenxWesternOak_C__pfG3933423829::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void ULoadingScreenxWesternOak_C__pfG3933423829::bpf__ExecuteUbergraph_LoadingScreenxWesternOak__pfG_0(int32 bpp__EntryPoint__pf)
{
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				bool  __Local__19 = false;
				if (!((IsValid(b0l__K2Node_DynamicCast_AsMy_Char__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char__pf->bpv__isLoadingx__pfzy) : (__Local__19)))
				{
					CurrentState = 2;
					break;
				}
				CurrentState = -1;
				break;
			}
		case 2:
			{
				RemoveFromParent();
				CurrentState = -1;
				break;
			}
		case 3:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMy_Char__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMy_Char__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = -1;
					break;
				}
				CurrentState = 1;
				break;
			}
		case 4:
			{
				CurrentState = 3;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
}
void ULoadingScreenxWesternOak_C__pfG3933423829::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_LoadingScreenxWesternOak__pfG_0(4);
}
void ULoadingScreenxWesternOak_C__pfG3933423829::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__20 = TEXT("/Game/Images");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__20, TEXT("LoadingScreen-Town"), TEXT("LoadingScreen-Town"), TEXT("/Script/Engine"), TEXT("Texture2D")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void ULoadingScreenxWesternOak_C__pfG3933423829::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void ULoadingScreenxWesternOak_C__pfG3933423829::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__21 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__22 = TEXT("/Game/Weapons");
	const TCHAR* __Local__23 = TEXT("/Game/Fonts");
	const TCHAR* __Local__24 = TEXT("/Game/OldTrainFactory/Textures/build");
	const TCHAR* __Local__25 = TEXT("/Game/Audio");
	const TCHAR* __Local__26 = TEXT("/Game/Images");
	const TCHAR* __Local__27 = TEXT("/Game/UI/Hud");
	const TCHAR* __Local__28 = TEXT("/Game/Mannequin/Character/Mesh");
	const TCHAR* __Local__29 = TEXT("/Game/Audio/walking-sounds");
	const TCHAR* __Local__30 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__31 = TEXT("/Game/Mannequin/MovementAnimPack");
	const TCHAR* __Local__32 = TEXT("/Game/Mannequin/Animations");
	const TCHAR* __Local__33 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__34 = TEXT("/Game/Mannequin/AngrosEdit");
	const TCHAR* __Local__35 = TEXT("/Game/BulletVFX/Meshes");
	const TCHAR* __Local__36 = TEXT("/Game/Materials");
	const TCHAR* __Local__37 = TEXT("/Game/Audio/Zombie-Sounds");
	const TCHAR* __Local__38 = TEXT("/Game/Audio/SoundAttenuation");
	const TCHAR* __Local__39 = TEXT("/Game/Audio/injured-sounds");
	const TCHAR* __Local__40 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	const TCHAR* __Local__41 = TEXT("/Game/ZombieMixamoModels/Animations/ZombieCop");
	const TCHAR* __Local__42 = TEXT("/Game/ZombieMixamoModels/BlendSpace");
	const TCHAR* __Local__43 = TEXT("/Game/Zombie_01/Animation/Root_Motion");
	const TCHAR* __Local__44 = TEXT("/Game/BulletVFX/Particles");
	const TCHAR* __Local__45 = TEXT("/Game/Mannequin");
	const TCHAR* __Local__46 = TEXT("/Game/Soldier_ru_01/Meshes");
	const TCHAR* __Local__47 = TEXT("/Game/UI");
	const TCHAR* __Local__48 = TEXT("/Game/Mannequin/AngrosEdit/InfectedBlueprints");
	const TCHAR* __Local__49 = TEXT("/Game/ZombieMixamoModels");
	const TCHAR* __Local__50 = TEXT("/Game/Blueprints");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__21, TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__22, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__23, TEXT("ADOBESONGSTD-LIGHT"), TEXT("ADOBESONGSTD-LIGHT"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__24, TEXT("Wood_01_D"), TEXT("Wood_01_D"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__25, TEXT("onClick"), TEXT("onClick"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__25, TEXT("hoverSound"), TEXT("hoverSound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__26, TEXT("LowHealthScreen"), TEXT("LowHealthScreen"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__27, TEXT("handgun_img"), TEXT("handgun_img"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__27, TEXT("HealthBar_Full"), TEXT("HealthBar_Full"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__26, TEXT("grunge-01-transparent"), TEXT("grunge-01-transparent"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__23, TEXT("corbel"), TEXT("corbel"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__23, TEXT("corbelb"), TEXT("corbelb"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__25, TEXT("Scary_impact"), TEXT("Scary_impact"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__27, TEXT("Crosshair_HUD"), TEXT("Crosshair_HUD"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__27, TEXT("Crosshair_HUD_Shoot"), TEXT("Crosshair_HUD_Shoot"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__28, TEXT("UE4_Mannequin_Skeleton"), TEXT("UE4_Mannequin_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__29, TEXT("footsteps"), TEXT("footsteps"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__30, TEXT("Pistol_Reload"), TEXT("Pistol_Reload"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__30, TEXT("Pistol_ShootOnce_Montage"), TEXT("Pistol_ShootOnce_Montage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__31, TEXT("ConsoleUse_LH"), TEXT("ConsoleUse_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("CrouchLoop_new"), TEXT("CrouchLoop_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("Crouch2Idle_new"), TEXT("Crouch2Idle_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("PickUp_LH"), TEXT("PickUp_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("Fists_Hit_Right"), TEXT("Fists_Hit_Right"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("Death_1"), TEXT("Death_1"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__30, TEXT("Pistol_SprintStart"), TEXT("Pistol_SprintStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("RunFwdStart"), TEXT("RunFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("JumpRun_LU_Land2Run"), TEXT("JumpRun_LU_Land2Run"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("JumpWalk_RU_Land2Walk"), TEXT("JumpWalk_RU_Land2Walk"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("JumpWalk_RU_Land"), TEXT("JumpWalk_RU_Land"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__32, TEXT("ThirdPersonJump_Loop"), TEXT("ThirdPersonJump_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__33, TEXT("WalkFwdStop_LU"), TEXT("WalkFwdStop_LU"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__33, TEXT("WalkFwdStart"), TEXT("WalkFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("PistolGunUp_IdleToRun"), TEXT("PistolGunUp_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__34, TEXT("Pistol_IdleToRun"), TEXT("Pistol_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__31, TEXT("TurnLt90_Loop"), TEXT("TurnLt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__31, TEXT("TurnRt90_Loop"), TEXT("TurnRt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__34, TEXT("idleToRun"), TEXT("idleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__34, TEXT("PistolAO"), TEXT("PistolAO"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__34, TEXT("LookAround_1D"), TEXT("LookAround_1D"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__35, TEXT("SM_BulletCasing"), TEXT("SM_BulletCasing"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__36, TEXT("BulletPhysicalMaterial"), TEXT("BulletPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__37, TEXT("zombie-idle"), TEXT("zombie-idle"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__38, TEXT("3dSound"), TEXT("3dSound"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__37, TEXT("Zombie_-_attack"), TEXT("Zombie_-_attack"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__37, TEXT("zombie-dies"), TEXT("zombie-dies"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__37, TEXT("zombie-idle-2"), TEXT("zombie-idle-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__37, TEXT("zombie-idle-3"), TEXT("zombie-idle-3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__37, TEXT("zombie-detect"), TEXT("zombie-detect"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__37, TEXT("zombie-detect-2"), TEXT("zombie-detect-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__37, TEXT("zombie-dies-02"), TEXT("zombie-dies-02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__39, TEXT("injured-sounds"), TEXT("injured-sounds"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__40, TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__41, TEXT("zombie_biting"), TEXT("zombie_biting"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__41, TEXT("zombie_attack"), TEXT("zombie_attack"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__41, TEXT("zombie_dying"), TEXT("zombie_dying"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__42, TEXT("SimpleBlendSpace"), TEXT("SimpleBlendSpace"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__43, TEXT("Zombie_Chase_1_Full_Loop"), TEXT("Zombie_Chase_1_Full_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__40, TEXT("Copzombie_L_Actisdato"), TEXT("Copzombie_L_Actisdato"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__25, TEXT("Dramatic_Hit_Hard_10"), TEXT("Dramatic_Hit_Hard_10"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__25, TEXT("Death_Scream"), TEXT("Death_Scream"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__25, TEXT("LostIt"), TEXT("LostIt"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__30, TEXT("PistolEquipMontage"), TEXT("PistolEquipMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__25, TEXT("Player_Heal"), TEXT("Player_Heal"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__25, TEXT("SlowHeartbeat"), TEXT("SlowHeartbeat"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__30, TEXT("PistolEquipWeaponAnimMontage"), TEXT("PistolEquipWeaponAnimMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__25, TEXT("Flashlight_ON"), TEXT("Flashlight_ON"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__25, TEXT("Flashlight_OFF"), TEXT("Flashlight_OFF"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__44, TEXT("VFX_Impact_Flesh"), TEXT("VFX_Impact_Flesh"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__44, TEXT("VFX_Impact_Concrete"), TEXT("VFX_Impact_Concrete"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__25, TEXT("Trigger_click_empty"), TEXT("Trigger_click_empty"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__45, TEXT("Climbing"), TEXT("Climbing"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__33, TEXT("Pistol_Idle"), TEXT("Pistol_Idle"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__46, TEXT("Soldier_ru_01"), TEXT("Soldier_ru_01"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__36, TEXT("HumanPhysicalMaterial"), TEXT("HumanPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__34, TEXT("MyChar"), TEXT("MyChar_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__47, TEXT("DeadScreen"), TEXT("DeadScreen_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__47, TEXT("InGameUI"), TEXT("InGameUI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__47, TEXT("BP_CrosshairShoot"), TEXT("BP_CrosshairShoot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__47, TEXT("BP_Crosshair"), TEXT("BP_Crosshair_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__34, TEXT("MyAnimBP_Mannequin"), TEXT("MyAnimBP_Mannequin_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__22, TEXT("HandgunBullet"), TEXT("HandgunBullet_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__48, TEXT("Infected-AI"), TEXT("Infected-AI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__49, TEXT("InfectedAnimBP"), TEXT("InfectedAnimBP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__50, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__50, TEXT("RunCamShake"), TEXT("RunCamShake_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__ULoadingScreenxWesternOak_C__pfG3933423829
{
	FRegisterHelper__ULoadingScreenxWesternOak_C__pfG3933423829()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/UI/LoadingScreens/LoadingScreen-WesternOak"), &ULoadingScreenxWesternOak_C__pfG3933423829::__StaticDependenciesAssets);
	}
	static FRegisterHelper__ULoadingScreenxWesternOak_C__pfG3933423829 Instance;
};
FRegisterHelper__ULoadingScreenxWesternOak_C__pfG3933423829 FRegisterHelper__ULoadingScreenxWesternOak_C__pfG3933423829::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
