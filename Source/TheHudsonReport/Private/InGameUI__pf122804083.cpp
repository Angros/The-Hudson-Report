#include "TheHudsonReport.h"
#include "InGameUI__pf122804083.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/ProgressBar.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
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
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Slate/Public/Widgets/Notifications/SProgressBar.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "InGameUI__pf122804083.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "MyChar__pf2980937819.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "LoadingScreenxWesternOak__pfG3933423829.h"
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
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
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
UInGameUI_C__pf122804083::UInGameUI_C__pf122804083(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UInGameUI_C__pf122804083::StaticClass() == GetClass()))
	{
		UInGameUI_C__pf122804083::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
}
void UInGameUI_C__pf122804083::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UInGameUI_C__pf122804083::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
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
	auto __Local__1 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeIn-UI_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("TakingDamageAnim_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	auto __Local__3 = NewObject<UCanvasPanel>(__Local__0, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__4 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__3), UPanelWidget::__PPO__Slots() )));
	__Local__4 = TArray<UPanelSlot*> ();
	__Local__4.Reserve(33);
	auto __Local__5 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_29"));
	__Local__5->LayoutData.Offsets.Left = -48.000000f;
	__Local__5->LayoutData.Offsets.Top = -20.000000f;
	__Local__5->LayoutData.Offsets.Right = 2006.666748f;
	__Local__5->LayoutData.Offsets.Bottom = 1112.000000f;
	__Local__5->Parent = __Local__3;
	auto __Local__6 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("LowHealthScreen"));
	__Local__6->Brush.ImageSize = FVector2D(1920.000000, 1080.000000);
	auto& __Local__7 = (*(AccessPrivateProperty<UObject* >(&(__Local__6->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__7 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__6->Slot = __Local__5;
	__Local__6->Visibility = ESlateVisibility::Hidden;
	__Local__5->Content = __Local__6;
	__Local__4.Add(__Local__5);
	auto __Local__8 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_20"));
	__Local__8->LayoutData.Offsets.Left = -60.000000f;
	__Local__8->LayoutData.Offsets.Top = -56.000000f;
	__Local__8->LayoutData.Offsets.Right = 2052.000000f;
	__Local__8->LayoutData.Offsets.Bottom = 1200.000000f;
	__Local__8->Parent = __Local__3;
	auto __Local__9 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("DamageTaken"));
	auto& __Local__10 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__9->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__10 = FLinearColor(1.000000, 1.000000, 1.000000, 0.995000);
	__Local__9->ColorAndOpacity = FLinearColor(0.428691, 0.000000, 0.000000, 0.159000);
	__Local__9->Slot = __Local__8;
	__Local__9->Visibility = ESlateVisibility::Hidden;
	__Local__8->Content = __Local__9;
	__Local__4.Add(__Local__8);
	auto __Local__11 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_5"));
	__Local__11->LayoutData.Offsets.Left = 1604.000000f;
	__Local__11->LayoutData.Offsets.Top = 840.000000f;
	__Local__11->LayoutData.Offsets.Right = 294.888885f;
	__Local__11->LayoutData.Offsets.Bottom = 42.063488f;
	__Local__11->Parent = __Local__3;
	auto __Local__12 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("TransparentBG-Health"));
	__Local__12->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__12->Slot = __Local__11;
	__Local__12->RenderTransform.Translation = FVector2D(-100.000000, 0.000000);
	__Local__11->Content = __Local__12;
	__Local__4.Add(__Local__11);
	auto __Local__13 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_10"));
	__Local__13->LayoutData.Offsets.Left = 1604.000000f;
	__Local__13->LayoutData.Offsets.Top = 884.000000f;
	__Local__13->LayoutData.Offsets.Right = 161.904770f;
	__Local__13->LayoutData.Offsets.Bottom = 102.047630f;
	__Local__13->Parent = __Local__3;
	auto __Local__14 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("TransparentBG-Gun"));
	auto& __Local__15 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__14->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__15 = FLinearColor(1.000000, 1.000000, 1.000000, 0.073000);
	__Local__14->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__14->Slot = __Local__13;
	__Local__14->RenderTransform.Translation = FVector2D(-100.000000, 0.000000);
	__Local__13->Content = __Local__14;
	__Local__4.Add(__Local__13);
	auto __Local__16 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_16"));
	__Local__16->LayoutData.Offsets.Left = 1768.000000f;
	__Local__16->LayoutData.Offsets.Top = 784.000000f;
	__Local__16->LayoutData.Offsets.Right = 130.776566f;
	__Local__16->LayoutData.Offsets.Bottom = 100.813599f;
	__Local__16->Parent = __Local__3;
	auto __Local__17 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("TransparentBG-Ammo"));
	auto& __Local__18 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__17->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__18 = FLinearColor(1.000000, 1.000000, 1.000000, 0.073000);
	__Local__17->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__17->Slot = __Local__16;
	__Local__17->RenderTransform.Translation = FVector2D(-100.000000, 101.000000);
	__Local__16->Content = __Local__17;
	__Local__4.Add(__Local__16);
	auto __Local__19 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__19->LayoutData.Offsets.Left = 1604.000000f;
	__Local__19->LayoutData.Offsets.Top = 836.000000f;
	__Local__19->LayoutData.Offsets.Right = 292.222229f;
	__Local__19->LayoutData.Offsets.Bottom = 2.563488f;
	__Local__19->Parent = __Local__3;
	auto __Local__20 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Details-1"));
	__Local__20->ColorAndOpacity = FLinearColor(0.435000, 0.435000, 0.435000, 0.000000);
	__Local__20->Slot = __Local__19;
	__Local__20->RenderTransform.Translation = FVector2D(-100.000000, 0.000000);
	__Local__19->Content = __Local__20;
	__Local__4.Add(__Local__19);
	auto __Local__21 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_7"));
	__Local__21->LayoutData.Offsets.Left = 1768.000000f;
	__Local__21->LayoutData.Offsets.Top = 988.000000f;
	__Local__21->LayoutData.Offsets.Right = 131.015869f;
	__Local__21->LayoutData.Offsets.Bottom = 3.706345f;
	__Local__21->Parent = __Local__3;
	auto __Local__22 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Details-2"));
	__Local__22->ColorAndOpacity = FLinearColor(0.435000, 0.435000, 0.435000, 0.000000);
	__Local__22->Slot = __Local__21;
	__Local__22->RenderTransform.Translation = FVector2D(-99.833328, 0.000000);
	__Local__21->Content = __Local__22;
	__Local__4.Add(__Local__21);
	auto __Local__23 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_8"));
	__Local__23->LayoutData.Offsets.Left = 1604.000000f;
	__Local__23->LayoutData.Offsets.Top = 988.000000f;
	__Local__23->LayoutData.Offsets.Right = 162.197693f;
	__Local__23->LayoutData.Offsets.Bottom = 3.706345f;
	__Local__23->Parent = __Local__3;
	auto __Local__24 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Details-3"));
	__Local__24->ColorAndOpacity = FLinearColor(0.435000, 0.435000, 0.435000, 0.000000);
	__Local__24->Slot = __Local__23;
	__Local__24->RenderTransform.Translation = FVector2D(-100.000000, 0.000000);
	__Local__23->Content = __Local__24;
	__Local__4.Add(__Local__23);
	auto __Local__25 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_9"));
	__Local__25->LayoutData.Offsets.Left = 1596.000000f;
	__Local__25->LayoutData.Offsets.Top = 840.000000f;
	__Local__25->LayoutData.Offsets.Right = 4.539673f;
	__Local__25->LayoutData.Offsets.Bottom = 145.763489f;
	__Local__25->Parent = __Local__3;
	auto __Local__26 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Details-4"));
	__Local__26->ColorAndOpacity = FLinearColor(0.435000, 0.435000, 0.435000, 0.000000);
	__Local__26->Slot = __Local__25;
	__Local__26->Visibility = ESlateVisibility::Hidden;
	__Local__26->RenderTransform.Translation = FVector2D(-99.000000, 0.000000);
	__Local__25->Content = __Local__26;
	__Local__4.Add(__Local__25);
	auto __Local__27 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__27->LayoutData.Offsets.Left = 1548.000000f;
	__Local__27->LayoutData.Offsets.Top = 836.000000f;
	__Local__27->LayoutData.Offsets.Right = 257.037018f;
	__Local__27->LayoutData.Offsets.Bottom = 190.666656f;
	__Local__27->Parent = __Local__3;
	auto __Local__28 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Gun"));
	__Local__28->Brush.ImageSize = FVector2D(2048.000000, 1556.000000);
	auto& __Local__29 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__29 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__28->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__28->Slot = __Local__27;
	__Local__28->RenderTransform.Translation = FVector2D(-100.000000, 0.000000);
	__Local__27->Content = __Local__28;
	__Local__4.Add(__Local__27);
	auto __Local__30 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_4"));
	__Local__30->LayoutData.Offsets.Left = 1512.000000f;
	__Local__30->LayoutData.Offsets.Top = 924.000000f;
	__Local__30->LayoutData.Offsets.Right = 137.399994f;
	__Local__30->LayoutData.Offsets.Bottom = 22.799999f;
	__Local__30->Parent = __Local__3;
	auto __Local__31 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("OutOfAmmo"));
	__Local__31->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("OUT OF AMMO"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("3EB5C594419CC738A7349FB5A8F561DC") /* Key */
	);
	auto& __Local__32 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__31->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__32 = FLinearColor(1.000000, 0.019754, 0.000000, 0.000000);
	__Local__31->Font.Size = 14;
	__Local__31->bIsVariable = true;
	__Local__31->Slot = __Local__30;
	__Local__31->Visibility = ESlateVisibility::Hidden;
	__Local__30->Content = __Local__31;
	__Local__4.Add(__Local__30);
	auto __Local__33 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__33->LayoutData.Offsets.Left = 1780.000000f;
	__Local__33->LayoutData.Offsets.Top = 784.000000f;
	__Local__33->LayoutData.Offsets.Right = 115.142868f;
	__Local__33->LayoutData.Offsets.Bottom = 56.647621f;
	__Local__33->Parent = __Local__3;
	auto __Local__34 = NewObject<UHorizontalBox>(__Local__0, UHorizontalBox::StaticClass(), TEXT("AmmoCount"));
	auto& __Local__35 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__34), UPanelWidget::__PPO__Slots() )));
	__Local__35 = TArray<UPanelSlot*> ();
	__Local__35.Reserve(3);
	auto __Local__36 = NewObject<UHorizontalBoxSlot>(__Local__34, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__36->Parent = __Local__34;
	auto __Local__37 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("AmmoInMag"));
	__Local__37->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("00"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("AA4C2DBD4B1A11064348F59C10B546C7") /* Key */
	);
	auto& __Local__38 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__37->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__38 = FLinearColor(0.783538, 0.765150, 0.554860, 0.969000);
	__Local__37->Font.Size = 37;
	__Local__37->ShadowOffset = FVector2D(-0.233095, 0.817752);
	__Local__37->Slot = __Local__36;
	__Local__36->Content = __Local__37;
	__Local__35.Add(__Local__36);
	auto __Local__39 = NewObject<UHorizontalBoxSlot>(__Local__34, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__39->Parent = __Local__34;
	auto __Local__40 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Divider"));
	__Local__40->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("/"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("03F96AE44F6FA7FE825D2D8D76AE01FA") /* Key */
	);
	auto& __Local__41 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__40->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__41 = FLinearColor(0.158961, 0.462077, 0.068478, 1.000000);
	__Local__40->Font.Size = 17;
	__Local__40->Slot = __Local__39;
	__Local__40->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__39->Content = __Local__40;
	__Local__35.Add(__Local__39);
	auto __Local__42 = NewObject<UHorizontalBoxSlot>(__Local__34, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_2"));
	__Local__42->Parent = __Local__34;
	auto __Local__43 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("AmmoReserved"));
	__Local__43->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("A6A97EED46A7CC13281E819875EFA198") /* Key */
	);
	auto& __Local__44 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__43->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__44 = FLinearColor(0.158961, 0.462077, 0.068478, 1.000000);
	__Local__43->Font.Size = 17;
	__Local__43->Slot = __Local__42;
	__Local__43->RenderTransform.Translation = FVector2D(0.000000, 10.000000);
	__Local__42->Content = __Local__43;
	__Local__35.Add(__Local__42);
	__Local__34->Slot = __Local__33;
	__Local__34->RenderTransform.Translation = FVector2D(-100.000000, 101.000000);
	__Local__33->Content = __Local__34;
	__Local__4.Add(__Local__33);
	auto __Local__45 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__45->LayoutData.Offsets.Left = 1592.000000f;
	__Local__45->LayoutData.Offsets.Top = 836.000000f;
	__Local__45->LayoutData.Offsets.Right = 304.513275f;
	__Local__45->LayoutData.Offsets.Bottom = 102.761909f;
	__Local__45->Parent = __Local__3;
	auto __Local__46 = NewObject<UProgressBar>(__Local__0, UProgressBar::StaticClass(), TEXT("HealthBar_Empty"));
	__Local__46->WidgetStyle.BackgroundImage.ImageSize = FVector2D(822.000000, 393.000000);
	__Local__46->WidgetStyle.BackgroundImage.Margin.Left = 0.416667f;
	__Local__46->WidgetStyle.BackgroundImage.Margin.Top = 0.416667f;
	__Local__46->WidgetStyle.BackgroundImage.Margin.Right = 0.416667f;
	__Local__46->WidgetStyle.BackgroundImage.Margin.Bottom = 0.416667f;
	auto& __Local__47 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__46->WidgetStyle.BackgroundImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__47 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__46->WidgetStyle.FillImage.ImageSize = FVector2D(1822.139893, 393.000000);
	__Local__46->WidgetStyle.FillImage.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__46->WidgetStyle.FillImage.Margin.Left = 0.416667f;
	__Local__46->WidgetStyle.FillImage.Margin.Top = 0.416667f;
	__Local__46->WidgetStyle.FillImage.Margin.Right = 0.416667f;
	__Local__46->WidgetStyle.FillImage.Margin.Bottom = 0.416667f;
	auto& __Local__48 = (*(AccessPrivateProperty<UObject* >(&(__Local__46->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__48 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__46->Percent = 1.000000f;
	__Local__46->FillColorAndOpacity = FLinearColor(0.032885, 0.040000, 0.029800, 0.000000);
	__Local__46->Slot = __Local__45;
	__Local__46->RenderTransform.Translation = FVector2D(-100.000000, 0.000000);
	__Local__45->Content = __Local__46;
	__Local__4.Add(__Local__45);
	auto __Local__49 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_13"));
	__Local__49->LayoutData.Offsets.Left = 1592.000000f;
	__Local__49->LayoutData.Offsets.Top = 836.000000f;
	__Local__49->LayoutData.Offsets.Right = 305.128418f;
	__Local__49->LayoutData.Offsets.Bottom = 103.266457f;
	__Local__49->Parent = __Local__3;
	auto __Local__50 = NewObject<UProgressBar>(__Local__0, UProgressBar::StaticClass(), TEXT("HealthBar_Full"));
	__Local__50->WidgetStyle.BackgroundImage.ImageSize = FVector2D(822.000000, 393.000000);
	__Local__50->WidgetStyle.BackgroundImage.Margin.Left = 0.416667f;
	__Local__50->WidgetStyle.BackgroundImage.Margin.Top = 0.416667f;
	__Local__50->WidgetStyle.BackgroundImage.Margin.Right = 0.416667f;
	__Local__50->WidgetStyle.BackgroundImage.Margin.Bottom = 0.416667f;
	auto& __Local__51 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__50->WidgetStyle.BackgroundImage.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__51 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__50->WidgetStyle.FillImage.ImageSize = FVector2D(822.000000, 393.000000);
	__Local__50->WidgetStyle.FillImage.DrawAs = ESlateBrushDrawType::Type::Image;
	__Local__50->WidgetStyle.FillImage.Margin.Left = 0.416667f;
	__Local__50->WidgetStyle.FillImage.Margin.Top = 0.416667f;
	__Local__50->WidgetStyle.FillImage.Margin.Right = 0.416667f;
	__Local__50->WidgetStyle.FillImage.Margin.Bottom = 0.416667f;
	auto& __Local__52 = (*(AccessPrivateProperty<UObject* >(&(__Local__50->WidgetStyle.FillImage), FSlateBrush::__PPO__ResourceObject() )));
	__Local__52 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	__Local__50->Percent = 1.000000f;
	__Local__50->FillColorAndOpacity = FLinearColor(0.591130, 0.710000, 0.539600, 0.000000);
	__Local__50->Slot = __Local__49;
	__Local__50->RenderTransform.Translation = FVector2D(-100.000000, 0.000000);
	__Local__49->Content = __Local__50;
	__Local__4.Add(__Local__49);
	auto __Local__53 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_25"));
	__Local__53->LayoutData.Offsets.Left = 1489.000000f;
	__Local__53->LayoutData.Offsets.Top = 59.833332f;
	__Local__53->LayoutData.Offsets.Right = 431.047607f;
	__Local__53->LayoutData.Offsets.Bottom = 38.666668f;
	__Local__53->Parent = __Local__3;
	auto __Local__54 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("BgOfChapter"));
	auto& __Local__55 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__54->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__55 = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	__Local__54->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__54->Slot = __Local__53;
	__Local__53->Content = __Local__54;
	__Local__4.Add(__Local__53);
	auto __Local__56 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_28"));
	__Local__56->LayoutData.Offsets.Left = 1512.000000f;
	__Local__56->LayoutData.Offsets.Top = 28.000000f;
	__Local__56->LayoutData.Offsets.Right = 388.333344f;
	__Local__56->LayoutData.Offsets.Bottom = 132.000000f;
	__Local__56->Parent = __Local__3;
	auto __Local__57 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("ChapterText"));
	__Local__57->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Chapter 1"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("EFEB3F654D60FDDCEF833F9CEFF0C0D0") /* Key */
	);
	auto& __Local__58 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__57->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__58 = FLinearColor(0.650000, 0.650000, 0.650000, 0.000000);
	__Local__57->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__57->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__57->bIsVariable = true;
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__4.Add(__Local__56);
	auto __Local__59 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_22"));
	__Local__59->LayoutData.Offsets.Left = 1489.000000f;
	__Local__59->LayoutData.Offsets.Top = 104.000000f;
	__Local__59->LayoutData.Offsets.Right = 435.000000f;
	__Local__59->LayoutData.Offsets.Bottom = 53.000000f;
	__Local__59->Parent = __Local__3;
	auto __Local__60 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("BgOfObjective"));
	auto& __Local__61 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__60->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__61 = FLinearColor(0.000000, 0.000000, 0.000000, 0.500000);
	__Local__60->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__4.Add(__Local__59);
	auto __Local__62 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_26"));
	__Local__62->LayoutData.Offsets.Left = 1516.000000f;
	__Local__62->LayoutData.Offsets.Top = 80.000000f;
	__Local__62->LayoutData.Offsets.Right = 388.333344f;
	__Local__62->LayoutData.Offsets.Bottom = 76.000000f;
	__Local__62->Parent = __Local__3;
	auto __Local__63 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("ObjectiveText-CH2"));
	__Local__63->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Return to the safehouse"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("86AD5A874FE7B5F296B01482BE25C1D2") /* Key */
	);
	auto& __Local__64 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__63->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__64 = FLinearColor(0.650000, 0.650000, 0.650000, 1.000000);
	__Local__63->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__63->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__63->bIsVariable = true;
	__Local__63->Slot = __Local__62;
	__Local__63->Visibility = ESlateVisibility::Hidden;
	__Local__62->Content = __Local__63;
	__Local__4.Add(__Local__62);
	auto __Local__65 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_30"));
	__Local__65->LayoutData.Offsets.Left = 1512.000000f;
	__Local__65->LayoutData.Offsets.Top = 28.000000f;
	__Local__65->LayoutData.Offsets.Right = 388.333344f;
	__Local__65->LayoutData.Offsets.Bottom = 132.000000f;
	__Local__65->Parent = __Local__3;
	auto __Local__66 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Chapter2Text"));
	__Local__66->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Chapter 2"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("BAE24CD740F774EABBDA0A8E51A1E3EB") /* Key */
	);
	auto& __Local__67 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__66->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__67 = FLinearColor(0.650000, 0.650000, 0.650000, 1.000000);
	__Local__66->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__66->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__66->bIsVariable = true;
	__Local__66->Slot = __Local__65;
	__Local__66->Visibility = ESlateVisibility::Hidden;
	__Local__65->Content = __Local__66;
	__Local__4.Add(__Local__65);
	auto __Local__68 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_27"));
	__Local__68->LayoutData.Offsets.Left = 1512.000000f;
	__Local__68->LayoutData.Offsets.Top = 80.000000f;
	__Local__68->LayoutData.Offsets.Right = 388.333344f;
	__Local__68->LayoutData.Offsets.Bottom = 76.000000f;
	__Local__68->Parent = __Local__3;
	auto __Local__69 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("ObjectiveText"));
	__Local__69->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Find an exit before nightfall"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("25A4906F4867E84DBB9011A2D8A4929E") /* Key */
	);
	auto& __Local__70 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__69->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__70 = FLinearColor(0.650000, 0.650000, 0.650000, 0.000000);
	__Local__69->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__69->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__69->bIsVariable = true;
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__4.Add(__Local__68);
	auto __Local__71 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_35"));
	__Local__71->LayoutData.Offsets.Left = 1512.000000f;
	__Local__71->LayoutData.Offsets.Top = 80.000000f;
	__Local__71->LayoutData.Offsets.Right = 388.333344f;
	__Local__71->LayoutData.Offsets.Bottom = 76.000000f;
	__Local__71->Parent = __Local__3;
	auto __Local__72 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("ObjectiveText-02"));
	__Local__72->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Find a way to open the gate"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("4728788A41026073E5DF6CBD88FE1765") /* Key */
	);
	auto& __Local__73 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__72->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__73 = FLinearColor(0.650000, 0.650000, 0.650000, 1.000000);
	__Local__72->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__72->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__72->bIsVariable = true;
	__Local__72->Slot = __Local__71;
	__Local__72->Visibility = ESlateVisibility::Hidden;
	__Local__71->Content = __Local__72;
	__Local__4.Add(__Local__71);
	auto __Local__74 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_36"));
	__Local__74->LayoutData.Offsets.Left = 1512.000000f;
	__Local__74->LayoutData.Offsets.Top = 80.000000f;
	__Local__74->LayoutData.Offsets.Right = 388.333344f;
	__Local__74->LayoutData.Offsets.Bottom = 76.000000f;
	__Local__74->Parent = __Local__3;
	auto __Local__75 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("ObjectiveText-03"));
	__Local__75->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Leave the area"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("DAB18513455917F3D39987AB6F001D82") /* Key */
	);
	auto& __Local__76 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__75->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__76 = FLinearColor(0.650000, 0.650000, 0.650000, 1.000000);
	__Local__75->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__75->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__75->bIsVariable = true;
	__Local__75->Slot = __Local__74;
	__Local__75->Visibility = ESlateVisibility::Hidden;
	__Local__74->Content = __Local__75;
	__Local__4.Add(__Local__74);
	auto __Local__77 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_14"));
	__Local__77->LayoutData.Offsets.Left = 1544.000000f;
	__Local__77->LayoutData.Offsets.Top = 669.500000f;
	__Local__77->LayoutData.Offsets.Right = 296.000000f;
	__Local__77->LayoutData.Offsets.Bottom = 156.785721f;
	__Local__77->Parent = __Local__3;
	auto __Local__78 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("Image_245"));
	__Local__78->Brush.ImageSize = FVector2D(800.000000, 800.000000);
	auto& __Local__79 = (*(AccessPrivateProperty<UObject* >(&(__Local__78->Brush), FSlateBrush::__PPO__ResourceObject() )));
	__Local__79 = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__78->Slot = __Local__77;
	__Local__78->RenderTransform.Translation = FVector2D(-39.999985, 165.714294);
	__Local__77->Content = __Local__78;
	__Local__4.Add(__Local__77);
	auto __Local__80 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_37"));
	__Local__80->LayoutData.Offsets.Left = 820.000000f;
	__Local__80->LayoutData.Offsets.Top = 928.000000f;
	__Local__80->LayoutData.Offsets.Right = 282.857147f;
	__Local__80->LayoutData.Offsets.Bottom = 46.285717f;
	__Local__80->Parent = __Local__3;
	auto __Local__81 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("InteractionBG-03"));
	auto& __Local__82 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__81->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__82 = FLinearColor(0.000000, 0.000000, 0.000000, 0.400000);
	__Local__81->Slot = __Local__80;
	__Local__81->Visibility = ESlateVisibility::Hidden;
	__Local__80->Content = __Local__81;
	__Local__4.Add(__Local__80);
	auto __Local__83 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_34"));
	__Local__83->LayoutData.Offsets.Left = 820.000000f;
	__Local__83->LayoutData.Offsets.Top = 928.000000f;
	__Local__83->LayoutData.Offsets.Right = 282.857147f;
	__Local__83->LayoutData.Offsets.Bottom = 46.285717f;
	__Local__83->Parent = __Local__3;
	auto __Local__84 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("InteractionBG-02"));
	auto& __Local__85 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__84->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__85 = FLinearColor(0.000000, 0.000000, 0.000000, 0.400000);
	__Local__84->Slot = __Local__83;
	__Local__84->Visibility = ESlateVisibility::Hidden;
	__Local__83->Content = __Local__84;
	__Local__4.Add(__Local__83);
	auto __Local__86 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_15"));
	__Local__86->LayoutData.Offsets.Left = 818.857117f;
	__Local__86->LayoutData.Offsets.Top = 925.714294f;
	__Local__86->LayoutData.Offsets.Right = 282.857147f;
	__Local__86->LayoutData.Offsets.Bottom = 46.285717f;
	__Local__86->Parent = __Local__3;
	auto __Local__87 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("interactionBG"));
	auto& __Local__88 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__87->Brush.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__88 = FLinearColor(0.000000, 0.000000, 0.000000, 0.400000);
	__Local__87->Slot = __Local__86;
	__Local__87->Visibility = ESlateVisibility::Hidden;
	__Local__86->Content = __Local__87;
	__Local__4.Add(__Local__86);
	auto __Local__89 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_11"));
	__Local__89->LayoutData.Offsets.Left = 848.000000f;
	__Local__89->LayoutData.Offsets.Top = 928.000000f;
	__Local__89->LayoutData.Offsets.Right = 265.095245f;
	__Local__89->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__89->Parent = __Local__3;
	auto __Local__90 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("Presspick"));
	__Local__90->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Press     to pick up"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("BF489AD140E858E834CC33AA940BE6DD") /* Key */
	);
	__Local__90->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__90->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__90->bIsVariable = true;
	__Local__90->Slot = __Local__89;
	__Local__89->Content = __Local__90;
	__Local__4.Add(__Local__89);
	auto __Local__91 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_17"));
	__Local__91->LayoutData.Offsets.Left = 924.000000f;
	__Local__91->LayoutData.Offsets.Top = 928.000000f;
	__Local__91->LayoutData.Offsets.Right = 265.095245f;
	__Local__91->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__91->Parent = __Local__3;
	auto __Local__92 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("E"));
	__Local__92->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("E"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("00895BB848550C11941021890AD03A9B") /* Key */
	);
	auto& __Local__93 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__92->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__93 = FLinearColor(1.000000, 0.854317, 0.000000, 1.000000);
	__Local__92->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__92->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__92->bIsVariable = true;
	__Local__92->Slot = __Local__91;
	__Local__92->RenderTransform.Translation = FVector2D(1.000000, 0.000000);
	__Local__91->Content = __Local__92;
	__Local__4.Add(__Local__91);
	auto __Local__94 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_18"));
	__Local__94->LayoutData.Offsets.Left = 828.000000f;
	__Local__94->LayoutData.Offsets.Top = 928.000000f;
	__Local__94->LayoutData.Offsets.Right = 265.095245f;
	__Local__94->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__94->Parent = __Local__3;
	auto __Local__95 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("opengate"));
	__Local__95->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Press     to open gate"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("246C981A4900EDACE3CE77933B0FE5EA") /* Key */
	);
	__Local__95->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__95->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__95->bIsVariable = true;
	__Local__95->Slot = __Local__94;
	__Local__95->Visibility = ESlateVisibility::Hidden;
	__Local__94->Content = __Local__95;
	__Local__4.Add(__Local__94);
	auto __Local__96 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_19"));
	__Local__96->LayoutData.Offsets.Left = 904.000000f;
	__Local__96->LayoutData.Offsets.Top = 928.000000f;
	__Local__96->LayoutData.Offsets.Right = 265.095245f;
	__Local__96->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__96->Parent = __Local__3;
	auto __Local__97 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("egate"));
	__Local__97->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("E"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("9048A8A6485976A93D4A0E9DDD6F5121") /* Key */
	);
	auto& __Local__98 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__97->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__98 = FLinearColor(1.000000, 0.854317, 0.000000, 1.000000);
	__Local__97->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__97->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__97->bIsVariable = true;
	__Local__97->Slot = __Local__96;
	__Local__97->RenderTransform.Translation = FVector2D(1.000000, 0.000000);
	__Local__96->Content = __Local__97;
	__Local__4.Add(__Local__96);
	auto __Local__99 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_21"));
	__Local__99->LayoutData.Offsets.Left = 864.000000f;
	__Local__99->LayoutData.Offsets.Top = 928.000000f;
	__Local__99->LayoutData.Offsets.Right = 265.095245f;
	__Local__99->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__99->Parent = __Local__3;
	auto __Local__100 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("pressview"));
	__Local__100->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("Press      to view"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("C2E6FC4648FC7DB0D2F99B882B1E7DF0") /* Key */
	);
	__Local__100->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed);
	__Local__100->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__100->bIsVariable = true;
	__Local__100->Slot = __Local__99;
	__Local__100->Visibility = ESlateVisibility::Hidden;
	__Local__99->Content = __Local__100;
	__Local__4.Add(__Local__99);
	auto __Local__101 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_23"));
	__Local__101->LayoutData.Offsets.Left = 940.000000f;
	__Local__101->LayoutData.Offsets.Top = 928.000000f;
	__Local__101->LayoutData.Offsets.Right = 265.095245f;
	__Local__101->LayoutData.Offsets.Bottom = 40.000000f;
	__Local__101->Parent = __Local__3;
	auto __Local__102 = NewObject<UTextBlock>(__Local__0, UTextBlock::StaticClass(), TEXT("V"));
	__Local__102->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("V"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("8F5FB88A44A2CF6082A8A8B000F6A8F1") /* Key */
	);
	auto& __Local__103 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__102->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__103 = FLinearColor(1.000000, 0.854317, 0.000000, 1.000000);
	__Local__102->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[6], ECastCheckedType::NullAllowed);
	__Local__102->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__102->bIsVariable = true;
	__Local__102->Slot = __Local__101;
	__Local__102->Visibility = ESlateVisibility::Hidden;
	__Local__102->RenderTransform.Translation = FVector2D(1.000000, 0.000000);
	__Local__101->Content = __Local__102;
	__Local__4.Add(__Local__101);
	auto __Local__104 = NewObject<UCanvasPanelSlot>(__Local__3, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_31"));
	__Local__104->LayoutData.Offsets.Left = -148.000000f;
	__Local__104->LayoutData.Offsets.Top = -36.000000f;
	__Local__104->LayoutData.Offsets.Right = 2180.000000f;
	__Local__104->LayoutData.Offsets.Bottom = 1136.000000f;
	__Local__104->Parent = __Local__3;
	auto __Local__105 = NewObject<UImage>(__Local__0, UImage::StaticClass(), TEXT("fadein"));
	__Local__105->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 0.000000);
	__Local__105->Slot = __Local__104;
	__Local__104->Content = __Local__105;
	__Local__4.Add(__Local__104);
	__Local__0->RootWidget = __Local__3;
	auto __Local__106 = NewObject<UMovieScene>(__Local__1, UMovieScene::StaticClass(), TEXT("FadeIn-UI"));
	auto& __Local__107 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__106), UMovieScene::__PPO__Possessables() )));
	__Local__107 = TArray<FMovieScenePossessable> ();
	__Local__107.AddUninitialized(18);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__107.GetData(), 18);
	auto& __Local__108 = __Local__107[0];
	auto& __Local__109 = (*(AccessPrivateProperty<FGuid >(&(__Local__108), FMovieScenePossessable::__PPO__Guid() )));
	__Local__109 = FGuid(0x35B55384, 0x4B3A6FA2, 0x6F85EEAB, 0xD9E39BB0);
	auto& __Local__110 = (*(AccessPrivateProperty<FString >(&(__Local__108), FMovieScenePossessable::__PPO__Name() )));
	__Local__110 = FString(TEXT("Details-4"));
	auto& __Local__111 = (*(AccessPrivateProperty<UClass* >(&(__Local__108), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__111 = UImage::StaticClass();
	auto& __Local__112 = __Local__107[1];
	auto& __Local__113 = (*(AccessPrivateProperty<FGuid >(&(__Local__112), FMovieScenePossessable::__PPO__Guid() )));
	__Local__113 = FGuid(0x131C8D9C, 0x43268B80, 0x4570D48A, 0xD19B30A6);
	auto& __Local__114 = (*(AccessPrivateProperty<FString >(&(__Local__112), FMovieScenePossessable::__PPO__Name() )));
	__Local__114 = FString(TEXT("Details-1"));
	auto& __Local__115 = (*(AccessPrivateProperty<UClass* >(&(__Local__112), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__115 = UImage::StaticClass();
	auto& __Local__116 = __Local__107[2];
	auto& __Local__117 = (*(AccessPrivateProperty<FGuid >(&(__Local__116), FMovieScenePossessable::__PPO__Guid() )));
	__Local__117 = FGuid(0xA3D67332, 0x489F176F, 0x9E51C2A1, 0x7E9577F7);
	auto& __Local__118 = (*(AccessPrivateProperty<FString >(&(__Local__116), FMovieScenePossessable::__PPO__Name() )));
	__Local__118 = FString(TEXT("Details-2"));
	auto& __Local__119 = (*(AccessPrivateProperty<UClass* >(&(__Local__116), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__119 = UImage::StaticClass();
	auto& __Local__120 = __Local__107[3];
	auto& __Local__121 = (*(AccessPrivateProperty<FGuid >(&(__Local__120), FMovieScenePossessable::__PPO__Guid() )));
	__Local__121 = FGuid(0xA703D03F, 0x4C3C8ECE, 0x5B999692, 0x148FAFCF);
	auto& __Local__122 = (*(AccessPrivateProperty<FString >(&(__Local__120), FMovieScenePossessable::__PPO__Name() )));
	__Local__122 = FString(TEXT("Details-3"));
	auto& __Local__123 = (*(AccessPrivateProperty<UClass* >(&(__Local__120), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__123 = UImage::StaticClass();
	auto& __Local__124 = __Local__107[4];
	auto& __Local__125 = (*(AccessPrivateProperty<FGuid >(&(__Local__124), FMovieScenePossessable::__PPO__Guid() )));
	__Local__125 = FGuid(0x6C3E4987, 0x40DCB91F, 0x14A70CA2, 0x21B875BE);
	auto& __Local__126 = (*(AccessPrivateProperty<FString >(&(__Local__124), FMovieScenePossessable::__PPO__Name() )));
	__Local__126 = FString(TEXT("TransparentBG-Health"));
	auto& __Local__127 = (*(AccessPrivateProperty<UClass* >(&(__Local__124), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__127 = UImage::StaticClass();
	auto& __Local__128 = __Local__107[5];
	auto& __Local__129 = (*(AccessPrivateProperty<FGuid >(&(__Local__128), FMovieScenePossessable::__PPO__Guid() )));
	__Local__129 = FGuid(0x75BB6B58, 0x4E61B2DB, 0x126FB3A5, 0x80D778A5);
	auto& __Local__130 = (*(AccessPrivateProperty<FString >(&(__Local__128), FMovieScenePossessable::__PPO__Name() )));
	__Local__130 = FString(TEXT("TransparentBG-Gun"));
	auto& __Local__131 = (*(AccessPrivateProperty<UClass* >(&(__Local__128), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__131 = UImage::StaticClass();
	auto& __Local__132 = __Local__107[6];
	auto& __Local__133 = (*(AccessPrivateProperty<FGuid >(&(__Local__132), FMovieScenePossessable::__PPO__Guid() )));
	__Local__133 = FGuid(0xA7938A64, 0x4FB38EFC, 0xEBFAFD87, 0x61E4CBCD);
	auto& __Local__134 = (*(AccessPrivateProperty<FString >(&(__Local__132), FMovieScenePossessable::__PPO__Name() )));
	__Local__134 = FString(TEXT("TransparentBG-Ammo"));
	auto& __Local__135 = (*(AccessPrivateProperty<UClass* >(&(__Local__132), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__135 = UImage::StaticClass();
	auto& __Local__136 = __Local__107[7];
	auto& __Local__137 = (*(AccessPrivateProperty<FGuid >(&(__Local__136), FMovieScenePossessable::__PPO__Guid() )));
	__Local__137 = FGuid(0x43997E24, 0x426E0C7B, 0x74B44B9A, 0x5863473A);
	auto& __Local__138 = (*(AccessPrivateProperty<FString >(&(__Local__136), FMovieScenePossessable::__PPO__Name() )));
	__Local__138 = FString(TEXT("Gun"));
	auto& __Local__139 = (*(AccessPrivateProperty<UClass* >(&(__Local__136), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__139 = UImage::StaticClass();
	auto& __Local__140 = __Local__107[8];
	auto& __Local__141 = (*(AccessPrivateProperty<FGuid >(&(__Local__140), FMovieScenePossessable::__PPO__Guid() )));
	__Local__141 = FGuid(0x9193DCBC, 0x469C99B5, 0x61D768B0, 0x8DFC505F);
	auto& __Local__142 = (*(AccessPrivateProperty<FString >(&(__Local__140), FMovieScenePossessable::__PPO__Name() )));
	__Local__142 = FString(TEXT("OutOfAmmo"));
	auto& __Local__143 = (*(AccessPrivateProperty<UClass* >(&(__Local__140), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__143 = UTextBlock::StaticClass();
	auto& __Local__144 = __Local__107[9];
	auto& __Local__145 = (*(AccessPrivateProperty<FGuid >(&(__Local__144), FMovieScenePossessable::__PPO__Guid() )));
	__Local__145 = FGuid(0x77AA620F, 0x4029812B, 0x3AB146B1, 0xD5CD23D2);
	auto& __Local__146 = (*(AccessPrivateProperty<FString >(&(__Local__144), FMovieScenePossessable::__PPO__Name() )));
	__Local__146 = FString(TEXT("HealthBar_Empty"));
	auto& __Local__147 = (*(AccessPrivateProperty<UClass* >(&(__Local__144), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__147 = UProgressBar::StaticClass();
	auto& __Local__148 = __Local__107[10];
	auto& __Local__149 = (*(AccessPrivateProperty<FGuid >(&(__Local__148), FMovieScenePossessable::__PPO__Guid() )));
	__Local__149 = FGuid(0x40A62321, 0x48203DD2, 0xF46F85A5, 0x6D9C55F6);
	auto& __Local__150 = (*(AccessPrivateProperty<FString >(&(__Local__148), FMovieScenePossessable::__PPO__Name() )));
	__Local__150 = FString(TEXT("HealthBar_Full"));
	auto& __Local__151 = (*(AccessPrivateProperty<UClass* >(&(__Local__148), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__151 = UProgressBar::StaticClass();
	auto& __Local__152 = __Local__107[11];
	auto& __Local__153 = (*(AccessPrivateProperty<FGuid >(&(__Local__152), FMovieScenePossessable::__PPO__Guid() )));
	__Local__153 = FGuid(0x5315EE1F, 0x44939ED3, 0xEC2B5685, 0x22436179);
	auto& __Local__154 = (*(AccessPrivateProperty<FString >(&(__Local__152), FMovieScenePossessable::__PPO__Name() )));
	__Local__154 = FString(TEXT("AmmoInMag"));
	auto& __Local__155 = (*(AccessPrivateProperty<UClass* >(&(__Local__152), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__155 = UTextBlock::StaticClass();
	auto& __Local__156 = __Local__107[12];
	auto& __Local__157 = (*(AccessPrivateProperty<FGuid >(&(__Local__156), FMovieScenePossessable::__PPO__Guid() )));
	__Local__157 = FGuid(0x38A81112, 0x4BFE21C9, 0xCBB8B7AC, 0x9F979B50);
	auto& __Local__158 = (*(AccessPrivateProperty<FString >(&(__Local__156), FMovieScenePossessable::__PPO__Name() )));
	__Local__158 = FString(TEXT("Divider"));
	auto& __Local__159 = (*(AccessPrivateProperty<UClass* >(&(__Local__156), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__159 = UTextBlock::StaticClass();
	auto& __Local__160 = __Local__107[13];
	auto& __Local__161 = (*(AccessPrivateProperty<FGuid >(&(__Local__160), FMovieScenePossessable::__PPO__Guid() )));
	__Local__161 = FGuid(0xC14D5C5E, 0x40C6D99A, 0xFA9853A0, 0x8CEC36B2);
	auto& __Local__162 = (*(AccessPrivateProperty<FString >(&(__Local__160), FMovieScenePossessable::__PPO__Name() )));
	__Local__162 = FString(TEXT("AmmoReserved"));
	auto& __Local__163 = (*(AccessPrivateProperty<UClass* >(&(__Local__160), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__163 = UTextBlock::StaticClass();
	auto& __Local__164 = __Local__107[14];
	auto& __Local__165 = (*(AccessPrivateProperty<FGuid >(&(__Local__164), FMovieScenePossessable::__PPO__Guid() )));
	__Local__165 = FGuid(0xA1FCCF95, 0x4D8635ED, 0xAB96198E, 0xA89CB97C);
	auto& __Local__166 = (*(AccessPrivateProperty<FString >(&(__Local__164), FMovieScenePossessable::__PPO__Name() )));
	__Local__166 = FString(TEXT("ChapterText"));
	auto& __Local__167 = (*(AccessPrivateProperty<UClass* >(&(__Local__164), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__167 = UTextBlock::StaticClass();
	auto& __Local__168 = __Local__107[15];
	auto& __Local__169 = (*(AccessPrivateProperty<FGuid >(&(__Local__168), FMovieScenePossessable::__PPO__Guid() )));
	__Local__169 = FGuid(0x2AB85BC1, 0x4528D308, 0x2B6BBC81, 0x7CA72669);
	auto& __Local__170 = (*(AccessPrivateProperty<FString >(&(__Local__168), FMovieScenePossessable::__PPO__Name() )));
	__Local__170 = FString(TEXT("BgOfChapter"));
	auto& __Local__171 = (*(AccessPrivateProperty<UClass* >(&(__Local__168), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__171 = UImage::StaticClass();
	auto& __Local__172 = __Local__107[16];
	auto& __Local__173 = (*(AccessPrivateProperty<FGuid >(&(__Local__172), FMovieScenePossessable::__PPO__Guid() )));
	__Local__173 = FGuid(0x85A9F536, 0x46B7A620, 0x78E165BD, 0xA56631C4);
	auto& __Local__174 = (*(AccessPrivateProperty<FString >(&(__Local__172), FMovieScenePossessable::__PPO__Name() )));
	__Local__174 = FString(TEXT("ObjectiveText"));
	auto& __Local__175 = (*(AccessPrivateProperty<UClass* >(&(__Local__172), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__175 = UTextBlock::StaticClass();
	auto& __Local__176 = __Local__107[17];
	auto& __Local__177 = (*(AccessPrivateProperty<FGuid >(&(__Local__176), FMovieScenePossessable::__PPO__Guid() )));
	__Local__177 = FGuid(0xDDE95A0E, 0x4290F86F, 0xC332B88C, 0xADEAA7B5);
	auto& __Local__178 = (*(AccessPrivateProperty<FString >(&(__Local__176), FMovieScenePossessable::__PPO__Name() )));
	__Local__178 = FString(TEXT("BgOfObjective"));
	auto& __Local__179 = (*(AccessPrivateProperty<UClass* >(&(__Local__176), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__179 = UImage::StaticClass();
	auto& __Local__180 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__106), UMovieScene::__PPO__ObjectBindings() )));
	__Local__180 = TArray<FMovieSceneBinding> ();
	__Local__180.AddUninitialized(18);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__180.GetData(), 18);
	auto& __Local__181 = __Local__180[0];
	auto& __Local__182 = (*(AccessPrivateProperty<FGuid >(&(__Local__181), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__182 = FGuid(0x35B55384, 0x4B3A6FA2, 0x6F85EEAB, 0xD9E39BB0);
	auto& __Local__183 = (*(AccessPrivateProperty<FString >(&(__Local__181), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__183 = FString(TEXT("Details-4"));
	auto& __Local__184 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__181), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__184 = TArray<UMovieSceneTrack*> ();
	__Local__184.Reserve(1);
	auto __Local__185 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_0"));
	auto& __Local__186 = (*(AccessPrivateProperty<FName >((__Local__185), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__186 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__187 = (*(AccessPrivateProperty<FString >((__Local__185), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__187 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__188 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__185), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__188 = TArray<UMovieSceneSection*> ();
	__Local__188.Reserve(1);
	auto __Local__189 = NewObject<UMovieSceneColorSection>(__Local__185, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	auto& __Local__190 = (*(AccessPrivateProperty<FRichCurve >((__Local__189), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__190.Keys = TArray<FRichCurveKey> ();
	__Local__190.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__190.Keys.GetData(), 1);
	auto& __Local__191 = __Local__190.Keys[0];
	__Local__191.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__191.Time = 5.000000f;
	__Local__191.Value = 0.435000f;
	auto& __Local__192 = (*(AccessPrivateProperty<FRichCurve >((__Local__189), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__192.Keys = TArray<FRichCurveKey> ();
	__Local__192.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__192.Keys.GetData(), 1);
	auto& __Local__193 = __Local__192.Keys[0];
	__Local__193.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__193.Time = 5.000000f;
	__Local__193.Value = 0.435000f;
	auto& __Local__194 = (*(AccessPrivateProperty<FRichCurve >((__Local__189), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__194.Keys = TArray<FRichCurveKey> ();
	__Local__194.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__194.Keys.GetData(), 1);
	auto& __Local__195 = __Local__194.Keys[0];
	__Local__195.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__195.Time = 5.000000f;
	__Local__195.Value = 0.435000f;
	auto& __Local__196 = (*(AccessPrivateProperty<FRichCurve >((__Local__189), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__196.Keys = TArray<FRichCurveKey> ();
	__Local__196.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__196.Keys.GetData(), 1);
	auto& __Local__197 = __Local__196.Keys[0];
	__Local__197.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__197.Time = 5.000000f;
	__Local__197.Value = 0.332000f;
	auto& __Local__198 = (*(AccessPrivateProperty<float >((__Local__189), UMovieSceneSection::__PPO__EndTime() )));
	__Local__198 = 5.000000f;
	__Local__188.Add(__Local__189);
	__Local__184.Add(__Local__185);
	auto& __Local__199 = __Local__180[1];
	auto& __Local__200 = (*(AccessPrivateProperty<FGuid >(&(__Local__199), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__200 = FGuid(0x131C8D9C, 0x43268B80, 0x4570D48A, 0xD19B30A6);
	auto& __Local__201 = (*(AccessPrivateProperty<FString >(&(__Local__199), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__201 = FString(TEXT("Details-1"));
	auto& __Local__202 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__199), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__202 = TArray<UMovieSceneTrack*> ();
	__Local__202.Reserve(1);
	auto __Local__203 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_1"));
	auto& __Local__204 = (*(AccessPrivateProperty<FName >((__Local__203), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__204 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__205 = (*(AccessPrivateProperty<FString >((__Local__203), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__205 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__206 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__203), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__206 = TArray<UMovieSceneSection*> ();
	__Local__206.Reserve(1);
	auto __Local__207 = NewObject<UMovieSceneColorSection>(__Local__203, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_1"));
	auto& __Local__208 = (*(AccessPrivateProperty<FRichCurve >((__Local__207), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__208.Keys = TArray<FRichCurveKey> ();
	__Local__208.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__208.Keys.GetData(), 1);
	auto& __Local__209 = __Local__208.Keys[0];
	__Local__209.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__209.Time = 5.000000f;
	__Local__209.Value = 0.435000f;
	auto& __Local__210 = (*(AccessPrivateProperty<FRichCurve >((__Local__207), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__210.Keys = TArray<FRichCurveKey> ();
	__Local__210.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__210.Keys.GetData(), 1);
	auto& __Local__211 = __Local__210.Keys[0];
	__Local__211.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__211.Time = 5.000000f;
	__Local__211.Value = 0.435000f;
	auto& __Local__212 = (*(AccessPrivateProperty<FRichCurve >((__Local__207), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__212.Keys = TArray<FRichCurveKey> ();
	__Local__212.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__212.Keys.GetData(), 1);
	auto& __Local__213 = __Local__212.Keys[0];
	__Local__213.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__213.Time = 5.000000f;
	__Local__213.Value = 0.435000f;
	auto& __Local__214 = (*(AccessPrivateProperty<FRichCurve >((__Local__207), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__214.Keys = TArray<FRichCurveKey> ();
	__Local__214.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__214.Keys.GetData(), 1);
	auto& __Local__215 = __Local__214.Keys[0];
	__Local__215.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__215.Time = 5.000000f;
	__Local__215.Value = 0.332000f;
	auto& __Local__216 = (*(AccessPrivateProperty<float >((__Local__207), UMovieSceneSection::__PPO__EndTime() )));
	__Local__216 = 5.000000f;
	__Local__206.Add(__Local__207);
	__Local__202.Add(__Local__203);
	auto& __Local__217 = __Local__180[2];
	auto& __Local__218 = (*(AccessPrivateProperty<FGuid >(&(__Local__217), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__218 = FGuid(0xA3D67332, 0x489F176F, 0x9E51C2A1, 0x7E9577F7);
	auto& __Local__219 = (*(AccessPrivateProperty<FString >(&(__Local__217), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__219 = FString(TEXT("Details-2"));
	auto& __Local__220 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__217), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__220 = TArray<UMovieSceneTrack*> ();
	__Local__220.Reserve(1);
	auto __Local__221 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_2"));
	auto& __Local__222 = (*(AccessPrivateProperty<FName >((__Local__221), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__222 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__223 = (*(AccessPrivateProperty<FString >((__Local__221), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__223 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__224 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__221), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__224 = TArray<UMovieSceneSection*> ();
	__Local__224.Reserve(1);
	auto __Local__225 = NewObject<UMovieSceneColorSection>(__Local__221, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_2"));
	auto& __Local__226 = (*(AccessPrivateProperty<FRichCurve >((__Local__225), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__226.Keys = TArray<FRichCurveKey> ();
	__Local__226.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__226.Keys.GetData(), 1);
	auto& __Local__227 = __Local__226.Keys[0];
	__Local__227.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__227.Time = 5.000000f;
	__Local__227.Value = 0.435000f;
	auto& __Local__228 = (*(AccessPrivateProperty<FRichCurve >((__Local__225), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__228.Keys = TArray<FRichCurveKey> ();
	__Local__228.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__228.Keys.GetData(), 1);
	auto& __Local__229 = __Local__228.Keys[0];
	__Local__229.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__229.Time = 5.000000f;
	__Local__229.Value = 0.435000f;
	auto& __Local__230 = (*(AccessPrivateProperty<FRichCurve >((__Local__225), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__230.Keys = TArray<FRichCurveKey> ();
	__Local__230.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__230.Keys.GetData(), 1);
	auto& __Local__231 = __Local__230.Keys[0];
	__Local__231.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__231.Time = 5.000000f;
	__Local__231.Value = 0.435000f;
	auto& __Local__232 = (*(AccessPrivateProperty<FRichCurve >((__Local__225), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__232.Keys = TArray<FRichCurveKey> ();
	__Local__232.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__232.Keys.GetData(), 1);
	auto& __Local__233 = __Local__232.Keys[0];
	__Local__233.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__233.Time = 5.000000f;
	__Local__233.Value = 0.332000f;
	auto& __Local__234 = (*(AccessPrivateProperty<float >((__Local__225), UMovieSceneSection::__PPO__EndTime() )));
	__Local__234 = 5.000000f;
	__Local__224.Add(__Local__225);
	__Local__220.Add(__Local__221);
	auto& __Local__235 = __Local__180[3];
	auto& __Local__236 = (*(AccessPrivateProperty<FGuid >(&(__Local__235), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__236 = FGuid(0xA703D03F, 0x4C3C8ECE, 0x5B999692, 0x148FAFCF);
	auto& __Local__237 = (*(AccessPrivateProperty<FString >(&(__Local__235), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__237 = FString(TEXT("Details-3"));
	auto& __Local__238 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__235), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__238 = TArray<UMovieSceneTrack*> ();
	__Local__238.Reserve(1);
	auto __Local__239 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_3"));
	auto& __Local__240 = (*(AccessPrivateProperty<FName >((__Local__239), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__240 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__241 = (*(AccessPrivateProperty<FString >((__Local__239), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__241 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__242 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__239), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__242 = TArray<UMovieSceneSection*> ();
	__Local__242.Reserve(1);
	auto __Local__243 = NewObject<UMovieSceneColorSection>(__Local__239, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_3"));
	auto& __Local__244 = (*(AccessPrivateProperty<FRichCurve >((__Local__243), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__244.Keys = TArray<FRichCurveKey> ();
	__Local__244.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__244.Keys.GetData(), 1);
	auto& __Local__245 = __Local__244.Keys[0];
	__Local__245.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__245.Time = 5.000000f;
	__Local__245.Value = 0.435000f;
	auto& __Local__246 = (*(AccessPrivateProperty<FRichCurve >((__Local__243), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__246.Keys = TArray<FRichCurveKey> ();
	__Local__246.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__246.Keys.GetData(), 1);
	auto& __Local__247 = __Local__246.Keys[0];
	__Local__247.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__247.Time = 5.000000f;
	__Local__247.Value = 0.435000f;
	auto& __Local__248 = (*(AccessPrivateProperty<FRichCurve >((__Local__243), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__248.Keys = TArray<FRichCurveKey> ();
	__Local__248.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__248.Keys.GetData(), 1);
	auto& __Local__249 = __Local__248.Keys[0];
	__Local__249.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__249.Time = 5.000000f;
	__Local__249.Value = 0.435000f;
	auto& __Local__250 = (*(AccessPrivateProperty<FRichCurve >((__Local__243), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__250.Keys = TArray<FRichCurveKey> ();
	__Local__250.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__250.Keys.GetData(), 1);
	auto& __Local__251 = __Local__250.Keys[0];
	__Local__251.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__251.Time = 5.000000f;
	__Local__251.Value = 0.332000f;
	auto& __Local__252 = (*(AccessPrivateProperty<float >((__Local__243), UMovieSceneSection::__PPO__EndTime() )));
	__Local__252 = 5.000000f;
	__Local__242.Add(__Local__243);
	__Local__238.Add(__Local__239);
	auto& __Local__253 = __Local__180[4];
	auto& __Local__254 = (*(AccessPrivateProperty<FGuid >(&(__Local__253), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__254 = FGuid(0x6C3E4987, 0x40DCB91F, 0x14A70CA2, 0x21B875BE);
	auto& __Local__255 = (*(AccessPrivateProperty<FString >(&(__Local__253), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__255 = FString(TEXT("TransparentBG-Health"));
	auto& __Local__256 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__253), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__256 = TArray<UMovieSceneTrack*> ();
	__Local__256.Reserve(1);
	auto __Local__257 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_4"));
	auto& __Local__258 = (*(AccessPrivateProperty<FName >((__Local__257), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__258 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__259 = (*(AccessPrivateProperty<FString >((__Local__257), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__259 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__260 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__257), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__260 = TArray<UMovieSceneSection*> ();
	__Local__260.Reserve(1);
	auto __Local__261 = NewObject<UMovieSceneColorSection>(__Local__257, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_4"));
	auto& __Local__262 = (*(AccessPrivateProperty<FRichCurve >((__Local__261), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__262.Keys = TArray<FRichCurveKey> ();
	__Local__262.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__262.Keys.GetData(), 2);
	auto& __Local__263 = __Local__262.Keys[0];
	__Local__263.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__263.Value = 1.000000f;
	auto& __Local__264 = __Local__262.Keys[1];
	__Local__264.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__264.Time = 5.000000f;
	__Local__264.Value = 0.435000f;
	auto& __Local__265 = (*(AccessPrivateProperty<FRichCurve >((__Local__261), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__265.Keys = TArray<FRichCurveKey> ();
	__Local__265.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__265.Keys.GetData(), 2);
	auto& __Local__266 = __Local__265.Keys[0];
	__Local__266.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__266.Value = 1.000000f;
	auto& __Local__267 = __Local__265.Keys[1];
	__Local__267.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__267.Time = 5.000000f;
	__Local__267.Value = 0.435000f;
	auto& __Local__268 = (*(AccessPrivateProperty<FRichCurve >((__Local__261), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__268.Keys = TArray<FRichCurveKey> ();
	__Local__268.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__268.Keys.GetData(), 2);
	auto& __Local__269 = __Local__268.Keys[0];
	__Local__269.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__269.Value = 1.000000f;
	auto& __Local__270 = __Local__268.Keys[1];
	__Local__270.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__270.Time = 5.000000f;
	__Local__270.Value = 0.435000f;
	auto& __Local__271 = (*(AccessPrivateProperty<FRichCurve >((__Local__261), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__271.Keys = TArray<FRichCurveKey> ();
	__Local__271.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__271.Keys.GetData(), 2);
	auto& __Local__272 = __Local__271.Keys[0];
	__Local__272.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__273 = __Local__271.Keys[1];
	__Local__273.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__273.Time = 5.000000f;
	__Local__273.Value = 0.332000f;
	auto& __Local__274 = (*(AccessPrivateProperty<float >((__Local__261), UMovieSceneSection::__PPO__EndTime() )));
	__Local__274 = 5.000000f;
	__Local__260.Add(__Local__261);
	__Local__256.Add(__Local__257);
	auto& __Local__275 = __Local__180[5];
	auto& __Local__276 = (*(AccessPrivateProperty<FGuid >(&(__Local__275), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__276 = FGuid(0x75BB6B58, 0x4E61B2DB, 0x126FB3A5, 0x80D778A5);
	auto& __Local__277 = (*(AccessPrivateProperty<FString >(&(__Local__275), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__277 = FString(TEXT("TransparentBG-Gun"));
	auto& __Local__278 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__275), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__278 = TArray<UMovieSceneTrack*> ();
	__Local__278.Reserve(1);
	auto __Local__279 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_5"));
	auto& __Local__280 = (*(AccessPrivateProperty<FName >((__Local__279), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__280 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__281 = (*(AccessPrivateProperty<FString >((__Local__279), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__281 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__282 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__279), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__282 = TArray<UMovieSceneSection*> ();
	__Local__282.Reserve(1);
	auto __Local__283 = NewObject<UMovieSceneColorSection>(__Local__279, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_5"));
	auto& __Local__284 = (*(AccessPrivateProperty<FRichCurve >((__Local__283), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__284.Keys = TArray<FRichCurveKey> ();
	__Local__284.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__284.Keys.GetData(), 2);
	auto& __Local__285 = __Local__284.Keys[0];
	__Local__285.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__285.Value = 1.000000f;
	auto& __Local__286 = __Local__284.Keys[1];
	__Local__286.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__286.Time = 5.000000f;
	__Local__286.Value = 1.000000f;
	auto& __Local__287 = (*(AccessPrivateProperty<FRichCurve >((__Local__283), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__287.Keys = TArray<FRichCurveKey> ();
	__Local__287.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__287.Keys.GetData(), 2);
	auto& __Local__288 = __Local__287.Keys[0];
	__Local__288.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__288.Value = 1.000000f;
	auto& __Local__289 = __Local__287.Keys[1];
	__Local__289.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__289.Time = 5.000000f;
	__Local__289.Value = 1.000000f;
	auto& __Local__290 = (*(AccessPrivateProperty<FRichCurve >((__Local__283), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__290.Keys = TArray<FRichCurveKey> ();
	__Local__290.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__290.Keys.GetData(), 2);
	auto& __Local__291 = __Local__290.Keys[0];
	__Local__291.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__291.Value = 1.000000f;
	auto& __Local__292 = __Local__290.Keys[1];
	__Local__292.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__292.Time = 5.000000f;
	__Local__292.Value = 1.000000f;
	auto& __Local__293 = (*(AccessPrivateProperty<FRichCurve >((__Local__283), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__293.Keys = TArray<FRichCurveKey> ();
	__Local__293.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__293.Keys.GetData(), 2);
	auto& __Local__294 = __Local__293.Keys[0];
	__Local__294.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__295 = __Local__293.Keys[1];
	__Local__295.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__295.Time = 5.000000f;
	__Local__295.Value = 1.000000f;
	auto& __Local__296 = (*(AccessPrivateProperty<float >((__Local__283), UMovieSceneSection::__PPO__EndTime() )));
	__Local__296 = 5.000000f;
	__Local__282.Add(__Local__283);
	__Local__278.Add(__Local__279);
	auto& __Local__297 = __Local__180[6];
	auto& __Local__298 = (*(AccessPrivateProperty<FGuid >(&(__Local__297), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__298 = FGuid(0xA7938A64, 0x4FB38EFC, 0xEBFAFD87, 0x61E4CBCD);
	auto& __Local__299 = (*(AccessPrivateProperty<FString >(&(__Local__297), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__299 = FString(TEXT("TransparentBG-Ammo"));
	auto& __Local__300 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__297), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__300 = TArray<UMovieSceneTrack*> ();
	__Local__300.Reserve(1);
	auto __Local__301 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_6"));
	auto& __Local__302 = (*(AccessPrivateProperty<FName >((__Local__301), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__302 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__303 = (*(AccessPrivateProperty<FString >((__Local__301), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__303 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__304 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__301), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__304 = TArray<UMovieSceneSection*> ();
	__Local__304.Reserve(1);
	auto __Local__305 = NewObject<UMovieSceneColorSection>(__Local__301, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_6"));
	auto& __Local__306 = (*(AccessPrivateProperty<FRichCurve >((__Local__305), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__306.Keys = TArray<FRichCurveKey> ();
	__Local__306.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__306.Keys.GetData(), 2);
	auto& __Local__307 = __Local__306.Keys[0];
	__Local__307.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__307.Value = 1.000000f;
	auto& __Local__308 = __Local__306.Keys[1];
	__Local__308.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__308.Time = 5.000000f;
	__Local__308.Value = 1.000000f;
	auto& __Local__309 = (*(AccessPrivateProperty<FRichCurve >((__Local__305), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__309.Keys = TArray<FRichCurveKey> ();
	__Local__309.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__309.Keys.GetData(), 2);
	auto& __Local__310 = __Local__309.Keys[0];
	__Local__310.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__310.Value = 1.000000f;
	auto& __Local__311 = __Local__309.Keys[1];
	__Local__311.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__311.Time = 5.000000f;
	__Local__311.Value = 1.000000f;
	auto& __Local__312 = (*(AccessPrivateProperty<FRichCurve >((__Local__305), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__312.Keys = TArray<FRichCurveKey> ();
	__Local__312.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__312.Keys.GetData(), 2);
	auto& __Local__313 = __Local__312.Keys[0];
	__Local__313.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__313.Value = 1.000000f;
	auto& __Local__314 = __Local__312.Keys[1];
	__Local__314.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__314.Time = 5.000000f;
	__Local__314.Value = 1.000000f;
	auto& __Local__315 = (*(AccessPrivateProperty<FRichCurve >((__Local__305), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__315.Keys = TArray<FRichCurveKey> ();
	__Local__315.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__315.Keys.GetData(), 2);
	auto& __Local__316 = __Local__315.Keys[0];
	__Local__316.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__317 = __Local__315.Keys[1];
	__Local__317.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__317.Time = 5.000000f;
	__Local__317.Value = 1.000000f;
	auto& __Local__318 = (*(AccessPrivateProperty<float >((__Local__305), UMovieSceneSection::__PPO__EndTime() )));
	__Local__318 = 5.000000f;
	__Local__304.Add(__Local__305);
	__Local__300.Add(__Local__301);
	auto& __Local__319 = __Local__180[7];
	auto& __Local__320 = (*(AccessPrivateProperty<FGuid >(&(__Local__319), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__320 = FGuid(0x43997E24, 0x426E0C7B, 0x74B44B9A, 0x5863473A);
	auto& __Local__321 = (*(AccessPrivateProperty<FString >(&(__Local__319), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__321 = FString(TEXT("Gun"));
	auto& __Local__322 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__319), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__322 = TArray<UMovieSceneTrack*> ();
	__Local__322.Reserve(1);
	auto __Local__323 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_7"));
	auto& __Local__324 = (*(AccessPrivateProperty<FName >((__Local__323), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__324 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__325 = (*(AccessPrivateProperty<FString >((__Local__323), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__325 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__326 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__323), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__326 = TArray<UMovieSceneSection*> ();
	__Local__326.Reserve(1);
	auto __Local__327 = NewObject<UMovieSceneColorSection>(__Local__323, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_7"));
	auto& __Local__328 = (*(AccessPrivateProperty<FRichCurve >((__Local__327), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__328.Keys = TArray<FRichCurveKey> ();
	__Local__328.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__328.Keys.GetData(), 1);
	auto& __Local__329 = __Local__328.Keys[0];
	__Local__329.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__329.Time = 5.000000f;
	__Local__329.Value = 1.000000f;
	auto& __Local__330 = (*(AccessPrivateProperty<FRichCurve >((__Local__327), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__330.Keys = TArray<FRichCurveKey> ();
	__Local__330.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__330.Keys.GetData(), 1);
	auto& __Local__331 = __Local__330.Keys[0];
	__Local__331.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__331.Time = 5.000000f;
	__Local__331.Value = 1.000000f;
	auto& __Local__332 = (*(AccessPrivateProperty<FRichCurve >((__Local__327), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__332.Keys = TArray<FRichCurveKey> ();
	__Local__332.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__332.Keys.GetData(), 1);
	auto& __Local__333 = __Local__332.Keys[0];
	__Local__333.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__333.Time = 5.000000f;
	__Local__333.Value = 1.000000f;
	auto& __Local__334 = (*(AccessPrivateProperty<FRichCurve >((__Local__327), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__334.Keys = TArray<FRichCurveKey> ();
	__Local__334.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__334.Keys.GetData(), 1);
	auto& __Local__335 = __Local__334.Keys[0];
	__Local__335.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__335.Time = 5.000000f;
	__Local__335.Value = 1.000000f;
	auto& __Local__336 = (*(AccessPrivateProperty<float >((__Local__327), UMovieSceneSection::__PPO__EndTime() )));
	__Local__336 = 5.000000f;
	__Local__326.Add(__Local__327);
	__Local__322.Add(__Local__323);
	auto& __Local__337 = __Local__180[8];
	auto& __Local__338 = (*(AccessPrivateProperty<FGuid >(&(__Local__337), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__338 = FGuid(0x9193DCBC, 0x469C99B5, 0x61D768B0, 0x8DFC505F);
	auto& __Local__339 = (*(AccessPrivateProperty<FString >(&(__Local__337), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__339 = FString(TEXT("OutOfAmmo"));
	auto& __Local__340 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__337), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__340 = TArray<UMovieSceneTrack*> ();
	__Local__340.Reserve(1);
	auto __Local__341 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_12"));
	auto& __Local__342 = (*(AccessPrivateProperty<FName >((__Local__341), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__342 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__343 = (*(AccessPrivateProperty<FString >((__Local__341), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__343 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__344 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__341), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__344 = TArray<UMovieSceneSection*> ();
	__Local__344.Reserve(1);
	auto __Local__345 = NewObject<UMovieSceneColorSection>(__Local__341, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_12"));
	auto& __Local__346 = (*(AccessPrivateProperty<FRichCurve >((__Local__345), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__346.Keys = TArray<FRichCurveKey> ();
	__Local__346.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__346.Keys.GetData(), 2);
	auto& __Local__347 = __Local__346.Keys[0];
	__Local__347.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__347.Value = 1.000000f;
	auto& __Local__348 = __Local__346.Keys[1];
	__Local__348.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__348.Time = 5.000000f;
	__Local__348.Value = 1.000000f;
	auto& __Local__349 = (*(AccessPrivateProperty<FRichCurve >((__Local__345), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__349.Keys = TArray<FRichCurveKey> ();
	__Local__349.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__349.Keys.GetData(), 2);
	auto& __Local__350 = __Local__349.Keys[0];
	__Local__350.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__350.Value = 0.019754f;
	auto& __Local__351 = __Local__349.Keys[1];
	__Local__351.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__351.Time = 5.000000f;
	__Local__351.Value = 0.019754f;
	auto& __Local__352 = (*(AccessPrivateProperty<FRichCurve >((__Local__345), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__352.Keys = TArray<FRichCurveKey> ();
	__Local__352.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__352.Keys.GetData(), 2);
	auto& __Local__353 = __Local__352.Keys[0];
	__Local__353.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__354 = __Local__352.Keys[1];
	__Local__354.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__354.Time = 5.000000f;
	auto& __Local__355 = (*(AccessPrivateProperty<FRichCurve >((__Local__345), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__355.Keys = TArray<FRichCurveKey> ();
	__Local__355.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__355.Keys.GetData(), 2);
	auto& __Local__356 = __Local__355.Keys[0];
	__Local__356.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__357 = __Local__355.Keys[1];
	__Local__357.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__357.Time = 5.000000f;
	__Local__357.Value = 1.000000f;
	auto& __Local__358 = (*(AccessPrivateProperty<float >((__Local__345), UMovieSceneSection::__PPO__EndTime() )));
	__Local__358 = 5.000000f;
	__Local__344.Add(__Local__345);
	__Local__340.Add(__Local__341);
	auto& __Local__359 = __Local__180[9];
	auto& __Local__360 = (*(AccessPrivateProperty<FGuid >(&(__Local__359), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__360 = FGuid(0x77AA620F, 0x4029812B, 0x3AB146B1, 0xD5CD23D2);
	auto& __Local__361 = (*(AccessPrivateProperty<FString >(&(__Local__359), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__361 = FString(TEXT("HealthBar_Empty"));
	auto& __Local__362 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__359), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__362 = TArray<UMovieSceneTrack*> ();
	__Local__362.Reserve(1);
	auto __Local__363 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_16"));
	auto& __Local__364 = (*(AccessPrivateProperty<FName >((__Local__363), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__364 = FName(TEXT("FillColorAndOpacity"));
	auto& __Local__365 = (*(AccessPrivateProperty<FString >((__Local__363), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__365 = FString(TEXT("FillColorAndOpacity"));
	auto& __Local__366 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__363), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__366 = TArray<UMovieSceneSection*> ();
	__Local__366.Reserve(1);
	auto __Local__367 = NewObject<UMovieSceneColorSection>(__Local__363, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_16"));
	auto& __Local__368 = (*(AccessPrivateProperty<FRichCurve >((__Local__367), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__368.Keys = TArray<FRichCurveKey> ();
	__Local__368.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__368.Keys.GetData(), 1);
	auto& __Local__369 = __Local__368.Keys[0];
	__Local__369.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__369.Time = 5.000000f;
	__Local__369.Value = 0.032885f;
	auto& __Local__370 = (*(AccessPrivateProperty<FRichCurve >((__Local__367), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__370.Keys = TArray<FRichCurveKey> ();
	__Local__370.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__370.Keys.GetData(), 1);
	auto& __Local__371 = __Local__370.Keys[0];
	__Local__371.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__371.Time = 5.000000f;
	__Local__371.Value = 0.040000f;
	auto& __Local__372 = (*(AccessPrivateProperty<FRichCurve >((__Local__367), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__372.Keys = TArray<FRichCurveKey> ();
	__Local__372.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__372.Keys.GetData(), 1);
	auto& __Local__373 = __Local__372.Keys[0];
	__Local__373.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__373.Time = 5.000000f;
	__Local__373.Value = 0.029800f;
	auto& __Local__374 = (*(AccessPrivateProperty<FRichCurve >((__Local__367), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__374.Keys = TArray<FRichCurveKey> ();
	__Local__374.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__374.Keys.GetData(), 1);
	auto& __Local__375 = __Local__374.Keys[0];
	__Local__375.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__375.Time = 5.000000f;
	__Local__375.Value = 0.911000f;
	auto& __Local__376 = (*(AccessPrivateProperty<float >((__Local__367), UMovieSceneSection::__PPO__EndTime() )));
	__Local__376 = 5.000000f;
	__Local__366.Add(__Local__367);
	__Local__362.Add(__Local__363);
	auto& __Local__377 = __Local__180[10];
	auto& __Local__378 = (*(AccessPrivateProperty<FGuid >(&(__Local__377), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__378 = FGuid(0x40A62321, 0x48203DD2, 0xF46F85A5, 0x6D9C55F6);
	auto& __Local__379 = (*(AccessPrivateProperty<FString >(&(__Local__377), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__379 = FString(TEXT("HealthBar_Full"));
	auto& __Local__380 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__377), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__380 = TArray<UMovieSceneTrack*> ();
	__Local__380.Reserve(1);
	auto __Local__381 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_17"));
	auto& __Local__382 = (*(AccessPrivateProperty<FName >((__Local__381), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__382 = FName(TEXT("FillColorAndOpacity"));
	auto& __Local__383 = (*(AccessPrivateProperty<FString >((__Local__381), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__383 = FString(TEXT("FillColorAndOpacity"));
	auto& __Local__384 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__381), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__384 = TArray<UMovieSceneSection*> ();
	__Local__384.Reserve(1);
	auto __Local__385 = NewObject<UMovieSceneColorSection>(__Local__381, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_17"));
	auto& __Local__386 = (*(AccessPrivateProperty<FRichCurve >((__Local__385), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__386.Keys = TArray<FRichCurveKey> ();
	__Local__386.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__386.Keys.GetData(), 1);
	auto& __Local__387 = __Local__386.Keys[0];
	__Local__387.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__387.Time = 5.000000f;
	__Local__387.Value = 0.591130f;
	auto& __Local__388 = (*(AccessPrivateProperty<FRichCurve >((__Local__385), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__388.Keys = TArray<FRichCurveKey> ();
	__Local__388.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__388.Keys.GetData(), 1);
	auto& __Local__389 = __Local__388.Keys[0];
	__Local__389.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__389.Time = 5.000000f;
	__Local__389.Value = 0.710000f;
	auto& __Local__390 = (*(AccessPrivateProperty<FRichCurve >((__Local__385), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__390.Keys = TArray<FRichCurveKey> ();
	__Local__390.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__390.Keys.GetData(), 1);
	auto& __Local__391 = __Local__390.Keys[0];
	__Local__391.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__391.Time = 5.000000f;
	__Local__391.Value = 0.539600f;
	auto& __Local__392 = (*(AccessPrivateProperty<FRichCurve >((__Local__385), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__392.Keys = TArray<FRichCurveKey> ();
	__Local__392.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__392.Keys.GetData(), 1);
	auto& __Local__393 = __Local__392.Keys[0];
	__Local__393.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__393.Time = 5.000000f;
	__Local__393.Value = 1.000000f;
	auto& __Local__394 = (*(AccessPrivateProperty<float >((__Local__385), UMovieSceneSection::__PPO__EndTime() )));
	__Local__394 = 5.000000f;
	__Local__384.Add(__Local__385);
	__Local__380.Add(__Local__381);
	auto& __Local__395 = __Local__180[11];
	auto& __Local__396 = (*(AccessPrivateProperty<FGuid >(&(__Local__395), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__396 = FGuid(0x5315EE1F, 0x44939ED3, 0xEC2B5685, 0x22436179);
	auto& __Local__397 = (*(AccessPrivateProperty<FString >(&(__Local__395), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__397 = FString(TEXT("AmmoInMag"));
	auto& __Local__398 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__395), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__398 = TArray<UMovieSceneTrack*> ();
	__Local__398.Reserve(1);
	auto __Local__399 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_19"));
	auto& __Local__400 = (*(AccessPrivateProperty<FName >((__Local__399), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__400 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__401 = (*(AccessPrivateProperty<FString >((__Local__399), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__401 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__402 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__399), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__402 = TArray<UMovieSceneSection*> ();
	__Local__402.Reserve(1);
	auto __Local__403 = NewObject<UMovieSceneColorSection>(__Local__399, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_19"));
	auto& __Local__404 = (*(AccessPrivateProperty<FRichCurve >((__Local__403), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__404.Keys = TArray<FRichCurveKey> ();
	__Local__404.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__404.Keys.GetData(), 1);
	auto& __Local__405 = __Local__404.Keys[0];
	__Local__405.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__405.Time = 5.000000f;
	__Local__405.Value = 0.783538f;
	auto& __Local__406 = (*(AccessPrivateProperty<FRichCurve >((__Local__403), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__406.Keys = TArray<FRichCurveKey> ();
	__Local__406.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__406.Keys.GetData(), 1);
	auto& __Local__407 = __Local__406.Keys[0];
	__Local__407.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__407.Time = 5.000000f;
	__Local__407.Value = 0.765150f;
	auto& __Local__408 = (*(AccessPrivateProperty<FRichCurve >((__Local__403), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__408.Keys = TArray<FRichCurveKey> ();
	__Local__408.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__408.Keys.GetData(), 1);
	auto& __Local__409 = __Local__408.Keys[0];
	__Local__409.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__409.Time = 5.000000f;
	__Local__409.Value = 0.554860f;
	auto& __Local__410 = (*(AccessPrivateProperty<FRichCurve >((__Local__403), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__410.Keys = TArray<FRichCurveKey> ();
	__Local__410.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__410.Keys.GetData(), 1);
	auto& __Local__411 = __Local__410.Keys[0];
	__Local__411.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__411.Time = 5.000000f;
	__Local__411.Value = 0.969000f;
	auto& __Local__412 = (*(AccessPrivateProperty<float >((__Local__403), UMovieSceneSection::__PPO__EndTime() )));
	__Local__412 = 5.000000f;
	__Local__402.Add(__Local__403);
	__Local__398.Add(__Local__399);
	auto& __Local__413 = __Local__180[12];
	auto& __Local__414 = (*(AccessPrivateProperty<FGuid >(&(__Local__413), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__414 = FGuid(0x38A81112, 0x4BFE21C9, 0xCBB8B7AC, 0x9F979B50);
	auto& __Local__415 = (*(AccessPrivateProperty<FString >(&(__Local__413), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__415 = FString(TEXT("Divider"));
	auto& __Local__416 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__413), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__416 = TArray<UMovieSceneTrack*> ();
	__Local__416.Reserve(1);
	auto __Local__417 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_20"));
	auto& __Local__418 = (*(AccessPrivateProperty<FName >((__Local__417), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__418 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__419 = (*(AccessPrivateProperty<FString >((__Local__417), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__419 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__420 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__417), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__420 = TArray<UMovieSceneSection*> ();
	__Local__420.Reserve(1);
	auto __Local__421 = NewObject<UMovieSceneColorSection>(__Local__417, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_20"));
	auto& __Local__422 = (*(AccessPrivateProperty<FRichCurve >((__Local__421), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__422.Keys = TArray<FRichCurveKey> ();
	__Local__422.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__422.Keys.GetData(), 1);
	auto& __Local__423 = __Local__422.Keys[0];
	__Local__423.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__423.Time = 5.000000f;
	__Local__423.Value = 0.158961f;
	auto& __Local__424 = (*(AccessPrivateProperty<FRichCurve >((__Local__421), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__424.Keys = TArray<FRichCurveKey> ();
	__Local__424.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__424.Keys.GetData(), 1);
	auto& __Local__425 = __Local__424.Keys[0];
	__Local__425.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__425.Time = 5.000000f;
	__Local__425.Value = 0.462077f;
	auto& __Local__426 = (*(AccessPrivateProperty<FRichCurve >((__Local__421), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__426.Keys = TArray<FRichCurveKey> ();
	__Local__426.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__426.Keys.GetData(), 1);
	auto& __Local__427 = __Local__426.Keys[0];
	__Local__427.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__427.Time = 5.000000f;
	__Local__427.Value = 0.068478f;
	auto& __Local__428 = (*(AccessPrivateProperty<FRichCurve >((__Local__421), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__428.Keys = TArray<FRichCurveKey> ();
	__Local__428.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__428.Keys.GetData(), 1);
	auto& __Local__429 = __Local__428.Keys[0];
	__Local__429.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__429.Time = 5.000000f;
	__Local__429.Value = 1.000000f;
	auto& __Local__430 = (*(AccessPrivateProperty<float >((__Local__421), UMovieSceneSection::__PPO__EndTime() )));
	__Local__430 = 5.000000f;
	__Local__420.Add(__Local__421);
	__Local__416.Add(__Local__417);
	auto& __Local__431 = __Local__180[13];
	auto& __Local__432 = (*(AccessPrivateProperty<FGuid >(&(__Local__431), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__432 = FGuid(0xC14D5C5E, 0x40C6D99A, 0xFA9853A0, 0x8CEC36B2);
	auto& __Local__433 = (*(AccessPrivateProperty<FString >(&(__Local__431), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__433 = FString(TEXT("AmmoReserved"));
	auto& __Local__434 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__431), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__434 = TArray<UMovieSceneTrack*> ();
	__Local__434.Reserve(1);
	auto __Local__435 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_21"));
	auto& __Local__436 = (*(AccessPrivateProperty<FName >((__Local__435), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__436 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__437 = (*(AccessPrivateProperty<FString >((__Local__435), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__437 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__438 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__435), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__438 = TArray<UMovieSceneSection*> ();
	__Local__438.Reserve(1);
	auto __Local__439 = NewObject<UMovieSceneColorSection>(__Local__435, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_21"));
	auto& __Local__440 = (*(AccessPrivateProperty<FRichCurve >((__Local__439), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__440.Keys = TArray<FRichCurveKey> ();
	__Local__440.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__440.Keys.GetData(), 1);
	auto& __Local__441 = __Local__440.Keys[0];
	__Local__441.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__441.Time = 5.000000f;
	__Local__441.Value = 0.158961f;
	auto& __Local__442 = (*(AccessPrivateProperty<FRichCurve >((__Local__439), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__442.Keys = TArray<FRichCurveKey> ();
	__Local__442.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__442.Keys.GetData(), 1);
	auto& __Local__443 = __Local__442.Keys[0];
	__Local__443.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__443.Time = 5.000000f;
	__Local__443.Value = 0.462077f;
	auto& __Local__444 = (*(AccessPrivateProperty<FRichCurve >((__Local__439), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__444.Keys = TArray<FRichCurveKey> ();
	__Local__444.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__444.Keys.GetData(), 1);
	auto& __Local__445 = __Local__444.Keys[0];
	__Local__445.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__445.Time = 5.000000f;
	__Local__445.Value = 0.068478f;
	auto& __Local__446 = (*(AccessPrivateProperty<FRichCurve >((__Local__439), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__446.Keys = TArray<FRichCurveKey> ();
	__Local__446.Keys.AddUninitialized(1);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__446.Keys.GetData(), 1);
	auto& __Local__447 = __Local__446.Keys[0];
	__Local__447.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__447.Time = 5.000000f;
	__Local__447.Value = 1.000000f;
	auto& __Local__448 = (*(AccessPrivateProperty<float >((__Local__439), UMovieSceneSection::__PPO__EndTime() )));
	__Local__448 = 5.000000f;
	__Local__438.Add(__Local__439);
	__Local__434.Add(__Local__435);
	auto& __Local__449 = __Local__180[14];
	auto& __Local__450 = (*(AccessPrivateProperty<FGuid >(&(__Local__449), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__450 = FGuid(0xA1FCCF95, 0x4D8635ED, 0xAB96198E, 0xA89CB97C);
	auto& __Local__451 = (*(AccessPrivateProperty<FString >(&(__Local__449), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__451 = FString(TEXT("ChapterText"));
	auto& __Local__452 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__449), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__452 = TArray<UMovieSceneTrack*> ();
	__Local__452.Reserve(1);
	auto __Local__453 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_9"));
	auto& __Local__454 = (*(AccessPrivateProperty<FName >((__Local__453), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__454 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__455 = (*(AccessPrivateProperty<FString >((__Local__453), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__455 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__456 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__453), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__456 = TArray<UMovieSceneSection*> ();
	__Local__456.Reserve(1);
	auto __Local__457 = NewObject<UMovieSceneColorSection>(__Local__453, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	auto& __Local__458 = (*(AccessPrivateProperty<FRichCurve >((__Local__457), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__458.Keys = TArray<FRichCurveKey> ();
	__Local__458.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__458.Keys.GetData(), 2);
	auto& __Local__459 = __Local__458.Keys[0];
	__Local__459.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__459.Time = 5.000000f;
	__Local__459.Value = 0.650000f;
	auto& __Local__460 = __Local__458.Keys[1];
	__Local__460.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__460.Time = 9.000000f;
	__Local__460.Value = 0.650000f;
	auto& __Local__461 = (*(AccessPrivateProperty<FRichCurve >((__Local__457), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__461.Keys = TArray<FRichCurveKey> ();
	__Local__461.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__461.Keys.GetData(), 2);
	auto& __Local__462 = __Local__461.Keys[0];
	__Local__462.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__462.Time = 5.000000f;
	__Local__462.Value = 0.650000f;
	auto& __Local__463 = __Local__461.Keys[1];
	__Local__463.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__463.Time = 9.000000f;
	__Local__463.Value = 0.650000f;
	auto& __Local__464 = (*(AccessPrivateProperty<FRichCurve >((__Local__457), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__464.Keys = TArray<FRichCurveKey> ();
	__Local__464.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__464.Keys.GetData(), 2);
	auto& __Local__465 = __Local__464.Keys[0];
	__Local__465.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__465.Time = 5.000000f;
	__Local__465.Value = 0.650000f;
	auto& __Local__466 = __Local__464.Keys[1];
	__Local__466.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__466.Time = 9.000000f;
	__Local__466.Value = 0.650000f;
	auto& __Local__467 = (*(AccessPrivateProperty<FRichCurve >((__Local__457), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__467.Keys = TArray<FRichCurveKey> ();
	__Local__467.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__467.Keys.GetData(), 2);
	auto& __Local__468 = __Local__467.Keys[0];
	__Local__468.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__468.Time = 5.000000f;
	auto& __Local__469 = __Local__467.Keys[1];
	__Local__469.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__469.Time = 9.000000f;
	__Local__469.Value = 0.995000f;
	auto& __Local__470 = (*(AccessPrivateProperty<float >((__Local__457), UMovieSceneSection::__PPO__StartTime() )));
	__Local__470 = 5.000000f;
	auto& __Local__471 = (*(AccessPrivateProperty<float >((__Local__457), UMovieSceneSection::__PPO__EndTime() )));
	__Local__471 = 9.000000f;
	__Local__456.Add(__Local__457);
	__Local__452.Add(__Local__453);
	auto& __Local__472 = __Local__180[15];
	auto& __Local__473 = (*(AccessPrivateProperty<FGuid >(&(__Local__472), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__473 = FGuid(0x2AB85BC1, 0x4528D308, 0x2B6BBC81, 0x7CA72669);
	auto& __Local__474 = (*(AccessPrivateProperty<FString >(&(__Local__472), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__474 = FString(TEXT("BgOfChapter"));
	auto& __Local__475 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__472), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__475 = TArray<UMovieSceneTrack*> ();
	__Local__475.Reserve(1);
	auto __Local__476 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_10"));
	auto& __Local__477 = (*(AccessPrivateProperty<FName >((__Local__476), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__477 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__478 = (*(AccessPrivateProperty<FString >((__Local__476), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__478 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__479 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__476), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__479 = TArray<UMovieSceneSection*> ();
	__Local__479.Reserve(1);
	auto __Local__480 = NewObject<UMovieSceneColorSection>(__Local__476, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_1"));
	auto& __Local__481 = (*(AccessPrivateProperty<FRichCurve >((__Local__480), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__481.Keys = TArray<FRichCurveKey> ();
	__Local__481.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__481.Keys.GetData(), 2);
	auto& __Local__482 = __Local__481.Keys[0];
	__Local__482.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__482.Time = 5.000000f;
	__Local__482.Value = 1.000000f;
	auto& __Local__483 = __Local__481.Keys[1];
	__Local__483.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__483.Time = 9.000000f;
	__Local__483.Value = 1.000000f;
	auto& __Local__484 = (*(AccessPrivateProperty<FRichCurve >((__Local__480), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__484.Keys = TArray<FRichCurveKey> ();
	__Local__484.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__484.Keys.GetData(), 2);
	auto& __Local__485 = __Local__484.Keys[0];
	__Local__485.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__485.Time = 5.000000f;
	__Local__485.Value = 1.000000f;
	auto& __Local__486 = __Local__484.Keys[1];
	__Local__486.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__486.Time = 9.000000f;
	__Local__486.Value = 1.000000f;
	auto& __Local__487 = (*(AccessPrivateProperty<FRichCurve >((__Local__480), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__487.Keys = TArray<FRichCurveKey> ();
	__Local__487.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__487.Keys.GetData(), 2);
	auto& __Local__488 = __Local__487.Keys[0];
	__Local__488.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__488.Time = 5.000000f;
	__Local__488.Value = 1.000000f;
	auto& __Local__489 = __Local__487.Keys[1];
	__Local__489.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__489.Time = 9.000000f;
	__Local__489.Value = 1.000000f;
	auto& __Local__490 = (*(AccessPrivateProperty<FRichCurve >((__Local__480), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__490.Keys = TArray<FRichCurveKey> ();
	__Local__490.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__490.Keys.GetData(), 2);
	auto& __Local__491 = __Local__490.Keys[0];
	__Local__491.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__491.Time = 5.000000f;
	auto& __Local__492 = __Local__490.Keys[1];
	__Local__492.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__492.Time = 9.000000f;
	__Local__492.Value = 1.000000f;
	auto& __Local__493 = (*(AccessPrivateProperty<float >((__Local__480), UMovieSceneSection::__PPO__StartTime() )));
	__Local__493 = 5.000000f;
	auto& __Local__494 = (*(AccessPrivateProperty<float >((__Local__480), UMovieSceneSection::__PPO__EndTime() )));
	__Local__494 = 9.000000f;
	__Local__479.Add(__Local__480);
	__Local__475.Add(__Local__476);
	auto& __Local__495 = __Local__180[16];
	auto& __Local__496 = (*(AccessPrivateProperty<FGuid >(&(__Local__495), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__496 = FGuid(0x85A9F536, 0x46B7A620, 0x78E165BD, 0xA56631C4);
	auto& __Local__497 = (*(AccessPrivateProperty<FString >(&(__Local__495), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__497 = FString(TEXT("ObjectiveText"));
	auto& __Local__498 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__495), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__498 = TArray<UMovieSceneTrack*> ();
	__Local__498.Reserve(1);
	auto __Local__499 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_11"));
	auto& __Local__500 = (*(AccessPrivateProperty<FName >((__Local__499), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__500 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__501 = (*(AccessPrivateProperty<FString >((__Local__499), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__501 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__502 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__499), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__502 = TArray<UMovieSceneSection*> ();
	__Local__502.Reserve(1);
	auto __Local__503 = NewObject<UMovieSceneColorSection>(__Local__499, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_2"));
	auto& __Local__504 = (*(AccessPrivateProperty<FRichCurve >((__Local__503), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__504.Keys = TArray<FRichCurveKey> ();
	__Local__504.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__504.Keys.GetData(), 2);
	auto& __Local__505 = __Local__504.Keys[0];
	__Local__505.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__505.Time = 9.000000f;
	__Local__505.Value = 0.650000f;
	auto& __Local__506 = __Local__504.Keys[1];
	__Local__506.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__506.Time = 13.000000f;
	__Local__506.Value = 0.650000f;
	auto& __Local__507 = (*(AccessPrivateProperty<FRichCurve >((__Local__503), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__507.Keys = TArray<FRichCurveKey> ();
	__Local__507.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__507.Keys.GetData(), 2);
	auto& __Local__508 = __Local__507.Keys[0];
	__Local__508.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__508.Time = 9.000000f;
	__Local__508.Value = 0.650000f;
	auto& __Local__509 = __Local__507.Keys[1];
	__Local__509.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__509.Time = 13.000000f;
	__Local__509.Value = 0.650000f;
	auto& __Local__510 = (*(AccessPrivateProperty<FRichCurve >((__Local__503), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__510.Keys = TArray<FRichCurveKey> ();
	__Local__510.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__510.Keys.GetData(), 2);
	auto& __Local__511 = __Local__510.Keys[0];
	__Local__511.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__511.Time = 9.000000f;
	__Local__511.Value = 0.650000f;
	auto& __Local__512 = __Local__510.Keys[1];
	__Local__512.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__512.Time = 13.000000f;
	__Local__512.Value = 0.650000f;
	auto& __Local__513 = (*(AccessPrivateProperty<FRichCurve >((__Local__503), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__513.Keys = TArray<FRichCurveKey> ();
	__Local__513.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__513.Keys.GetData(), 2);
	auto& __Local__514 = __Local__513.Keys[0];
	__Local__514.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__514.Time = 9.000000f;
	auto& __Local__515 = __Local__513.Keys[1];
	__Local__515.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__515.Time = 13.000000f;
	__Local__515.Value = 0.995000f;
	auto& __Local__516 = (*(AccessPrivateProperty<float >((__Local__503), UMovieSceneSection::__PPO__StartTime() )));
	__Local__516 = 9.000000f;
	auto& __Local__517 = (*(AccessPrivateProperty<float >((__Local__503), UMovieSceneSection::__PPO__EndTime() )));
	__Local__517 = 13.000000f;
	__Local__502.Add(__Local__503);
	__Local__498.Add(__Local__499);
	auto& __Local__518 = __Local__180[17];
	auto& __Local__519 = (*(AccessPrivateProperty<FGuid >(&(__Local__518), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__519 = FGuid(0xDDE95A0E, 0x4290F86F, 0xC332B88C, 0xADEAA7B5);
	auto& __Local__520 = (*(AccessPrivateProperty<FString >(&(__Local__518), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__520 = FString(TEXT("BgOfObjective"));
	auto& __Local__521 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__518), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__521 = TArray<UMovieSceneTrack*> ();
	__Local__521.Reserve(1);
	auto __Local__522 = NewObject<UMovieSceneColorTrack>(__Local__106, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_13"));
	auto& __Local__523 = (*(AccessPrivateProperty<FName >((__Local__522), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__523 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__524 = (*(AccessPrivateProperty<FString >((__Local__522), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__524 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__525 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__522), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__525 = TArray<UMovieSceneSection*> ();
	__Local__525.Reserve(1);
	auto __Local__526 = NewObject<UMovieSceneColorSection>(__Local__522, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_3"));
	auto& __Local__527 = (*(AccessPrivateProperty<FRichCurve >((__Local__526), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__527.Keys = TArray<FRichCurveKey> ();
	__Local__527.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__527.Keys.GetData(), 2);
	auto& __Local__528 = __Local__527.Keys[0];
	__Local__528.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__528.Time = 9.000000f;
	__Local__528.Value = 1.000000f;
	auto& __Local__529 = __Local__527.Keys[1];
	__Local__529.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__529.Time = 13.000000f;
	__Local__529.Value = 1.000000f;
	auto& __Local__530 = (*(AccessPrivateProperty<FRichCurve >((__Local__526), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__530.Keys = TArray<FRichCurveKey> ();
	__Local__530.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__530.Keys.GetData(), 2);
	auto& __Local__531 = __Local__530.Keys[0];
	__Local__531.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__531.Time = 9.000000f;
	__Local__531.Value = 1.000000f;
	auto& __Local__532 = __Local__530.Keys[1];
	__Local__532.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__532.Time = 13.000000f;
	__Local__532.Value = 1.000000f;
	auto& __Local__533 = (*(AccessPrivateProperty<FRichCurve >((__Local__526), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__533.Keys = TArray<FRichCurveKey> ();
	__Local__533.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__533.Keys.GetData(), 2);
	auto& __Local__534 = __Local__533.Keys[0];
	__Local__534.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__534.Time = 9.000000f;
	__Local__534.Value = 1.000000f;
	auto& __Local__535 = __Local__533.Keys[1];
	__Local__535.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__535.Time = 13.000000f;
	__Local__535.Value = 1.000000f;
	auto& __Local__536 = (*(AccessPrivateProperty<FRichCurve >((__Local__526), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__536.Keys = TArray<FRichCurveKey> ();
	__Local__536.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__536.Keys.GetData(), 2);
	auto& __Local__537 = __Local__536.Keys[0];
	__Local__537.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__537.Time = 9.000000f;
	auto& __Local__538 = __Local__536.Keys[1];
	__Local__538.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__538.Time = 13.000000f;
	__Local__538.Value = 1.000000f;
	auto& __Local__539 = (*(AccessPrivateProperty<float >((__Local__526), UMovieSceneSection::__PPO__StartTime() )));
	__Local__539 = 9.000000f;
	auto& __Local__540 = (*(AccessPrivateProperty<float >((__Local__526), UMovieSceneSection::__PPO__EndTime() )));
	__Local__540 = 13.000000f;
	__Local__525.Add(__Local__526);
	__Local__521.Add(__Local__522);
	auto& __Local__541 = (*(AccessPrivateProperty<FFloatRange >((__Local__106), UMovieScene::__PPO__PlaybackRange() )));
	__Local__541 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(13.000000));
	__Local__1->MovieScene = __Local__106;
	__Local__1->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__1->AnimationBindings.AddUninitialized(18);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__1->AnimationBindings.GetData(), 18);
	auto& __Local__542 = __Local__1->AnimationBindings[0];
	__Local__542.WidgetName = FName(TEXT("Details-4"));
	__Local__542.AnimationGuid = FGuid(0x35B55384, 0x4B3A6FA2, 0x6F85EEAB, 0xD9E39BB0);
	auto& __Local__543 = __Local__1->AnimationBindings[1];
	__Local__543.WidgetName = FName(TEXT("Details-1"));
	__Local__543.AnimationGuid = FGuid(0x131C8D9C, 0x43268B80, 0x4570D48A, 0xD19B30A6);
	auto& __Local__544 = __Local__1->AnimationBindings[2];
	__Local__544.WidgetName = FName(TEXT("Details-2"));
	__Local__544.AnimationGuid = FGuid(0xA3D67332, 0x489F176F, 0x9E51C2A1, 0x7E9577F7);
	auto& __Local__545 = __Local__1->AnimationBindings[3];
	__Local__545.WidgetName = FName(TEXT("Details-3"));
	__Local__545.AnimationGuid = FGuid(0xA703D03F, 0x4C3C8ECE, 0x5B999692, 0x148FAFCF);
	auto& __Local__546 = __Local__1->AnimationBindings[4];
	__Local__546.WidgetName = FName(TEXT("TransparentBG-Health"));
	__Local__546.AnimationGuid = FGuid(0x6C3E4987, 0x40DCB91F, 0x14A70CA2, 0x21B875BE);
	auto& __Local__547 = __Local__1->AnimationBindings[5];
	__Local__547.WidgetName = FName(TEXT("TransparentBG-Gun"));
	__Local__547.AnimationGuid = FGuid(0x75BB6B58, 0x4E61B2DB, 0x126FB3A5, 0x80D778A5);
	auto& __Local__548 = __Local__1->AnimationBindings[6];
	__Local__548.WidgetName = FName(TEXT("TransparentBG-Ammo"));
	__Local__548.AnimationGuid = FGuid(0xA7938A64, 0x4FB38EFC, 0xEBFAFD87, 0x61E4CBCD);
	auto& __Local__549 = __Local__1->AnimationBindings[7];
	__Local__549.WidgetName = FName(TEXT("Gun"));
	__Local__549.AnimationGuid = FGuid(0x43997E24, 0x426E0C7B, 0x74B44B9A, 0x5863473A);
	auto& __Local__550 = __Local__1->AnimationBindings[8];
	__Local__550.WidgetName = FName(TEXT("OutOfAmmo"));
	__Local__550.AnimationGuid = FGuid(0x9193DCBC, 0x469C99B5, 0x61D768B0, 0x8DFC505F);
	auto& __Local__551 = __Local__1->AnimationBindings[9];
	__Local__551.WidgetName = FName(TEXT("HealthBar_Empty"));
	__Local__551.AnimationGuid = FGuid(0x77AA620F, 0x4029812B, 0x3AB146B1, 0xD5CD23D2);
	auto& __Local__552 = __Local__1->AnimationBindings[10];
	__Local__552.WidgetName = FName(TEXT("HealthBar_Full"));
	__Local__552.AnimationGuid = FGuid(0x40A62321, 0x48203DD2, 0xF46F85A5, 0x6D9C55F6);
	auto& __Local__553 = __Local__1->AnimationBindings[11];
	__Local__553.WidgetName = FName(TEXT("AmmoInMag"));
	__Local__553.AnimationGuid = FGuid(0x5315EE1F, 0x44939ED3, 0xEC2B5685, 0x22436179);
	auto& __Local__554 = __Local__1->AnimationBindings[12];
	__Local__554.WidgetName = FName(TEXT("Divider"));
	__Local__554.AnimationGuid = FGuid(0x38A81112, 0x4BFE21C9, 0xCBB8B7AC, 0x9F979B50);
	auto& __Local__555 = __Local__1->AnimationBindings[13];
	__Local__555.WidgetName = FName(TEXT("AmmoReserved"));
	__Local__555.AnimationGuid = FGuid(0xC14D5C5E, 0x40C6D99A, 0xFA9853A0, 0x8CEC36B2);
	auto& __Local__556 = __Local__1->AnimationBindings[14];
	__Local__556.WidgetName = FName(TEXT("ChapterText"));
	__Local__556.AnimationGuid = FGuid(0xA1FCCF95, 0x4D8635ED, 0xAB96198E, 0xA89CB97C);
	auto& __Local__557 = __Local__1->AnimationBindings[15];
	__Local__557.WidgetName = FName(TEXT("BgOfChapter"));
	__Local__557.AnimationGuid = FGuid(0x2AB85BC1, 0x4528D308, 0x2B6BBC81, 0x7CA72669);
	auto& __Local__558 = __Local__1->AnimationBindings[16];
	__Local__558.WidgetName = FName(TEXT("ObjectiveText"));
	__Local__558.AnimationGuid = FGuid(0x85A9F536, 0x46B7A620, 0x78E165BD, 0xA56631C4);
	auto& __Local__559 = __Local__1->AnimationBindings[17];
	__Local__559.WidgetName = FName(TEXT("BgOfObjective"));
	__Local__559.AnimationGuid = FGuid(0xDDE95A0E, 0x4290F86F, 0xC332B88C, 0xADEAA7B5);
	auto __Local__560 = NewObject<UMovieScene>(__Local__2, UMovieScene::StaticClass(), TEXT("TakingDamageAnim"));
	auto& __Local__561 = (*(AccessPrivateProperty<FFloatRange >((__Local__560), UMovieScene::__PPO__PlaybackRange() )));
	__Local__561 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(1.000000));
	__Local__2->MovieScene = __Local__560;
}
void UInGameUI_C__pf122804083::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__562;
	SlotNames.Append(__Local__562);
}
void UInGameUI_C__pf122804083::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__563;
	__Local__563.Reserve(2);
	__Local__563.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->MiscConvertedSubobjects[1]));
	__Local__563.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->MiscConvertedSubobjects[2]));
	TArray<FDelegateRuntimeBinding>  __Local__564;
	__Local__564.AddUninitialized(4);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__564.GetData(), 4);
	auto& __Local__565 = __Local__564[0];
	__Local__565.ObjectName = FString(TEXT("AmmoInMag"));
	__Local__565.PropertyName = FName(TEXT("Text"));
	__Local__565.FunctionName = FName(TEXT("Get_AmmoInMag_Text_0"));
	auto& __Local__566 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__565.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__566 = TArray<FPropertyPathSegment> ();
	__Local__566.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__566.GetData(), 1);
	auto& __Local__567 = __Local__566[0];
	__Local__567.Name = FName(TEXT("Get_AmmoInMag_Text_0"));
	auto& __Local__568 = __Local__564[1];
	__Local__568.ObjectName = FString(TEXT("AmmoReserved"));
	__Local__568.PropertyName = FName(TEXT("Text"));
	__Local__568.FunctionName = FName(TEXT("Get_AmmoReserved_Text_0"));
	auto& __Local__569 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__568.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__569 = TArray<FPropertyPathSegment> ();
	__Local__569.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__569.GetData(), 1);
	auto& __Local__570 = __Local__569[0];
	__Local__570.Name = FName(TEXT("Get_AmmoReserved_Text_0"));
	auto& __Local__571 = __Local__564[2];
	__Local__571.ObjectName = FString(TEXT("OutOfAmmo"));
	__Local__571.PropertyName = FName(TEXT("Visibility"));
	__Local__571.FunctionName = FName(TEXT("Get_OutOfAmmo_Visibility_0"));
	auto& __Local__572 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__571.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__572 = TArray<FPropertyPathSegment> ();
	__Local__572.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__572.GetData(), 1);
	auto& __Local__573 = __Local__572[0];
	__Local__573.Name = FName(TEXT("Get_OutOfAmmo_Visibility_0"));
	auto& __Local__574 = __Local__564[3];
	__Local__574.ObjectName = FString(TEXT("HealthBar_Full"));
	__Local__574.PropertyName = FName(TEXT("Percent"));
	__Local__574.FunctionName = FName(TEXT("Get_HealthBar_Full_Percent_0"));
	auto& __Local__575 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__574.SourcePath), FDynamicPropertyPath::__PPO__Segments() )));
	__Local__575 = TArray<FPropertyPathSegment> ();
	__Local__575.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__575.GetData(), 1);
	auto& __Local__576 = __Local__575[0];
	__Local__576.Name = FName(TEXT("Get_HealthBar_Full_Percent_0"));
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), true, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->MiscConvertedSubobjects[0]), __Local__563, __Local__564);
}
void UInGameUI_C__pf122804083::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UInGameUI_C__pf122804083::bpf__ExecuteUbergraph_InGameUI__pf_0(int32 bpp__EntryPoint__pf)
{
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf{};
	bool bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > StateStack;

	int32 CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( CurrentState )
		{
		case 1:
			{
				if(IsValid(bpv__ChapterText__pf))
				{
					bpv__ChapterText__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 2:
			{
				if(IsValid(bpv__Chapter2Text__pf))
				{
					bpv__Chapter2Text__pf->SetVisibility(ESlateVisibility::Visible);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				if(IsValid(bpv__ObjectiveTextxCH2__pfG))
				{
					bpv__ObjectiveTextxCH2__pfG->SetVisibility(ESlateVisibility::Visible);
				}
				CurrentState = 1;
				break;
			}
		case 4:
			{
				if(IsValid(bpv__ObjectiveText__pf))
				{
					bpv__ObjectiveText__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				if(IsValid(bpv__ObjectiveTextx02__pfG))
				{
					bpv__ObjectiveTextx02__pfG->SetVisibility(ESlateVisibility::Hidden);
				}
				if(IsValid(bpv__ObjectiveTextx03__pfG))
				{
					bpv__ObjectiveTextx03__pfG->SetVisibility(ESlateVisibility::Hidden);
				}
				CurrentState = 3;
				break;
			}
		case 5:
			{
				if(IsValid(bpv__InteractionBGx02__pfG))
				{
					bpv__InteractionBGx02__pfG->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 6:
			{
				if(IsValid(bpv__opengate__pf))
				{
					bpv__opengate__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 7:
			{
				if(IsValid(bpv__egate__pf))
				{
					bpv__egate__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 8:
			{
				if(IsValid(bpv__InteractionBGx02__pfG))
				{
					bpv__InteractionBGx02__pfG->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 9:
			{
				if(IsValid(bpv__opengate__pf))
				{
					bpv__opengate__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 10:
			{
				if(IsValid(bpv__egate__pf))
				{
					bpv__egate__pf->SetVisibility(ESlateVisibility::Visible);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 11:
			{
				bool  __Local__577 = false;
				if (!((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__Objectivex01__pfG) : (__Local__577)))
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 12:
			{
				if(IsValid(bpv__ObjectiveText__pf))
				{
					bpv__ObjectiveText__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 13:
			{
				if(IsValid(bpv__ObjectiveTextx02__pfG))
				{
					bpv__ObjectiveTextx02__pfG->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 14:
			{
				StateStack.Push(15);
				CurrentState = 17;
				break;
			}
		case 15:
			{
			}
		case 16:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					CurrentState = 21;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 17:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable2__pf)
				{
					CurrentState = 18;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable2__pf = true;
			}
		case 19:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 20:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 21:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 22:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 23:
			{
				bool  __Local__578 = false;
				if (!((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__Objectivex02__pfG) : (__Local__578)))
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 24:
			{
				if(IsValid(bpv__ObjectiveTextx02__pfG))
				{
					bpv__ObjectiveTextx02__pfG->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 25:
			{
				if(IsValid(bpv__ObjectiveTextx03__pfG))
				{
					bpv__ObjectiveTextx03__pfG->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 26:
			{
				StateStack.Push(27);
				CurrentState = 31;
				break;
			}
		case 27:
			{
			}
		case 28:
			{
				if (!b0l__Temp_bool_IsClosed_Variable2__pf)
				{
					CurrentState = 29;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 29:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
			}
		case 30:
			{
				UGameplayStatics::PlaySound2D(this, CastChecked<USoundBase>(CastChecked<UDynamicClass>(UInGameUI_C__pf122804083::StaticClass())->UsedAssets[7], ECastCheckedType::NullAllowed), 1.000000, 1.000000, 0.000000, nullptr);
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 31:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					CurrentState = 32;
					break;
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 33:
			{
				if (!false)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 34:
			{
				b0l__Temp_bool_IsClosed_Variable2__pf = true;
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 35:
			{
				bool  __Local__579 = false;
				if (!((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__CanPickUpx__pfzy) : (__Local__579)))
				{
					CurrentState = 39;
					break;
				}
			}
		case 36:
			{
				if(IsValid(bpv__interactionBG__pf))
				{
					bpv__interactionBG__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 37:
			{
				if(IsValid(bpv__Presspick__pf))
				{
					bpv__Presspick__pf->SetVisibility(ESlateVisibility::Visible);
				}
			}
		case 38:
			{
				if(IsValid(bpv__E__pf))
				{
					bpv__E__pf->SetVisibility(ESlateVisibility::Visible);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 39:
			{
				if(IsValid(bpv__interactionBG__pf))
				{
					bpv__interactionBG__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 40:
			{
				if(IsValid(bpv__Presspick__pf))
				{
					bpv__Presspick__pf->SetVisibility(ESlateVisibility::Hidden);
				}
			}
		case 41:
			{
				if(IsValid(bpv__E__pf))
				{
					bpv__E__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 42:
			{
				float  __Local__580 = 0.000000;
				bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf = UKismetMathLibrary::LessEqual_FloatFloat(((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__CharHealth__pf) : (__Local__580)), 0.300000);
				if (!bpv__CallFunc_LessEqual_FloatFloat_ReturnValue__pf)
				{
					CurrentState = 44;
					break;
				}
			}
		case 43:
			{
				if(IsValid(bpv__LowHealthScreen__pf))
				{
					bpv__LowHealthScreen__pf->SetVisibility(ESlateVisibility::Visible);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 44:
			{
				if(IsValid(bpv__LowHealthScreen__pf))
				{
					bpv__LowHealthScreen__pf->SetVisibility(ESlateVisibility::Hidden);
				}
				CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 45:
			{
				bool  __Local__581 = false;
				if (!((IsValid(b0l__K2Node_DynamicCast_AsMy_Char2__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char2__pf->bpv__OpenGatex__pfzy) : (__Local__581)))
				{
					CurrentState = 5;
					break;
				}
				CurrentState = 8;
				break;
			}
		case 46:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMy_Char2__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue2__pf);
				b0l__K2Node_DynamicCast_bSuccess2__pf = (b0l__K2Node_DynamicCast_AsMy_Char2__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess2__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 47:
			{
				StateStack.Push(48);
				CurrentState = 11;
				break;
			}
		case 48:
			{
				StateStack.Push(49);
				CurrentState = 23;
				break;
			}
		case 49:
			{
				StateStack.Push(50);
				CurrentState = 35;
				break;
			}
		case 50:
			{
				StateStack.Push(51);
				CurrentState = 42;
				break;
			}
		case 51:
			{
				StateStack.Push(52);
				CurrentState = 45;
				break;
			}
		case 52:
			{
			}
		case 53:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				b0l__K2Node_DynamicCast_AsMy_Char__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsMy_Char__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 54:
			{
				bool  __Local__582 = false;
				if (!((IsValid(b0l__K2Node_DynamicCast_AsMy_Char__pf)) ? (b0l__K2Node_DynamicCast_AsMy_Char__pf->bpv__Level02x__pfzy) : (__Local__582)))
				{
					CurrentState = (StateStack.Num() > 0) ? StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				CurrentState = 4;
				break;
			}
		case 56:
			{
				CurrentState = 46;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( CurrentState != -1 );
}
void UInGameUI_C__pf122804083::bpf__ExecuteUbergraph_InGameUI__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 57);
	// optimized KCST_UnconditionalGoto
	UUserWidget::PlayAnimation(bpv__FadeInxUI__pfG, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
	return; //KCST_EndOfThread
}
void UInGameUI_C__pf122804083::bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf)
{
	b0l__K2Node_Event_MyGeometry__pf = bpp__MyGeometry__pf;
	b0l__K2Node_Event_InDeltaTime__pf = bpp__InDeltaTime__pf;
	bpf__ExecuteUbergraph_InGameUI__pf_0(56);
}
void UInGameUI_C__pf122804083::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_InGameUI__pf_1(57);
}
FText  UInGameUI_C__pf122804083::bpf__Get_AmmoInMag_Text_0__pf()
{
	FText bpp__ReturnValue__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AMyChar_C__pf2980937819* bpv__K2Node_DynamicCast_AsMy_Char__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	FText bpv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	int32 CurrentState = 4;
	do
	{
		switch( CurrentState )
		{
		case 4:
			{
			}
		case 1:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpv__K2Node_DynamicCast_AsMy_Char__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsMy_Char__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				float  __Local__583 = 0.000000;
				bpv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(((IsValid(bpv__K2Node_DynamicCast_AsMy_Char__pf)) ? (bpv__K2Node_DynamicCast_AsMy_Char__pf->bpv__AmmoInGun__pf) : (__Local__583)), ERoundingMode::HalfToEven, true, 1, 324, 0, 3);
				bpp__ReturnValue__pf = bpv__CallFunc_Conv_FloatToText_ReturnValue__pf;
				CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__ReturnValue__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("0"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("422F3EDC45A7E85139E809BB8DD9AFED") /* Key */
	);
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
FText  UInGameUI_C__pf122804083::bpf__Get_AmmoReserved_Text_0__pf()
{
	FText bpp__ReturnValue__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AMyChar_C__pf2980937819* bpv__K2Node_DynamicCast_AsMy_Char__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	FText bpv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	int32 CurrentState = 4;
	do
	{
		switch( CurrentState )
		{
		case 4:
			{
			}
		case 1:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpv__K2Node_DynamicCast_AsMy_Char__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsMy_Char__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				float  __Local__584 = 0.000000;
				bpv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(((IsValid(bpv__K2Node_DynamicCast_AsMy_Char__pf)) ? (bpv__K2Node_DynamicCast_AsMy_Char__pf->bpv__AmmoReserved__pf) : (__Local__584)), ERoundingMode::HalfToEven, true, 1, 324, 0, 3);
				bpp__ReturnValue__pf = bpv__CallFunc_Conv_FloatToText_ReturnValue__pf;
				CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__ReturnValue__pf = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("000"), /* Literal Text */
	TEXT("[4F3D533C4F6231499FFBC1A5CF155091]"), /* Namespace */
	TEXT("73EF2B0049B7493E3D2C3C9DCD2FA11C") /* Key */
	);
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
ESlateVisibility  UInGameUI_C__pf122804083::bpf__Get_OutOfAmmo_Visibility_0__pf()
{
	ESlateVisibility bpp__ReturnValue__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AMyChar_C__pf2980937819* bpv__K2Node_DynamicCast_AsMy_Char__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	int32 CurrentState = 6;
	do
	{
		switch( CurrentState )
		{
		case 6:
			{
			}
		case 1:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpv__K2Node_DynamicCast_AsMy_Char__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsMy_Char__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 4;
					break;
				}
			}
		case 2:
			{
				bool  __Local__585 = false;
				if (!((IsValid(bpv__K2Node_DynamicCast_AsMy_Char__pf)) ? (bpv__K2Node_DynamicCast_AsMy_Char__pf->bpv__OutOfAmmo_Text__pf) : (__Local__585)))
				{
					CurrentState = 5;
					break;
				}
			}
		case 3:
			{
				bpp__ReturnValue__pf = ESlateVisibility::Visible;
				CurrentState = -1;
				break;
			}
		case 4:
			{
				bpp__ReturnValue__pf = ESlateVisibility::Hidden;
				CurrentState = -1;
				break;
			}
		case 5:
			{
				bpp__ReturnValue__pf = ESlateVisibility::Hidden;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
float  UInGameUI_C__pf122804083::bpf__Get_HealthBar_Full_Percent_0__pf()
{
	float bpp__ReturnValue__pf{};
	ACharacter* bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf{};
	AMyChar_C__pf2980937819* bpv__K2Node_DynamicCast_AsMy_Char__pf{};
	bool bpv__K2Node_DynamicCast_bSuccess__pf{};
	int32 CurrentState = 4;
	do
	{
		switch( CurrentState )
		{
		case 4:
			{
			}
		case 1:
			{
				bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf = UGameplayStatics::GetPlayerCharacter(this, 0);
				bpv__K2Node_DynamicCast_AsMy_Char__pf = Cast<AMyChar_C__pf2980937819>(bpv__CallFunc_GetPlayerCharacter_ReturnValue__pf);
				bpv__K2Node_DynamicCast_bSuccess__pf = (bpv__K2Node_DynamicCast_AsMy_Char__pf != nullptr);;
				if (!bpv__K2Node_DynamicCast_bSuccess__pf)
				{
					CurrentState = 3;
					break;
				}
			}
		case 2:
			{
				float  __Local__586 = 0.000000;
				bpp__ReturnValue__pf = ((IsValid(bpv__K2Node_DynamicCast_AsMy_Char__pf)) ? (bpv__K2Node_DynamicCast_AsMy_Char__pf->bpv__CharHealth__pf) : (__Local__586));
				CurrentState = -1;
				break;
			}
		case 3:
			{
				bpp__ReturnValue__pf = 0.000000;
				CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( CurrentState != -1 );
	return bpp__ReturnValue__pf;
}
void UInGameUI_C__pf122804083::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__587 = TEXT("/Game/Images");
	const TCHAR* __Local__588 = TEXT("/Game/UI/Hud");
	const TCHAR* __Local__589 = TEXT("/Game/Fonts");
	const TCHAR* __Local__590 = TEXT("/Game/Audio");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__587, TEXT("LowHealthScreen"), TEXT("LowHealthScreen"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__588, TEXT("handgun_img"), TEXT("handgun_img"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__588, TEXT("HealthBar_Full"), TEXT("HealthBar_Full"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__589, TEXT("ADOBESONGSTD-LIGHT"), TEXT("ADOBESONGSTD-LIGHT"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__587, TEXT("grunge-01-transparent"), TEXT("grunge-01-transparent"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__589, TEXT("corbel"), TEXT("corbel"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__589, TEXT("corbelb"), TEXT("corbelb"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__590, TEXT("Scary_impact"), TEXT("Scary_impact"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void UInGameUI_C__pf122804083::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void UInGameUI_C__pf122804083::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
	const TCHAR* __Local__591 = TEXT("/Engine/EngineFonts");
	const TCHAR* __Local__592 = TEXT("/Game/Weapons");
	const TCHAR* __Local__593 = TEXT("/Game/Images");
	const TCHAR* __Local__594 = TEXT("/Game/OldTrainFactory/Textures/build");
	const TCHAR* __Local__595 = TEXT("/Game/Audio");
	const TCHAR* __Local__596 = TEXT("/Game/UI/Hud");
	const TCHAR* __Local__597 = TEXT("/Game/Mannequin/Character/Mesh");
	const TCHAR* __Local__598 = TEXT("/Game/Audio/walking-sounds");
	const TCHAR* __Local__599 = TEXT("/Game/Mannequin/MovePistoAnimPack");
	const TCHAR* __Local__600 = TEXT("/Game/Mannequin/MovementAnimPack");
	const TCHAR* __Local__601 = TEXT("/Game/Mannequin/Animations");
	const TCHAR* __Local__602 = TEXT("/Game/Mannequin/Character");
	const TCHAR* __Local__603 = TEXT("/Game/Mannequin/AngrosEdit");
	const TCHAR* __Local__604 = TEXT("/Game/BulletVFX/Meshes");
	const TCHAR* __Local__605 = TEXT("/Game/Materials");
	const TCHAR* __Local__606 = TEXT("/Game/Audio/Zombie-Sounds");
	const TCHAR* __Local__607 = TEXT("/Game/Audio/SoundAttenuation");
	const TCHAR* __Local__608 = TEXT("/Game/Audio/injured-sounds");
	const TCHAR* __Local__609 = TEXT("/Game/ZombieMixamoModels/Defaults/ZombieCop");
	const TCHAR* __Local__610 = TEXT("/Game/ZombieMixamoModels/Animations/ZombieCop");
	const TCHAR* __Local__611 = TEXT("/Game/ZombieMixamoModels/BlendSpace");
	const TCHAR* __Local__612 = TEXT("/Game/Zombie_01/Animation/Root_Motion");
	const TCHAR* __Local__613 = TEXT("/Game/BulletVFX/Particles");
	const TCHAR* __Local__614 = TEXT("/Game/Mannequin");
	const TCHAR* __Local__615 = TEXT("/Game/Soldier_ru_01/Meshes");
	const TCHAR* __Local__616 = TEXT("/Game/UI/LoadingScreens");
	const TCHAR* __Local__617 = TEXT("/Game/UI");
	const TCHAR* __Local__618 = TEXT("/Game/Mannequin/AngrosEdit/InfectedBlueprints");
	const TCHAR* __Local__619 = TEXT("/Game/ZombieMixamoModels");
	const TCHAR* __Local__620 = TEXT("/Game/Blueprints");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__591, TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__592, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__593, TEXT("LoadingScreen-Town"), TEXT("LoadingScreen-Town"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__594, TEXT("Wood_01_D"), TEXT("Wood_01_D"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__595, TEXT("onClick"), TEXT("onClick"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__595, TEXT("hoverSound"), TEXT("hoverSound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__596, TEXT("Crosshair_HUD"), TEXT("Crosshair_HUD"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__596, TEXT("Crosshair_HUD_Shoot"), TEXT("Crosshair_HUD_Shoot"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__597, TEXT("UE4_Mannequin_Skeleton"), TEXT("UE4_Mannequin_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__598, TEXT("footsteps"), TEXT("footsteps"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__599, TEXT("Pistol_Reload"), TEXT("Pistol_Reload"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__599, TEXT("Pistol_ShootOnce_Montage"), TEXT("Pistol_ShootOnce_Montage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__600, TEXT("ConsoleUse_LH"), TEXT("ConsoleUse_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("CrouchLoop_new"), TEXT("CrouchLoop_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("Crouch2Idle_new"), TEXT("Crouch2Idle_new"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("PickUp_LH"), TEXT("PickUp_LH"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("Fists_Hit_Right"), TEXT("Fists_Hit_Right"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("Death_1"), TEXT("Death_1"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__599, TEXT("Pistol_SprintStart"), TEXT("Pistol_SprintStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("RunFwdStart"), TEXT("RunFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("JumpRun_LU_Land2Run"), TEXT("JumpRun_LU_Land2Run"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("JumpWalk_RU_Land2Walk"), TEXT("JumpWalk_RU_Land2Walk"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("JumpWalk_RU_Land"), TEXT("JumpWalk_RU_Land"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__601, TEXT("ThirdPersonJump_Loop"), TEXT("ThirdPersonJump_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__602, TEXT("WalkFwdStop_LU"), TEXT("WalkFwdStop_LU"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__602, TEXT("WalkFwdStart"), TEXT("WalkFwdStart"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__603, TEXT("PistolGunUp_IdleToRun"), TEXT("PistolGunUp_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__603, TEXT("Pistol_IdleToRun"), TEXT("Pistol_IdleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__600, TEXT("TurnLt90_Loop"), TEXT("TurnLt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__600, TEXT("TurnRt90_Loop"), TEXT("TurnRt90_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__603, TEXT("idleToRun"), TEXT("idleToRun"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
		FBlueprintDependencyData(__Local__603, TEXT("PistolAO"), TEXT("PistolAO"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__603, TEXT("LookAround_1D"), TEXT("LookAround_1D"), TEXT("/Script/Engine"), TEXT("AimOffsetBlendSpace1D")),
		FBlueprintDependencyData(__Local__604, TEXT("SM_BulletCasing"), TEXT("SM_BulletCasing"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
		FBlueprintDependencyData(__Local__605, TEXT("BulletPhysicalMaterial"), TEXT("BulletPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__606, TEXT("zombie-idle"), TEXT("zombie-idle"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__607, TEXT("3dSound"), TEXT("3dSound"), TEXT("/Script/Engine"), TEXT("SoundAttenuation")),
		FBlueprintDependencyData(__Local__606, TEXT("Zombie_-_attack"), TEXT("Zombie_-_attack"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__606, TEXT("zombie-dies"), TEXT("zombie-dies"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__606, TEXT("zombie-idle-2"), TEXT("zombie-idle-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__606, TEXT("zombie-idle-3"), TEXT("zombie-idle-3"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__606, TEXT("zombie-detect"), TEXT("zombie-detect"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__606, TEXT("zombie-detect-2"), TEXT("zombie-detect-2"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__606, TEXT("zombie-dies-02"), TEXT("zombie-dies-02"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__608, TEXT("injured-sounds"), TEXT("injured-sounds"), TEXT("/Script/Engine"), TEXT("SoundCue")),
		FBlueprintDependencyData(__Local__609, TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("Copzombie_L_Actisdato_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
		FBlueprintDependencyData(__Local__610, TEXT("zombie_biting"), TEXT("zombie_biting"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__610, TEXT("zombie_attack"), TEXT("zombie_attack"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__610, TEXT("zombie_dying"), TEXT("zombie_dying"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__611, TEXT("SimpleBlendSpace"), TEXT("SimpleBlendSpace"), TEXT("/Script/Engine"), TEXT("BlendSpace1D")),
		FBlueprintDependencyData(__Local__612, TEXT("Zombie_Chase_1_Full_Loop"), TEXT("Zombie_Chase_1_Full_Loop"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__609, TEXT("Copzombie_L_Actisdato"), TEXT("Copzombie_L_Actisdato"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__595, TEXT("Dramatic_Hit_Hard_10"), TEXT("Dramatic_Hit_Hard_10"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__595, TEXT("Death_Scream"), TEXT("Death_Scream"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__595, TEXT("LostIt"), TEXT("LostIt"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__599, TEXT("PistolEquipMontage"), TEXT("PistolEquipMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__595, TEXT("Player_Heal"), TEXT("Player_Heal"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__595, TEXT("SlowHeartbeat"), TEXT("SlowHeartbeat"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__599, TEXT("PistolEquipWeaponAnimMontage"), TEXT("PistolEquipWeaponAnimMontage"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__595, TEXT("Flashlight_ON"), TEXT("Flashlight_ON"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__595, TEXT("Flashlight_OFF"), TEXT("Flashlight_OFF"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__613, TEXT("VFX_Impact_Flesh"), TEXT("VFX_Impact_Flesh"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__613, TEXT("VFX_Impact_Concrete"), TEXT("VFX_Impact_Concrete"), TEXT("/Script/Engine"), TEXT("ParticleSystem")),
		FBlueprintDependencyData(__Local__595, TEXT("Trigger_click_empty"), TEXT("Trigger_click_empty"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__614, TEXT("Climbing"), TEXT("Climbing"), TEXT("/Script/Engine"), TEXT("AnimMontage")),
		FBlueprintDependencyData(__Local__602, TEXT("Pistol_Idle"), TEXT("Pistol_Idle"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
		FBlueprintDependencyData(__Local__615, TEXT("Soldier_ru_01"), TEXT("Soldier_ru_01"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
		FBlueprintDependencyData(__Local__605, TEXT("HumanPhysicalMaterial"), TEXT("HumanPhysicalMaterial"), TEXT("/Script/Engine"), TEXT("PhysicalMaterial")),
		FBlueprintDependencyData(__Local__603, TEXT("MyChar"), TEXT("MyChar_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__616, TEXT("LoadingScreen-WesternOak"), TEXT("LoadingScreen-WesternOak_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__617, TEXT("DeadScreen"), TEXT("DeadScreen_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__617, TEXT("BP_CrosshairShoot"), TEXT("BP_CrosshairShoot_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__617, TEXT("BP_Crosshair"), TEXT("BP_Crosshair_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__603, TEXT("MyAnimBP_Mannequin"), TEXT("MyAnimBP_Mannequin_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__592, TEXT("HandgunBullet"), TEXT("HandgunBullet_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__618, TEXT("Infected-AI"), TEXT("Infected-AI_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__619, TEXT("InfectedAnimBP"), TEXT("InfectedAnimBP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__620, TEXT("M9-w-Flashlight"), TEXT("M9-w-Flashlight_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
		FBlueprintDependencyData(__Local__620, TEXT("RunCamShake"), TEXT("RunCamShake_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
struct FRegisterHelper__UInGameUI_C__pf122804083
{
	FRegisterHelper__UInGameUI_C__pf122804083()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/UI/InGameUI"), &UInGameUI_C__pf122804083::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UInGameUI_C__pf122804083 Instance;
};
FRegisterHelper__UInGameUI_C__pf122804083 FRegisterHelper__UInGameUI_C__pf122804083::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
