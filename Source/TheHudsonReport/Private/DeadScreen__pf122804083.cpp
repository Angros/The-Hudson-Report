#include "TheHudsonReport.h"
#include "DeadScreen__pf122804083.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
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
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneColorTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneColorSection.h"
#include "Runtime/MovieSceneTracks/Public/Tracks/MovieSceneBoolTrack.h"
#include "Runtime/MovieSceneTracks/Public/Sections/MovieSceneBoolSection.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "DeadScreen__pf122804083.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
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
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "DmgTypeBP_Environmental__pf2398200284.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
UDeadScreen_C__pf122804083::UDeadScreen_C__pf122804083(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UDeadScreen_C__pf122804083::StaticClass() == GetClass()))
	{
		UDeadScreen_C__pf122804083::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__BackToMainMenux__pfzy = false;
	bpv__RestartLevel__pf = false;
	bpv__DeathScreenMusic__pf = nullptr;
}
void UDeadScreen_C__pf122804083::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UDeadScreen_C__pf122804083::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	auto __Local__2 = NewObject<UWidgetAnimation>(InDynamicClass, UWidgetAnimation::StaticClass(), TEXT("FadeIn_INST"));
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__2);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(2);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 2);
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[0];
	__Local__3.ComponentPropertyName = FName(TEXT("Yes"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[1];
	__Local__4.ComponentPropertyName = FName(TEXT("No"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
	auto __Local__5 = NewObject<UCanvasPanel>(__Local__1, UCanvasPanel::StaticClass(), TEXT("CanvasPanel_0"));
	auto& __Local__6 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__5), UPanelWidget::__PPO__Slots() )));
	__Local__6 = TArray<UPanelSlot*> ();
	__Local__6.Reserve(4);
	auto __Local__7 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_6"));
	__Local__7->LayoutData.Offsets.Left = -16.000000f;
	__Local__7->LayoutData.Offsets.Right = 1952.000000f;
	__Local__7->LayoutData.Offsets.Bottom = 1098.000000f;
	__Local__7->Parent = __Local__5;
	auto __Local__8 = NewObject<UImage>(__Local__1, UImage::StaticClass(), TEXT("Image_336"));
	__Local__8->ColorAndOpacity = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__8->Slot = __Local__7;
	__Local__7->Content = __Local__8;
	__Local__6.Add(__Local__7);
	auto __Local__9 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_0"));
	__Local__9->LayoutData.Offsets.Left = -148.000000f;
	__Local__9->LayoutData.Offsets.Top = 272.000000f;
	__Local__9->LayoutData.Offsets.Right = 2237.000000f;
	__Local__9->LayoutData.Offsets.Bottom = 515.333313f;
	__Local__9->Parent = __Local__5;
	auto __Local__10 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_293"));
	__Local__10->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("YOU ARE DEAD"), /* Literal Text */
	TEXT("[6C3CC4444AB51364A35CE48988BF5C6E]"), /* Namespace */
	TEXT("38BDA8FF4E0F1BD1B82514AD02E62185") /* Key */
	);
	auto& __Local__11 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__10->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__11 = FLinearColor(1.000000, 0.000000, 0.000000, 0.000000);
	__Local__10->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__10->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__10->Font.Size = 134;
	auto& __Local__12 = (*(AccessPrivateProperty<TEnumAsByte<ETextJustify::Type> >((__Local__10), UTextLayoutWidget::__PPO__Justification() )));
	__Local__12 = ETextJustify::Type::Center;
	auto& __Local__13 = (*(AccessPrivateProperty<FMargin >((__Local__10), UTextLayoutWidget::__PPO__Margin() )));
	__Local__13.Top = -27.000000f;
	__Local__10->Slot = __Local__9;
	__Local__9->Content = __Local__10;
	__Local__6.Add(__Local__9);
	auto __Local__14 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_1"));
	__Local__14->LayoutData.Offsets.Left = 1300.000000f;
	__Local__14->LayoutData.Offsets.Top = 608.000000f;
	__Local__14->LayoutData.Offsets.Right = 356.000000f;
	__Local__14->LayoutData.Offsets.Bottom = 200.000000f;
	__Local__14->Parent = __Local__5;
	auto __Local__15 = NewObject<UHorizontalBox>(__Local__1, UHorizontalBox::StaticClass(), TEXT("HorizontalBox_0"));
	auto& __Local__16 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__15), UPanelWidget::__PPO__Slots() )));
	__Local__16 = TArray<UPanelSlot*> ();
	__Local__16.Reserve(2);
	auto __Local__17 = NewObject<UHorizontalBoxSlot>(__Local__15, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_0"));
	__Local__17->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__17->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__17->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__17->Parent = __Local__15;
	auto __Local__18 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("Yes"));
	auto& __Local__19 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__18->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__19 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__18->WidgetStyle.Hovered.ImageSize = FVector2D(1024.000000, 2048.000000);
	auto& __Local__20 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__20 = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__18->WidgetStyle.Pressed.ImageSize = FVector2D(2048.000000, 2048.000000);
	__Local__18->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__18->WidgetStyle.PressedPadding.Left = 15.000000f;
	auto& __Local__21 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__21 = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__22 = (*(AccessPrivateProperty<UObject* >(&(__Local__18->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__22 = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__18->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__23 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__18), UPanelWidget::__PPO__Slots() )));
	__Local__23 = TArray<UPanelSlot*> ();
	__Local__23.Reserve(1);
	auto __Local__24 = NewObject<UButtonSlot>(__Local__18, UButtonSlot::StaticClass(), TEXT("ButtonSlot_8"));
	__Local__24->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__24->Parent = __Local__18;
	auto __Local__25 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_784"));
	__Local__25->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("YES"), /* Literal Text */
	TEXT("[6C3CC4444AB51364A35CE48988BF5C6E]"), /* Namespace */
	TEXT("1F96054B4E7AAACF44AFFA934737A6DB") /* Key */
	);
	__Local__25->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__25->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__25->Font.Size = 27;
	auto& __Local__26 = (*(AccessPrivateProperty<FMargin >((__Local__25), UTextLayoutWidget::__PPO__Margin() )));
	__Local__26.Top = -25.000000f;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__23.Add(__Local__24);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__16.Add(__Local__17);
	auto __Local__27 = NewObject<UHorizontalBoxSlot>(__Local__15, UHorizontalBoxSlot::StaticClass(), TEXT("HorizontalBoxSlot_1"));
	__Local__27->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__27->HorizontalAlignment = EHorizontalAlignment::HAlign_Left;
	__Local__27->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__27->Parent = __Local__15;
	auto __Local__28 = NewObject<UButton>(__Local__1, UButton::StaticClass(), TEXT("No"));
	auto& __Local__29 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__28->WidgetStyle.Normal.TintColor), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__29 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__28->WidgetStyle.Hovered.ImageSize = FVector2D(1024.000000, 2048.000000);
	auto& __Local__30 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.Hovered), FSlateBrush::__PPO__ResourceObject() )));
	__Local__30 = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	__Local__28->WidgetStyle.Pressed.ImageSize = FVector2D(2048.000000, 2048.000000);
	__Local__28->WidgetStyle.Pressed.DrawAs = ESlateBrushDrawType::Type::NoDrawType;
	__Local__28->WidgetStyle.PressedPadding.Left = 15.000000f;
	auto& __Local__31 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.PressedSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__31 = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	auto& __Local__32 = (*(AccessPrivateProperty<UObject* >(&(__Local__28->WidgetStyle.HoveredSlateSound), FSlateSound::__PPO__ResourceObject() )));
	__Local__32 = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	__Local__28->ColorAndOpacity = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	auto& __Local__33 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__28), UPanelWidget::__PPO__Slots() )));
	__Local__33 = TArray<UPanelSlot*> ();
	__Local__33.Reserve(1);
	auto __Local__34 = NewObject<UButtonSlot>(__Local__28, UButtonSlot::StaticClass(), TEXT("ButtonSlot_8"));
	__Local__34->Parent = __Local__28;
	auto __Local__35 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_0"));
	__Local__35->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("NO"), /* Literal Text */
	TEXT("[6C3CC4444AB51364A35CE48988BF5C6E]"), /* Namespace */
	TEXT("794D75A64B2D37C8B5914C98F8AD5C3D") /* Key */
	);
	__Local__35->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__35->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__35->Font.Size = 27;
	auto& __Local__36 = (*(AccessPrivateProperty<FMargin >((__Local__35), UTextLayoutWidget::__PPO__Margin() )));
	__Local__36.Top = -25.000000f;
	__Local__35->Slot = __Local__34;
	__Local__34->Content = __Local__35;
	__Local__33.Add(__Local__34);
	__Local__28->Slot = __Local__27;
	__Local__27->Content = __Local__28;
	__Local__16.Add(__Local__27);
	__Local__15->Slot = __Local__14;
	__Local__14->Content = __Local__15;
	__Local__6.Add(__Local__14);
	auto __Local__37 = NewObject<UCanvasPanelSlot>(__Local__5, UCanvasPanelSlot::StaticClass(), TEXT("CanvasPanelSlot_2"));
	__Local__37->LayoutData.Offsets.Left = 932.000000f;
	__Local__37->LayoutData.Offsets.Top = 628.000000f;
	__Local__37->LayoutData.Offsets.Right = 339.000000f;
	__Local__37->LayoutData.Offsets.Bottom = 218.000000f;
	__Local__37->Parent = __Local__5;
	auto __Local__38 = NewObject<UTextBlock>(__Local__1, UTextBlock::StaticClass(), TEXT("TextBlock_50"));
	__Local__38->Text = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText(
	TEXT("CONTINUE?"), /* Literal Text */
	TEXT("[6C3CC4444AB51364A35CE48988BF5C6E]"), /* Namespace */
	TEXT("1CB3189E4D3FB68DE4B053BCE3AB48F4") /* Key */
	);
	auto& __Local__39 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__38->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__39 = FLinearColor(1.000000, 1.000000, 1.000000, 0.000000);
	__Local__38->Font.FontObject = CastChecked<UObject>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	__Local__38->Font.TypefaceFontName = FName(TEXT("Default"));
	__Local__38->Font.Size = 43;
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__6.Add(__Local__37);
	__Local__1->RootWidget = __Local__5;
	auto __Local__40 = NewObject<UMovieScene>(__Local__2, UMovieScene::StaticClass(), TEXT("FadeIn"));
	auto& __Local__41 = (*(AccessPrivateProperty<TArray<FMovieScenePossessable> >((__Local__40), UMovieScene::__PPO__Possessables() )));
	__Local__41 = TArray<FMovieScenePossessable> ();
	__Local__41.AddUninitialized(6);
	FMovieScenePossessable::StaticStruct()->InitializeStruct(__Local__41.GetData(), 6);
	auto& __Local__42 = __Local__41[0];
	auto& __Local__43 = (*(AccessPrivateProperty<FGuid >(&(__Local__42), FMovieScenePossessable::__PPO__Guid() )));
	__Local__43 = FGuid(0xB5583D07, 0x48118B76, 0xA6135194, 0xA8C97ABF);
	auto& __Local__44 = (*(AccessPrivateProperty<FString >(&(__Local__42), FMovieScenePossessable::__PPO__Name() )));
	__Local__44 = FString(TEXT("TextBlock_293"));
	auto& __Local__45 = (*(AccessPrivateProperty<UClass* >(&(__Local__42), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__45 = UTextBlock::StaticClass();
	auto& __Local__46 = __Local__41[1];
	auto& __Local__47 = (*(AccessPrivateProperty<FGuid >(&(__Local__46), FMovieScenePossessable::__PPO__Guid() )));
	__Local__47 = FGuid(0xE5766031, 0x4AF8FCBE, 0x67F27AB7, 0x5F8F083C);
	auto& __Local__48 = (*(AccessPrivateProperty<FString >(&(__Local__46), FMovieScenePossessable::__PPO__Name() )));
	__Local__48 = FString(TEXT("Image_336"));
	auto& __Local__49 = (*(AccessPrivateProperty<UClass* >(&(__Local__46), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__49 = UImage::StaticClass();
	auto& __Local__50 = __Local__41[2];
	auto& __Local__51 = (*(AccessPrivateProperty<FGuid >(&(__Local__50), FMovieScenePossessable::__PPO__Guid() )));
	__Local__51 = FGuid(0x17289B37, 0x472D9463, 0xC36EF380, 0x8F0FCB2F);
	auto& __Local__52 = (*(AccessPrivateProperty<FString >(&(__Local__50), FMovieScenePossessable::__PPO__Name() )));
	__Local__52 = FString(TEXT("TextBlock_50"));
	auto& __Local__53 = (*(AccessPrivateProperty<UClass* >(&(__Local__50), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__53 = UTextBlock::StaticClass();
	auto& __Local__54 = __Local__41[3];
	auto& __Local__55 = (*(AccessPrivateProperty<FGuid >(&(__Local__54), FMovieScenePossessable::__PPO__Guid() )));
	__Local__55 = FGuid(0x8BE7D7A5, 0x496788D5, 0x6D4ED1A3, 0xEA0B0580);
	auto& __Local__56 = (*(AccessPrivateProperty<FString >(&(__Local__54), FMovieScenePossessable::__PPO__Name() )));
	__Local__56 = FString(TEXT("HorizontalBox_0"));
	auto& __Local__57 = (*(AccessPrivateProperty<UClass* >(&(__Local__54), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__57 = UHorizontalBox::StaticClass();
	auto& __Local__58 = __Local__41[4];
	auto& __Local__59 = (*(AccessPrivateProperty<FGuid >(&(__Local__58), FMovieScenePossessable::__PPO__Guid() )));
	__Local__59 = FGuid(0x4ABB98D6, 0x4FED9612, 0xC8F671A8, 0x06A553C8);
	auto& __Local__60 = (*(AccessPrivateProperty<FString >(&(__Local__58), FMovieScenePossessable::__PPO__Name() )));
	__Local__60 = FString(TEXT("Yes"));
	auto& __Local__61 = (*(AccessPrivateProperty<UClass* >(&(__Local__58), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__61 = UButton::StaticClass();
	auto& __Local__62 = __Local__41[5];
	auto& __Local__63 = (*(AccessPrivateProperty<FGuid >(&(__Local__62), FMovieScenePossessable::__PPO__Guid() )));
	__Local__63 = FGuid(0x618D1670, 0x4ACFD59B, 0x850799BD, 0x8ED91D88);
	auto& __Local__64 = (*(AccessPrivateProperty<FString >(&(__Local__62), FMovieScenePossessable::__PPO__Name() )));
	__Local__64 = FString(TEXT("No"));
	auto& __Local__65 = (*(AccessPrivateProperty<UClass* >(&(__Local__62), FMovieScenePossessable::__PPO__PossessedObjectClass() )));
	__Local__65 = UButton::StaticClass();
	auto& __Local__66 = (*(AccessPrivateProperty<TArray<FMovieSceneBinding> >((__Local__40), UMovieScene::__PPO__ObjectBindings() )));
	__Local__66 = TArray<FMovieSceneBinding> ();
	__Local__66.AddUninitialized(6);
	FMovieSceneBinding::StaticStruct()->InitializeStruct(__Local__66.GetData(), 6);
	auto& __Local__67 = __Local__66[0];
	auto& __Local__68 = (*(AccessPrivateProperty<FGuid >(&(__Local__67), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__68 = FGuid(0xB5583D07, 0x48118B76, 0xA6135194, 0xA8C97ABF);
	auto& __Local__69 = (*(AccessPrivateProperty<FString >(&(__Local__67), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__69 = FString(TEXT("TextBlock_293"));
	auto& __Local__70 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__67), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__70 = TArray<UMovieSceneTrack*> ();
	__Local__70.Reserve(1);
	auto __Local__71 = NewObject<UMovieSceneColorTrack>(__Local__40, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_0"));
	auto& __Local__72 = (*(AccessPrivateProperty<FName >((__Local__71), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__72 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__73 = (*(AccessPrivateProperty<FString >((__Local__71), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__73 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__74 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__71), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__74 = TArray<UMovieSceneSection*> ();
	__Local__74.Reserve(1);
	auto __Local__75 = NewObject<UMovieSceneColorSection>(__Local__71, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	auto& __Local__76 = (*(AccessPrivateProperty<FRichCurve >((__Local__75), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__76.Keys = TArray<FRichCurveKey> ();
	__Local__76.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__76.Keys.GetData(), 2);
	auto& __Local__77 = __Local__76.Keys[0];
	__Local__77.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__77.Value = 1.000000f;
	auto& __Local__78 = __Local__76.Keys[1];
	__Local__78.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__78.Time = 5.000002f;
	__Local__78.Value = 1.000000f;
	auto& __Local__79 = (*(AccessPrivateProperty<FRichCurve >((__Local__75), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__79.Keys = TArray<FRichCurveKey> ();
	__Local__79.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__79.Keys.GetData(), 2);
	auto& __Local__80 = __Local__79.Keys[0];
	__Local__80.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__81 = __Local__79.Keys[1];
	__Local__81.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__81.Time = 5.000002f;
	auto& __Local__82 = (*(AccessPrivateProperty<FRichCurve >((__Local__75), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__82.Keys = TArray<FRichCurveKey> ();
	__Local__82.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__82.Keys.GetData(), 2);
	auto& __Local__83 = __Local__82.Keys[0];
	__Local__83.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__84 = __Local__82.Keys[1];
	__Local__84.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__84.Time = 5.000002f;
	auto& __Local__85 = (*(AccessPrivateProperty<FRichCurve >((__Local__75), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__85.Keys = TArray<FRichCurveKey> ();
	__Local__85.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__85.Keys.GetData(), 2);
	auto& __Local__86 = __Local__85.Keys[0];
	__Local__86.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__87 = __Local__85.Keys[1];
	__Local__87.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__87.Time = 5.000002f;
	__Local__87.Value = 1.000000f;
	auto& __Local__88 = (*(AccessPrivateProperty<float >((__Local__75), UMovieSceneSection::__PPO__EndTime() )));
	__Local__88 = 5.000002f;
	__Local__74.Add(__Local__75);
	__Local__70.Add(__Local__71);
	auto& __Local__89 = __Local__66[1];
	auto& __Local__90 = (*(AccessPrivateProperty<FGuid >(&(__Local__89), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__90 = FGuid(0xE5766031, 0x4AF8FCBE, 0x67F27AB7, 0x5F8F083C);
	auto& __Local__91 = (*(AccessPrivateProperty<FString >(&(__Local__89), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__91 = FString(TEXT("Image_336"));
	auto& __Local__92 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__89), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__92 = TArray<UMovieSceneTrack*> ();
	__Local__92.Reserve(1);
	auto __Local__93 = NewObject<UMovieSceneColorTrack>(__Local__40, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_5"));
	auto& __Local__94 = (*(AccessPrivateProperty<FName >((__Local__93), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__94 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__95 = (*(AccessPrivateProperty<FString >((__Local__93), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__95 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__96 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__93), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__96 = TArray<UMovieSceneSection*> ();
	__Local__96.Reserve(1);
	auto __Local__97 = NewObject<UMovieSceneColorSection>(__Local__93, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_5"));
	auto& __Local__98 = (*(AccessPrivateProperty<FRichCurve >((__Local__97), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__98.Keys = TArray<FRichCurveKey> ();
	__Local__98.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__98.Keys.GetData(), 2);
	auto& __Local__99 = __Local__98.Keys[0];
	__Local__99.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__100 = __Local__98.Keys[1];
	__Local__100.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__100.Time = 5.000002f;
	auto& __Local__101 = (*(AccessPrivateProperty<FRichCurve >((__Local__97), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__101.Keys = TArray<FRichCurveKey> ();
	__Local__101.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__101.Keys.GetData(), 2);
	auto& __Local__102 = __Local__101.Keys[0];
	__Local__102.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__103 = __Local__101.Keys[1];
	__Local__103.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__103.Time = 5.000002f;
	auto& __Local__104 = (*(AccessPrivateProperty<FRichCurve >((__Local__97), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__104.Keys = TArray<FRichCurveKey> ();
	__Local__104.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__104.Keys.GetData(), 2);
	auto& __Local__105 = __Local__104.Keys[0];
	__Local__105.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__106 = __Local__104.Keys[1];
	__Local__106.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__106.Time = 5.000002f;
	auto& __Local__107 = (*(AccessPrivateProperty<FRichCurve >((__Local__97), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__107.Keys = TArray<FRichCurveKey> ();
	__Local__107.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__107.Keys.GetData(), 2);
	auto& __Local__108 = __Local__107.Keys[0];
	__Local__108.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	auto& __Local__109 = __Local__107.Keys[1];
	__Local__109.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__109.Time = 5.000002f;
	__Local__109.Value = 1.000000f;
	auto& __Local__110 = (*(AccessPrivateProperty<float >((__Local__97), UMovieSceneSection::__PPO__EndTime() )));
	__Local__110 = 5.000002f;
	__Local__96.Add(__Local__97);
	__Local__92.Add(__Local__93);
	auto& __Local__111 = __Local__66[2];
	auto& __Local__112 = (*(AccessPrivateProperty<FGuid >(&(__Local__111), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__112 = FGuid(0x17289B37, 0x472D9463, 0xC36EF380, 0x8F0FCB2F);
	auto& __Local__113 = (*(AccessPrivateProperty<FString >(&(__Local__111), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__113 = FString(TEXT("TextBlock_50"));
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__111), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__114 = TArray<UMovieSceneTrack*> ();
	__Local__114.Reserve(1);
	auto __Local__115 = NewObject<UMovieSceneColorTrack>(__Local__40, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_6"));
	auto& __Local__116 = (*(AccessPrivateProperty<FName >((__Local__115), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__116 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__117 = (*(AccessPrivateProperty<FString >((__Local__115), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__117 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__118 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__115), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__118 = TArray<UMovieSceneSection*> ();
	__Local__118.Reserve(1);
	auto __Local__119 = NewObject<UMovieSceneColorSection>(__Local__115, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_0"));
	auto& __Local__120 = (*(AccessPrivateProperty<FRichCurve >((__Local__119), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__120.Keys = TArray<FRichCurveKey> ();
	__Local__120.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__120.Keys.GetData(), 2);
	auto& __Local__121 = __Local__120.Keys[0];
	__Local__121.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__121.Time = 0.500000f;
	__Local__121.Value = 1.000000f;
	auto& __Local__122 = __Local__120.Keys[1];
	__Local__122.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__122.Time = 4.499999f;
	__Local__122.Value = 1.000000f;
	auto& __Local__123 = (*(AccessPrivateProperty<FRichCurve >((__Local__119), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__123.Keys = TArray<FRichCurveKey> ();
	__Local__123.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__123.Keys.GetData(), 2);
	auto& __Local__124 = __Local__123.Keys[0];
	__Local__124.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__124.Time = 0.500000f;
	__Local__124.Value = 1.000000f;
	auto& __Local__125 = __Local__123.Keys[1];
	__Local__125.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__125.Time = 4.499999f;
	__Local__125.Value = 1.000000f;
	auto& __Local__126 = (*(AccessPrivateProperty<FRichCurve >((__Local__119), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__126.Keys = TArray<FRichCurveKey> ();
	__Local__126.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__126.Keys.GetData(), 2);
	auto& __Local__127 = __Local__126.Keys[0];
	__Local__127.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__127.Time = 0.500000f;
	__Local__127.Value = 1.000000f;
	auto& __Local__128 = __Local__126.Keys[1];
	__Local__128.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__128.Time = 4.499999f;
	__Local__128.Value = 1.000000f;
	auto& __Local__129 = (*(AccessPrivateProperty<FRichCurve >((__Local__119), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__129.Keys = TArray<FRichCurveKey> ();
	__Local__129.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__129.Keys.GetData(), 2);
	auto& __Local__130 = __Local__129.Keys[0];
	__Local__130.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__130.Time = 0.500000f;
	auto& __Local__131 = __Local__129.Keys[1];
	__Local__131.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__131.Time = 4.499999f;
	__Local__131.Value = 1.000000f;
	auto& __Local__132 = (*(AccessPrivateProperty<float >((__Local__119), UMovieSceneSection::__PPO__StartTime() )));
	__Local__132 = 0.500000f;
	auto& __Local__133 = (*(AccessPrivateProperty<float >((__Local__119), UMovieSceneSection::__PPO__EndTime() )));
	__Local__133 = 4.499999f;
	__Local__118.Add(__Local__119);
	__Local__114.Add(__Local__115);
	auto& __Local__134 = __Local__66[3];
	auto& __Local__135 = (*(AccessPrivateProperty<FGuid >(&(__Local__134), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__135 = FGuid(0x8BE7D7A5, 0x496788D5, 0x6D4ED1A3, 0xEA0B0580);
	auto& __Local__136 = (*(AccessPrivateProperty<FString >(&(__Local__134), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__136 = FString(TEXT("HorizontalBox_0"));
	auto& __Local__137 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__134), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__137 = TArray<UMovieSceneTrack*> ();
	__Local__137.Reserve(1);
	auto __Local__138 = NewObject<UMovieSceneBoolTrack>(__Local__40, UMovieSceneBoolTrack::StaticClass(), TEXT("MovieSceneBoolTrack_2"));
	auto& __Local__139 = (*(AccessPrivateProperty<FName >((__Local__138), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__139 = FName(TEXT("bIsEnabled"));
	auto& __Local__140 = (*(AccessPrivateProperty<FString >((__Local__138), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__140 = FString(TEXT("bIsEnabled"));
	auto& __Local__141 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__138), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__141 = TArray<UMovieSceneSection*> ();
	__Local__141.Reserve(1);
	auto __Local__142 = NewObject<UMovieSceneBoolSection>(__Local__138, UMovieSceneBoolSection::StaticClass(), TEXT("MovieSceneBoolSection_0"));
	auto& __Local__143 = (*(AccessPrivateProperty<FIntegralCurve >((__Local__142), UMovieSceneBoolSection::__PPO__BoolCurve() )));
	auto& __Local__144 = (*(AccessPrivateProperty<TArray<FIntegralKey> >(&(__Local__143), FIntegralCurve::__PPO__Keys() )));
	__Local__144 = TArray<FIntegralKey> ();
	__Local__144.AddUninitialized(2);
	FIntegralKey::StaticStruct()->InitializeStruct(__Local__144.GetData(), 2);
	auto& __Local__145 = __Local__144[0];
	__Local__145.Time = 0.500000f;
	auto& __Local__146 = __Local__144[1];
	__Local__146.Time = 4.750000f;
	__Local__146.Value = 1;
	auto& __Local__147 = (*(AccessPrivateProperty<float >((__Local__142), UMovieSceneSection::__PPO__StartTime() )));
	__Local__147 = 0.500000f;
	auto& __Local__148 = (*(AccessPrivateProperty<float >((__Local__142), UMovieSceneSection::__PPO__EndTime() )));
	__Local__148 = 5.000001f;
	static TWeakObjectPtr<UProperty> __Local__150{};
	const UProperty* __Local__149 = __Local__150.Get();
	if (nullptr == __Local__149)
	{
		__Local__149 = (UMovieSceneSection::StaticClass())->FindPropertyByName(FName(TEXT("bIsInfinite")));
		check(__Local__149);
		__Local__150 = __Local__149;
	}
	(((UBoolProperty*)__Local__149)->SetPropertyValue_InContainer((__Local__142), false, 0));
	__Local__141.Add(__Local__142);
	__Local__137.Add(__Local__138);
	auto& __Local__151 = __Local__66[4];
	auto& __Local__152 = (*(AccessPrivateProperty<FGuid >(&(__Local__151), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__152 = FGuid(0x4ABB98D6, 0x4FED9612, 0xC8F671A8, 0x06A553C8);
	auto& __Local__153 = (*(AccessPrivateProperty<FString >(&(__Local__151), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__153 = FString(TEXT("Yes"));
	auto& __Local__154 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__151), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__154 = TArray<UMovieSceneTrack*> ();
	__Local__154.Reserve(1);
	auto __Local__155 = NewObject<UMovieSceneColorTrack>(__Local__40, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_7"));
	auto& __Local__156 = (*(AccessPrivateProperty<FName >((__Local__155), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__156 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__157 = (*(AccessPrivateProperty<FString >((__Local__155), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__157 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__158 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__155), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__158 = TArray<UMovieSceneSection*> ();
	__Local__158.Reserve(1);
	auto __Local__159 = NewObject<UMovieSceneColorSection>(__Local__155, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_1"));
	auto& __Local__160 = (*(AccessPrivateProperty<FRichCurve >((__Local__159), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__160.Keys = TArray<FRichCurveKey> ();
	__Local__160.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__160.Keys.GetData(), 2);
	auto& __Local__161 = __Local__160.Keys[0];
	__Local__161.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__161.Time = 2.500000f;
	__Local__161.Value = 1.000000f;
	auto& __Local__162 = __Local__160.Keys[1];
	__Local__162.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__162.Time = 5.000001f;
	__Local__162.Value = 1.000000f;
	auto& __Local__163 = (*(AccessPrivateProperty<FRichCurve >((__Local__159), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__163.Keys = TArray<FRichCurveKey> ();
	__Local__163.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__163.Keys.GetData(), 2);
	auto& __Local__164 = __Local__163.Keys[0];
	__Local__164.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__164.Time = 2.500000f;
	__Local__164.Value = 1.000000f;
	auto& __Local__165 = __Local__163.Keys[1];
	__Local__165.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__165.Time = 5.000001f;
	__Local__165.Value = 1.000000f;
	auto& __Local__166 = (*(AccessPrivateProperty<FRichCurve >((__Local__159), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__166.Keys = TArray<FRichCurveKey> ();
	__Local__166.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__166.Keys.GetData(), 2);
	auto& __Local__167 = __Local__166.Keys[0];
	__Local__167.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__167.Time = 2.500000f;
	__Local__167.Value = 1.000000f;
	auto& __Local__168 = __Local__166.Keys[1];
	__Local__168.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__168.Time = 5.000001f;
	__Local__168.Value = 1.000000f;
	auto& __Local__169 = (*(AccessPrivateProperty<FRichCurve >((__Local__159), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__169.Keys = TArray<FRichCurveKey> ();
	__Local__169.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__169.Keys.GetData(), 2);
	auto& __Local__170 = __Local__169.Keys[0];
	__Local__170.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__170.Time = 2.500000f;
	auto& __Local__171 = __Local__169.Keys[1];
	__Local__171.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__171.Time = 5.000001f;
	__Local__171.Value = 1.000000f;
	auto& __Local__172 = (*(AccessPrivateProperty<float >((__Local__159), UMovieSceneSection::__PPO__StartTime() )));
	__Local__172 = 2.500000f;
	auto& __Local__173 = (*(AccessPrivateProperty<float >((__Local__159), UMovieSceneSection::__PPO__EndTime() )));
	__Local__173 = 5.000001f;
	__Local__158.Add(__Local__159);
	__Local__154.Add(__Local__155);
	auto& __Local__174 = __Local__66[5];
	auto& __Local__175 = (*(AccessPrivateProperty<FGuid >(&(__Local__174), FMovieSceneBinding::__PPO__ObjectGuid() )));
	__Local__175 = FGuid(0x618D1670, 0x4ACFD59B, 0x850799BD, 0x8ED91D88);
	auto& __Local__176 = (*(AccessPrivateProperty<FString >(&(__Local__174), FMovieSceneBinding::__PPO__BindingName() )));
	__Local__176 = FString(TEXT("No"));
	auto& __Local__177 = (*(AccessPrivateProperty<TArray<UMovieSceneTrack*> >(&(__Local__174), FMovieSceneBinding::__PPO__Tracks() )));
	__Local__177 = TArray<UMovieSceneTrack*> ();
	__Local__177.Reserve(1);
	auto __Local__178 = NewObject<UMovieSceneColorTrack>(__Local__40, UMovieSceneColorTrack::StaticClass(), TEXT("MovieSceneColorTrack_8"));
	auto& __Local__179 = (*(AccessPrivateProperty<FName >((__Local__178), UMovieScenePropertyTrack::__PPO__PropertyName() )));
	__Local__179 = FName(TEXT("ColorAndOpacity"));
	auto& __Local__180 = (*(AccessPrivateProperty<FString >((__Local__178), UMovieScenePropertyTrack::__PPO__PropertyPath() )));
	__Local__180 = FString(TEXT("ColorAndOpacity"));
	auto& __Local__181 = (*(AccessPrivateProperty<TArray<UMovieSceneSection*> >((__Local__178), UMovieScenePropertyTrack::__PPO__Sections() )));
	__Local__181 = TArray<UMovieSceneSection*> ();
	__Local__181.Reserve(1);
	auto __Local__182 = NewObject<UMovieSceneColorSection>(__Local__178, UMovieSceneColorSection::StaticClass(), TEXT("MovieSceneColorSection_2"));
	auto& __Local__183 = (*(AccessPrivateProperty<FRichCurve >((__Local__182), UMovieSceneColorSection::__PPO__RedCurve() )));
	__Local__183.Keys = TArray<FRichCurveKey> ();
	__Local__183.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__183.Keys.GetData(), 2);
	auto& __Local__184 = __Local__183.Keys[0];
	__Local__184.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__184.Time = 2.500000f;
	__Local__184.Value = 1.000000f;
	auto& __Local__185 = __Local__183.Keys[1];
	__Local__185.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__185.Time = 5.000001f;
	__Local__185.Value = 1.000000f;
	auto& __Local__186 = (*(AccessPrivateProperty<FRichCurve >((__Local__182), UMovieSceneColorSection::__PPO__GreenCurve() )));
	__Local__186.Keys = TArray<FRichCurveKey> ();
	__Local__186.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__186.Keys.GetData(), 2);
	auto& __Local__187 = __Local__186.Keys[0];
	__Local__187.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__187.Time = 2.500000f;
	__Local__187.Value = 1.000000f;
	auto& __Local__188 = __Local__186.Keys[1];
	__Local__188.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__188.Time = 5.000001f;
	__Local__188.Value = 1.000000f;
	auto& __Local__189 = (*(AccessPrivateProperty<FRichCurve >((__Local__182), UMovieSceneColorSection::__PPO__BlueCurve() )));
	__Local__189.Keys = TArray<FRichCurveKey> ();
	__Local__189.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__189.Keys.GetData(), 2);
	auto& __Local__190 = __Local__189.Keys[0];
	__Local__190.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__190.Time = 2.500000f;
	__Local__190.Value = 1.000000f;
	auto& __Local__191 = __Local__189.Keys[1];
	__Local__191.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__191.Time = 5.000001f;
	__Local__191.Value = 1.000000f;
	auto& __Local__192 = (*(AccessPrivateProperty<FRichCurve >((__Local__182), UMovieSceneColorSection::__PPO__AlphaCurve() )));
	__Local__192.Keys = TArray<FRichCurveKey> ();
	__Local__192.Keys.AddUninitialized(2);
	FRichCurveKey::StaticStruct()->InitializeStruct(__Local__192.Keys.GetData(), 2);
	auto& __Local__193 = __Local__192.Keys[0];
	__Local__193.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__193.Time = 2.500000f;
	auto& __Local__194 = __Local__192.Keys[1];
	__Local__194.InterpMode = ERichCurveInterpMode::RCIM_Cubic;
	__Local__194.Time = 5.000001f;
	__Local__194.Value = 1.000000f;
	auto& __Local__195 = (*(AccessPrivateProperty<float >((__Local__182), UMovieSceneSection::__PPO__StartTime() )));
	__Local__195 = 2.500000f;
	auto& __Local__196 = (*(AccessPrivateProperty<float >((__Local__182), UMovieSceneSection::__PPO__EndTime() )));
	__Local__196 = 5.000001f;
	__Local__181.Add(__Local__182);
	__Local__177.Add(__Local__178);
	auto& __Local__197 = (*(AccessPrivateProperty<FFloatRange >((__Local__40), UMovieScene::__PPO__PlaybackRange() )));
	__Local__197 = FFloatRange(FFloatRangeBound::Inclusive(0.000000), FFloatRangeBound::Inclusive(5.000002));
	__Local__2->MovieScene = __Local__40;
	__Local__2->AnimationBindings = TArray<FWidgetAnimationBinding> ();
	__Local__2->AnimationBindings.AddUninitialized(6);
	FWidgetAnimationBinding::StaticStruct()->InitializeStruct(__Local__2->AnimationBindings.GetData(), 6);
	auto& __Local__198 = __Local__2->AnimationBindings[0];
	__Local__198.WidgetName = FName(TEXT("TextBlock_293"));
	__Local__198.AnimationGuid = FGuid(0xB5583D07, 0x48118B76, 0xA6135194, 0xA8C97ABF);
	auto& __Local__199 = __Local__2->AnimationBindings[1];
	__Local__199.WidgetName = FName(TEXT("Image_336"));
	__Local__199.AnimationGuid = FGuid(0xE5766031, 0x4AF8FCBE, 0x67F27AB7, 0x5F8F083C);
	auto& __Local__200 = __Local__2->AnimationBindings[2];
	__Local__200.WidgetName = FName(TEXT("TextBlock_50"));
	__Local__200.AnimationGuid = FGuid(0x17289B37, 0x472D9463, 0xC36EF380, 0x8F0FCB2F);
	auto& __Local__201 = __Local__2->AnimationBindings[3];
	__Local__201.WidgetName = FName(TEXT("HorizontalBox_0"));
	__Local__201.AnimationGuid = FGuid(0x8BE7D7A5, 0x496788D5, 0x6D4ED1A3, 0xEA0B0580);
	auto& __Local__202 = __Local__2->AnimationBindings[4];
	__Local__202.WidgetName = FName(TEXT("Yes"));
	__Local__202.AnimationGuid = FGuid(0x4ABB98D6, 0x4FED9612, 0xC8F671A8, 0x06A553C8);
	auto& __Local__203 = __Local__2->AnimationBindings[5];
	__Local__203.WidgetName = FName(TEXT("No"));
	__Local__203.AnimationGuid = FGuid(0x618D1670, 0x4ACFD59B, 0x850799BD, 0x8ED91D88);
}
void UDeadScreen_C__pf122804083::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__204;
	SlotNames.Append(__Local__204);
}
void UDeadScreen_C__pf122804083::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__205;
	__Local__205.Reserve(1);
	__Local__205.Add(CastChecked<UWidgetAnimation>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->MiscConvertedSubobjects[1]));
	TArray<FDelegateRuntimeBinding>  __Local__206;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), false, false, CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(UDeadScreen_C__pf122804083::StaticClass())->MiscConvertedSubobjects[0]), __Local__205, __Local__206);
}
void UDeadScreen_C__pf122804083::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void UDeadScreen_C__pf122804083::bpf__ExecuteUbergraph_DeadScreen__pf_0(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	bpv__BackToMainMenux__pfzy = true;
	return; // KCST_GotoReturn
}
void UDeadScreen_C__pf122804083::bpf__ExecuteUbergraph_DeadScreen__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 2);
	bpv__RestartLevel__pf = true;
	return; // KCST_GotoReturn
}
void UDeadScreen_C__pf122804083::bpf__ExecuteUbergraph_DeadScreen__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 6);
	// optimized KCST_UnconditionalGoto
	UUserWidget::PlayAnimation(bpv__FadeIn__pf, 0.000000, 1, EUMGSequencePlayMode::Forward, 1.000000);
	return; // KCST_GotoReturn
}
void UDeadScreen_C__pf122804083::bpf__BndEvt__Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_DeadScreen__pf_1(2);
}
void UDeadScreen_C__pf122804083::bpf__BndEvt__No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_DeadScreen__pf_0(5);
}
void UDeadScreen_C__pf122804083::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_DeadScreen__pf_2(6);
}
void UDeadScreen_C__pf122804083::__StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const TCHAR* __Local__207 = TEXT("/Game/Fonts");
	const TCHAR* __Local__208 = TEXT("/Game/OldTrainFactory/Textures/build");
	const TCHAR* __Local__209 = TEXT("/Game/Audio");
	FBlueprintDependencyData LocAssets[] =
	{
		FBlueprintDependencyData(__Local__207, TEXT("ADOBESONGSTD-LIGHT"), TEXT("ADOBESONGSTD-LIGHT"), TEXT("/Script/Engine"), TEXT("Font")),
		FBlueprintDependencyData(__Local__208, TEXT("Wood_01_D"), TEXT("Wood_01_D"), TEXT("/Script/Engine"), TEXT("Texture2D")),
		FBlueprintDependencyData(__Local__209, TEXT("onClick"), TEXT("onClick"), TEXT("/Script/Engine"), TEXT("SoundWave")),
		FBlueprintDependencyData(__Local__209, TEXT("hoverSound"), TEXT("hoverSound"), TEXT("/Script/Engine"), TEXT("SoundWave")),
	};
	for(auto& LocAsset : LocAssets) { AssetsToLoad.Add(LocAsset); } 
}
void UDeadScreen_C__pf122804083::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
void UDeadScreen_C__pf122804083::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_CommonAssets(AssetsToLoad);
}
struct FRegisterHelper__UDeadScreen_C__pf122804083
{
	FRegisterHelper__UDeadScreen_C__pf122804083()
	{
		FConvertedBlueprintsDependencies::Get().RegisterClass(TEXT("/Game/UI/DeadScreen"), &UDeadScreen_C__pf122804083::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UDeadScreen_C__pf122804083 Instance;
};
FRegisterHelper__UDeadScreen_C__pf122804083 FRegisterHelper__UDeadScreen_C__pf122804083::Instance;
#ifdef _MSC_VER
#pragma warning (pop)
#endif
