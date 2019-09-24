#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UCameraComponent;
class USpringArmComponent;
class UStaticMeshComponent;
class UBoxComponent;
class AActor;
class UBP_Crosshair_C__pf122804083;
class UBP_CrosshairShoot_C__pf122804083;
class UInGameUI_C__pf122804083;
class UAudioComponent;
class UDeadScreen_C__pf122804083;
class ULoadingScreenxWesternOak_C__pfG3933423829;
#include "ToCxx__pfII2980937819.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mannequin/AngrosEdit/ToC++.ToC++_C", OverrideNativeName="ToC++_C"))
class AToCxx_C__pfII2980937819 : public ACharacter
{
public:
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="ShoulderAimCam"))
	UCameraComponent* bpv__ShoulderAimCam__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="AimingSpringArm"))
	USpringArmComponent* bpv__AimingSpringArm__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="M9-w-Flashlight"))
	UStaticMeshComponent* bpv__M9xwxFlashlight__pfGG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="BoxClimb"))
	UBoxComponent* bpv__BoxClimb__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Camera"))
	UCameraComponent* bpv__Camera__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="MainSpringArm"))
	USpringArmComponent* bpv__MainSpringArm__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Look Up Rate", Category="Default", OverrideNativeName="BaseLookUpRate"))
	float bpv__BaseLookUpRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Base Turn Rate", Category="Default", OverrideNativeName="BaseTurnRate"))
	float bpv__BaseTurnRate__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Turn Right", Category="Default", OverrideNativeName="TurnRight"))
	bool bpv__TurnRight__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Turn Left", Category="Default", OverrideNativeName="TurnLeft"))
	bool bpv__TurnLeft__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Pitch", Category="Default", OverrideNativeName="Pitch"))
	float bpv__Pitch__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Field Of View", Category="Default", OverrideNativeName="FieldOfView"))
	float bpv__FieldOfView__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Has Weapon Attached", Category="Default", OverrideNativeName="HasWeaponAttached"))
	bool bpv__HasWeaponAttached__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Has Weapon Sheathed", Category="Default", OverrideNativeName="HasWeaponSheathed"))
	bool bpv__HasWeaponSheathed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Current Weapon", Category="Weapon", OverrideNativeName="CurrentWeapon"))
	AActor* bpv__CurrentWeapon__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Holstered Weapon", Category="Weapon", OverrideNativeName="HolsteredWeapon"))
	AActor* bpv__HolsteredWeapon__pf;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Has Weapon in Hand", Category="Default", OverrideNativeName="HasWeaponInHand"))
	bool bpv__HasWeaponInHand__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Running?", Category="Default", OverrideNativeName="IsRunning?"))
	bool bpv__IsRunningx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Climb?", Category="Default", OverrideNativeName="CanClimb?"))
	bool bpv__CanClimbx__pfzy;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta=(DisplayName="Flashlight on?", Category="Default", OverrideNativeName="flashlightOn?"))
	bool bpv__flashlightOnx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Look Around Char on?", Category="Default", OverrideNativeName="IsLookAroundCharOn?"))
	bool bpv__IsLookAroundCharOnx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Shooting", Category="Default", OverrideNativeName="IsShooting"))
	bool bpv__IsShooting__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Start Run", Category="Default", OverrideNativeName="StartRun"))
	bool bpv__StartRun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Moving", Category="Default", OverrideNativeName="Moving"))
	bool bpv__Moving__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Crosshair Widget", Category="Crosshair", OverrideNativeName="CrosshairWidget"))
	UBP_Crosshair_C__pf122804083* bpv__CrosshairWidget__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Crosshair Active?", Category="Default", OverrideNativeName="CrosshairActive?"))
	bool bpv__CrosshairActivex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Crosshair Shoot Widget", Category="Crosshair", OverrideNativeName="Crosshair Shoot Widget"))
	UBP_CrosshairShoot_C__pf122804083* bpv__CrosshairxShootxWidget__pfTT;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Crosshair Shoot Active?", Category="Default", OverrideNativeName="CrosshairShootActive?"))
	bool bpv__CrosshairShootActivex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Camera Location", Category="CameraInfo", OverrideNativeName="MainCameraLocation"))
	FVector bpv__MainCameraLocation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Main Camera Rotation", Category="Camera Info", OverrideNativeName="MainCameraRotation"))
	FRotator bpv__MainCameraRotation__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ammo Reserved", Category="Default", OverrideNativeName="AmmoReserved"))
	float bpv__AmmoReserved__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Ammo in Gun", Category="Default", OverrideNativeName="AmmoInGun"))
	float bpv__AmmoInGun__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Reloading?", Category="Default", OverrideNativeName="isReloading?"))
	bool bpv__isReloadingx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Out Of Ammo Text", Category="Default", OverrideNativeName="OutOfAmmo_Text"))
	bool bpv__OutOfAmmo_Text__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Char Health", Category="Default", OverrideNativeName="CharHealth"))
	float bpv__CharHealth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="In Game UI", Category="Default", OverrideNativeName="InGameUI"))
	UInGameUI_C__pf122804083* bpv__InGameUI__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Taking Damage?", Category="Default", OverrideNativeName="IsTakingDamage?"))
	bool bpv__IsTakingDamagex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Loading?", Category="Default", OverrideNativeName="isLoading?"))
	bool bpv__isLoadingx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Interact?", Category="Default", OverrideNativeName="Interact?"))
	bool bpv__Interactx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Can Pick Up?", Category="Default", OverrideNativeName="CanPickUp?"))
	bool bpv__CanPickUpx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Anim First Lvl", Category="Level_01", OverrideNativeName="AnimFirstLvl"))
	bool bpv__AnimFirstLvl__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Open Gate?", Category="Default", OverrideNativeName="OpenGate?"))
	bool bpv__OpenGatex__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Footstep Sound", Category="Default", OverrideNativeName="footstepSound"))
	UAudioComponent* bpv__footstepSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Objective- 01", Category="Objectives", OverrideNativeName="Objective-01"))
	bool bpv__Objectivex01__pfG;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Objective- 02", Category="Objectives", OverrideNativeName="Objective-02"))
	bool bpv__Objectivex02__pfG;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dead?", Category="Default", OverrideNativeName="dead?"))
	bool bpv__deadx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Dead Screen", Category="Default", OverrideNativeName="DeadScreen"))
	UDeadScreen_C__pf122804083* bpv__DeadScreen__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Show Interact Txt", Category="Default", OverrideNativeName="ShowInteractTxt"))
	bool bpv__ShowInteractTxt__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Loading Screen- CH2", Category="Default", OverrideNativeName="LoadingScreen-CH2"))
	ULoadingScreenxWesternOak_C__pfG3933423829* bpv__LoadingScreenxCH2__pfG;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Near Death Sound", Category="Default", OverrideNativeName="NearDeathSound"))
	UAudioComponent* bpv__NearDeathSound__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Death Screen Music", Category="Default", OverrideNativeName="DeathScreenMusic"))
	UAudioComponent* bpv__DeathScreenMusic__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Level 02?", Category="Default", OverrideNativeName="Level02?"))
	bool bpv__Level02x__pfzy;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue2"))
	float b0l__K2Node_InputAxisEvent_AxisValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	AToCxx_C__pfII2980937819(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_ToCxx__pfII_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_ToCxx__pfII_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetIsRunning"))
	virtual void bpf__SetIsRunning__pf(bool bpp__IsRunning__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetIsMoving"))
	virtual void bpf__SetIsMoving__pf(bool bpp__IsMoving__pf);
public:
};
