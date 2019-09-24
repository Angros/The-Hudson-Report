#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
class UTextBlock;
class UImage;
class UProgressBar;
class UWidgetAnimation;
class AMyChar_C__pf2980937819;
#include "InGameUI__pf122804083.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/InGameUI.InGameUI_C", OverrideNativeName="InGameUI_C"))
class UInGameUI_C__pf122804083 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(Category="Animations", OverrideNativeName="TakingDamageAnim"))
	UWidgetAnimation* bpv__TakingDamageAnim__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(Category="Animations", OverrideNativeName="FadeIn-UI"))
	UWidgetAnimation* bpv__FadeInxUI__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="BgOfChapter", Category="InGameUI", OverrideNativeName="BgOfChapter"))
	UImage* bpv__BgOfChapter__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="BgOfObjective", Category="InGameUI", OverrideNativeName="BgOfObjective"))
	UImage* bpv__BgOfObjective__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Chapter2Text", Category="InGameUI", OverrideNativeName="Chapter2Text"))
	UTextBlock* bpv__Chapter2Text__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="ChapterText", Category="InGameUI", OverrideNativeName="ChapterText"))
	UTextBlock* bpv__ChapterText__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="DamageTaken", Category="InGameUI", OverrideNativeName="DamageTaken"))
	UImage* bpv__DamageTaken__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Details-1", Category="InGameUI", OverrideNativeName="Details-1"))
	UImage* bpv__Detailsx1__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Details-2", Category="InGameUI", OverrideNativeName="Details-2"))
	UImage* bpv__Detailsx2__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Details-3", Category="InGameUI", OverrideNativeName="Details-3"))
	UImage* bpv__Detailsx3__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Details-4", Category="InGameUI", OverrideNativeName="Details-4"))
	UImage* bpv__Detailsx4__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="E", Category="InGameUI", OverrideNativeName="E"))
	UTextBlock* bpv__E__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="e (gate)", Category="InGameUI", OverrideNativeName="egate"))
	UTextBlock* bpv__egate__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="fadein", Category="InGameUI", OverrideNativeName="fadein"))
	UImage* bpv__fadein__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Gun", Category="InGameUI", OverrideNativeName="Gun"))
	UImage* bpv__Gun__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="HealthBar_Empty", Category="InGameUI", OverrideNativeName="HealthBar_Empty"))
	UProgressBar* bpv__HealthBar_Empty__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="HealthBar_Full", Category="InGameUI", OverrideNativeName="HealthBar_Full"))
	UProgressBar* bpv__HealthBar_Full__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_245", Category="InGameUI", OverrideNativeName="Image_245"))
	UImage* bpv__Image_245__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="interactionBG", Category="InGameUI", OverrideNativeName="interactionBG"))
	UImage* bpv__interactionBG__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="InteractionBG-02", Category="InGameUI", OverrideNativeName="InteractionBG-02"))
	UImage* bpv__InteractionBGx02__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="InteractionBG-03", Category="InGameUI", OverrideNativeName="InteractionBG-03"))
	UImage* bpv__InteractionBGx03__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="LowHealthScreen", Category="InGameUI", OverrideNativeName="LowHealthScreen"))
	UImage* bpv__LowHealthScreen__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="ObjectiveText", Category="InGameUI", OverrideNativeName="ObjectiveText"))
	UTextBlock* bpv__ObjectiveText__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="ObjectiveText-02", Category="InGameUI", OverrideNativeName="ObjectiveText-02"))
	UTextBlock* bpv__ObjectiveTextx02__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="ObjectiveText-03", Category="InGameUI", OverrideNativeName="ObjectiveText-03"))
	UTextBlock* bpv__ObjectiveTextx03__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="ObjectiveText-CH2", Category="InGameUI", OverrideNativeName="ObjectiveText-CH2"))
	UTextBlock* bpv__ObjectiveTextxCH2__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="open gate", Category="InGameUI", OverrideNativeName="opengate"))
	UTextBlock* bpv__opengate__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="OutOfAmmo", Category="InGameUI", OverrideNativeName="OutOfAmmo"))
	UTextBlock* bpv__OutOfAmmo__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Press pick", Category="InGameUI", OverrideNativeName="Presspick"))
	UTextBlock* bpv__Presspick__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="press view", Category="InGameUI", OverrideNativeName="pressview"))
	UTextBlock* bpv__pressview__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="TransparentBG-Ammo", Category="InGameUI", OverrideNativeName="TransparentBG-Ammo"))
	UImage* bpv__TransparentBGxAmmo__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="TransparentBG-Gun", Category="InGameUI", OverrideNativeName="TransparentBG-Gun"))
	UImage* bpv__TransparentBGxGun__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="TransparentBG-Health", Category="InGameUI", OverrideNativeName="TransparentBG-Health"))
	UImage* bpv__TransparentBGxHealth__pfG;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="V", Category="InGameUI", OverrideNativeName="V"))
	UTextBlock* bpv__V__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Char"))
	AMyChar_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Char__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable2"))
	bool b0l__Temp_bool_IsClosed_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Char2"))
	AMyChar_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Char2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UInGameUI_C__pf122804083(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_InGameUI__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InGameUI__pf_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", Keywords="Begin Play", ToolTip="Called after the underlying slate widget is constructed.  Depending on how the slate object is usedthis event may be called multiple times due to adding and removing from the hierarchy.", CppFromBpEvent, OverrideNativeName="Construct"))
	void bpf__Construct__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_AmmoInMag_Text_0"))
	virtual FText  bpf__Get_AmmoInMag_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_AmmoReserved_Text_0"))
	virtual FText  bpf__Get_AmmoReserved_Text_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_OutOfAmmo_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_OutOfAmmo_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_HealthBar_Full_Percent_0"))
	virtual float  bpf__Get_HealthBar_Full_Percent_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
