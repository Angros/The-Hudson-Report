#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/UMG/Public/UMG.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
class UImage;
#include "BP_Crosshair__pf122804083.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/UI/BP_Crosshair.BP_Crosshair_C", OverrideNativeName="BP_Crosshair_C"))
class UBP_Crosshair_C__pf122804083 : public UUserWidget
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="CrosshairNormal", Category="BP_Crosshair", OverrideNativeName="CrosshairNormal"))
	UImage* bpv__CrosshairNormal__pf;
	UPROPERTY(BlueprintReadWrite, Transient, meta=(DisplayName="CrosshairShoot", Category="BP_Crosshair", OverrideNativeName="CrosshairShoot"))
	UImage* bpv__CrosshairShoot__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Shooting Active", Category="Default", OverrideNativeName="ShootingActive"))
	bool bpv__ShootingActive__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="New Var 0", Category="Default", OverrideNativeName="NewVar_0"))
	bool bpv__NewVar_0__pf;
	UBP_Crosshair_C__pf122804083(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_CrosshairShoot_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_CrosshairShoot_Visibility_0__pf();
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(Category, OverrideNativeName="Get_CrosshairNormal_Visibility_0"))
	virtual ESlateVisibility  bpf__Get_CrosshairNormal_Visibility_0__pf();
public:
	virtual void GetSlotNames(TArray<FName>& SlotNames) const override;
	virtual void PreSave(const class ITargetPlatform* TargetPlatform) override;
	virtual void InitializeNativeClassData() override;
};
