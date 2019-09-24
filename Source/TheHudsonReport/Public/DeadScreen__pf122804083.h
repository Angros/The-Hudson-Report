#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UAudioComponent;
class UButton;
class UImage;
class UWidgetAnimation;
#include "DeadScreen__pf122804083.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/DeadScreen.DeadScreen_C", OverrideNativeName="DeadScreen_C"))
class UDeadScreen_C__pf122804083 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(Category="Animations", OverrideNativeName="FadeIn"))
	UWidgetAnimation* bpv__FadeIn__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_336", Category="DeadScreen", OverrideNativeName="Image_336"))
	UImage* bpv__Image_336__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="No", Category="DeadScreen", OverrideNativeName="No"))
	UButton* bpv__No__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Yes", Category="DeadScreen", OverrideNativeName="Yes"))
	UButton* bpv__Yes__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Back to Main Menu?", Category="Default", OverrideNativeName="BackToMainMenu?"))
	bool bpv__BackToMainMenux__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Restart Level", Category="Default", OverrideNativeName="RestartLevel"))
	bool bpv__RestartLevel__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Death Screen Music", Category="Default", OverrideNativeName="DeathScreenMusic"))
	UAudioComponent* bpv__DeathScreenMusic__pf;
	UDeadScreen_C__pf122804083(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_DeadScreen__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DeadScreen__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_DeadScreen__pf_2(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__Yes_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"))
	virtual void bpf__BndEvt__No_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature__pf();
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
