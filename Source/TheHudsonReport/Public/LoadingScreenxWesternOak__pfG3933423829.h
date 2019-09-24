#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
class UImage;
class UCircularThrobber;
class AMyChar_C__pf2980937819;
#include "LoadingScreenxWesternOak__pfG3933423829.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/LoadingScreens/LoadingScreen-WesternOak.LoadingScreen-WesternOak_C", OverrideNativeName="LoadingScreen-WesternOak_C"))
class ULoadingScreenxWesternOak_C__pfG3933423829 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="CircularThrobber_641", Category="LoadingScreen-WesternOak", OverrideNativeName="CircularThrobber_641"))
	UCircularThrobber* bpv__CircularThrobber_641__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="CircularThrobber_642", Category="LoadingScreen-WesternOak", OverrideNativeName="CircularThrobber_642"))
	UCircularThrobber* bpv__CircularThrobber_642__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="Image_399", Category="LoadingScreen-WesternOak", OverrideNativeName="Image_399"))
	UImage* bpv__Image_399__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_MyGeometry"))
	FGeometry b0l__K2Node_Event_MyGeometry__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InDeltaTime"))
	float b0l__K2Node_Event_InDeltaTime__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Char"))
	AMyChar_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Char__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	ULoadingScreenxWesternOak_C__pfG3933423829(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_LoadingScreenxWesternOak__pfG_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCosmetic, meta=(Category="User Interface", ToolTip="Ticks this widget.  Override in derived classes, but always call the parent implementation.@param  MyGeometry The space allotted for this widget@param  InDeltaTime  Real time passed since last tick", CppFromBpEvent, OverrideNativeName="Tick"))
	void bpf__Tick__pf(FGeometry bpp__MyGeometry__pf, float bpp__InDeltaTime__pf);
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
