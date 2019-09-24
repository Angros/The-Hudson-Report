#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
class UPrimitiveComponent;
class AActor;
class UMyAnimBP_Mannequin_C__pf2980937819;
class UCameraComponent;
class USpringArmComponent;
class UStaticMeshComponent;
class UBoxComponent;
class UTimelineComponent;
class UBP_Crosshair_C__pf122804083;
class UBP_CrosshairShoot_C__pf122804083;
class UInGameUI_C__pf122804083;
class UAudioComponent;
class UDeadScreen_C__pf122804083;
class ULoadingScreenxWesternOak_C__pfG3933423829;
class AM9xwxFlashlight_C__pfGG2403237688;
class UPhysicalMaterial;
class UDamageType;
class AController;
#include "MyChar__pf2980937819.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mannequin/AngrosEdit/MyChar.MyChar_C", OverrideNativeName="MyChar_C"))
class AMyChar_C__pf2980937819 : public ACharacter
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
	UPROPERTY(meta=(OverrideNativeName="Timeline_0_FOVchange_03F817B94C9EAEDB0DA054B35B3E5B0B"))
	float bpv__Timeline_0_FOVchange_03F817B94C9EAEDB0DA054B35B3E5B0B__pf;
	UPROPERTY(meta=(OverrideNativeName="Timeline_0__Direction_03F817B94C9EAEDB0DA054B35B3E5B0B"))
	TEnumAsByte<ETimelineDirection::Type> bpv__Timeline_0__Direction_03F817B94C9EAEDB0DA054B35B3E5B0B__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="MyChar", OverrideNativeName="Timeline_0"))
	UTimelineComponent* bpv__Timeline_0__pf;
	UPROPERTY(meta=(OverrideNativeName="ChangeFOV_FOVchange_CD1CADEC4FA9DAE82F5D1985704FD5E9"))
	float bpv__ChangeFOV_FOVchange_CD1CADEC4FA9DAE82F5D1985704FD5E9__pf;
	UPROPERTY(meta=(OverrideNativeName="ChangeFOV__Direction_CD1CADEC4FA9DAE82F5D1985704FD5E9"))
	TEnumAsByte<ETimelineDirection::Type> bpv__ChangeFOV__Direction_CD1CADEC4FA9DAE82F5D1985704FD5E9__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="MyChar", OverrideNativeName="ChangeFOV"))
	UTimelineComponent* bpv__ChangeFOV__pf;
	UPROPERTY(meta=(OverrideNativeName="ToMainCamera_Rotation_Dynamic_144456974213271D75BC41AC463FE398"))
	float bpv__ToMainCamera_Rotation_Dynamic_144456974213271D75BC41AC463FE398__pf;
	UPROPERTY(meta=(OverrideNativeName="ToMainCamera_Location_Dynamic_144456974213271D75BC41AC463FE398"))
	float bpv__ToMainCamera_Location_Dynamic_144456974213271D75BC41AC463FE398__pf;
	UPROPERTY(meta=(OverrideNativeName="ToMainCamera__Direction_144456974213271D75BC41AC463FE398"))
	TEnumAsByte<ETimelineDirection::Type> bpv__ToMainCamera__Direction_144456974213271D75BC41AC463FE398__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="MyChar", OverrideNativeName="ToMainCamera"))
	UTimelineComponent* bpv__ToMainCamera__pf;
	UPROPERTY(meta=(OverrideNativeName="ToShoulderAim_Rotation_Dynamic_DA9B2277448FF7FBDEBD41B389145CA3"))
	float bpv__ToShoulderAim_Rotation_Dynamic_DA9B2277448FF7FBDEBD41B389145CA3__pf;
	UPROPERTY(meta=(OverrideNativeName="ToShoulderAim_Location_Dynamic_DA9B2277448FF7FBDEBD41B389145CA3"))
	float bpv__ToShoulderAim_Location_Dynamic_DA9B2277448FF7FBDEBD41B389145CA3__pf;
	UPROPERTY(meta=(OverrideNativeName="ToShoulderAim__Direction_DA9B2277448FF7FBDEBD41B389145CA3"))
	TEnumAsByte<ETimelineDirection::Type> bpv__ToShoulderAim__Direction_DA9B2277448FF7FBDEBD41B389145CA3__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="MyChar", OverrideNativeName="ToShoulderAim"))
	UTimelineComponent* bpv__ToShoulderAim__pf;
	UPROPERTY(meta=(OverrideNativeName="RunSpeed_runspeed_B935A3774C2271BC4ECA2D9DC50D8DEA"))
	float bpv__RunSpeed_runspeed_B935A3774C2271BC4ECA2D9DC50D8DEA__pf;
	UPROPERTY(meta=(OverrideNativeName="RunSpeed__Direction_B935A3774C2271BC4ECA2D9DC50D8DEA"))
	TEnumAsByte<ETimelineDirection::Type> bpv__RunSpeed__Direction_B935A3774C2271BC4ECA2D9DC50D8DEA__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="MyChar", OverrideNativeName="RunSpeed"))
	UTimelineComponent* bpv__RunSpeed__pf;
	UPROPERTY(meta=(OverrideNativeName="RunningFOV_Pistol_FOVchange_0D3A5CCF4EB96FE31FF436A33145F69F"))
	float bpv__RunningFOV_Pistol_FOVchange_0D3A5CCF4EB96FE31FF436A33145F69F__pf;
	UPROPERTY(meta=(OverrideNativeName="RunningFOV_Pistol__Direction_0D3A5CCF4EB96FE31FF436A33145F69F"))
	TEnumAsByte<ETimelineDirection::Type> bpv__RunningFOV_Pistol__Direction_0D3A5CCF4EB96FE31FF436A33145F69F__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="MyChar", OverrideNativeName="RunningFOV_Pistol"))
	UTimelineComponent* bpv__RunningFOV_Pistol__pf;
	UPROPERTY(meta=(OverrideNativeName="RunningFOV_FOVchange_2EB9449342F7E836CCB587AD5E02E4BE"))
	float bpv__RunningFOV_FOVchange_2EB9449342F7E836CCB587AD5E02E4BE__pf;
	UPROPERTY(meta=(OverrideNativeName="RunningFOV__Direction_2EB9449342F7E836CCB587AD5E02E4BE"))
	TEnumAsByte<ETimelineDirection::Type> bpv__RunningFOV__Direction_2EB9449342F7E836CCB587AD5E02E4BE__pf;
	UPROPERTY(BlueprintReadWrite, meta=(Category="MyChar", OverrideNativeName="RunningFOV"))
	UTimelineComponent* bpv__RunningFOV__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key6"))
	FKey b0l__K2Node_InputKeyEvent_Key6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key5"))
	FKey b0l__K2Node_InputKeyEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable"))
	FKey b0l__Temp_struct_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key4"))
	FKey b0l__K2Node_InputKeyEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key3"))
	FKey b0l__K2Node_InputKeyEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable2"))
	FKey b0l__Temp_struct_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key2"))
	FKey b0l__K2Node_InputKeyEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key"))
	FKey b0l__K2Node_InputKeyEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable3"))
	FKey b0l__Temp_struct_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key10"))
	FKey b0l__K2Node_InputActionEvent_Key10__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	TArray<AActor*> b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key9"))
	FKey b0l__K2Node_InputActionEvent_Key9__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key8"))
	FKey b0l__K2Node_InputActionEvent_Key8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable4"))
	FKey b0l__Temp_struct_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key7"))
	FKey b0l__K2Node_InputActionEvent_Key7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key6"))
	FKey b0l__K2Node_InputActionEvent_Key6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable5"))
	FKey b0l__Temp_struct_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key5"))
	FKey b0l__K2Node_InputActionEvent_Key5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key4"))
	FKey b0l__K2Node_InputActionEvent_Key4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable6"))
	FKey b0l__Temp_struct_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key3"))
	FKey b0l__K2Node_InputActionEvent_Key3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key2"))
	FKey b0l__K2Node_InputActionEvent_Key2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable7"))
	FKey b0l__Temp_struct_Variable7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputActionEvent_Key"))
	FKey b0l__K2Node_InputActionEvent_Key__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Anim_BP_Mannequin"))
	UMyAnimBP_Mannequin_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable2"))
	bool b0l__Temp_bool_IsClosed_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable3"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue6"))
	float b0l__K2Node_InputAxisEvent_AxisValue6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue5"))
	float b0l__K2Node_InputAxisEvent_AxisValue5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll"))
	float b0l__CallFunc_BreakRotator_Roll__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch"))
	float b0l__CallFunc_BreakRotator_Pitch__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw"))
	float b0l__CallFunc_BreakRotator_Yaw__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue4"))
	float b0l__K2Node_InputAxisEvent_AxisValue4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue3"))
	float b0l__K2Node_InputAxisEvent_AxisValue3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue2"))
	float b0l__K2Node_InputAxisEvent_AxisValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputAxisEvent_AxisValue"))
	float b0l__K2Node_InputAxisEvent_AxisValue__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_struct_Variable8"))
	FKey b0l__Temp_struct_Variable8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key7"))
	FKey b0l__K2Node_InputKeyEvent_Key7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Roll2"))
	float b0l__CallFunc_BreakRotator_Roll2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Pitch2"))
	float b0l__CallFunc_BreakRotator_Pitch2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakRotator_Yaw2"))
	float b0l__CallFunc_BreakRotator_Yaw2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable3"))
	bool b0l__Temp_bool_IsClosed_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Anim_BP_Mannequin2"))
	UMyAnimBP_Mannequin_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor2"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp2"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex2"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_bFromSweep"))
	bool b0l__K2Node_ComponentBoundEvent_bFromSweep__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_SweepResult"))
	FHitResult b0l__K2Node_ComponentBoundEvent_SweepResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OverlappedComponent"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OverlappedComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherActor"))
	AActor* b0l__K2Node_ComponentBoundEvent_OtherActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherComp"))
	UPrimitiveComponent* b0l__K2Node_ComponentBoundEvent_OtherComp__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_OtherBodyIndex"))
	int32 b0l__K2Node_ComponentBoundEvent_OtherBodyIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Anim_BP_Mannequin3"))
	UMyAnimBP_Mannequin_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsM9_w__Flashlight"))
	AM9xwxFlashlight_C__pfGG2403237688* b0l__K2Node_DynamicCast_AsM9_w__Flashlight__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsM9_w__Flashlight2"))
	AM9xwxFlashlight_C__pfGG2403237688* b0l__K2Node_DynamicCast_AsM9_w__Flashlight2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsM9_w__Flashlight3"))
	AM9xwxFlashlight_C__pfGG2403237688* b0l__K2Node_DynamicCast_AsM9_w__Flashlight3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable4"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_InputKeyEvent_Key8"))
	FKey b0l__K2Node_InputKeyEvent_Key8__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Location"))
	FVector b0l__CallFunc_BreakTransform_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Rotation"))
	FRotator b0l__CallFunc_BreakTransform_Rotation__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakTransform_Scale"))
	FVector b0l__CallFunc_BreakTransform_Scale__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult2"))
	FHitResult b0l__CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable4"))
	bool b0l__Temp_bool_IsClosed_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_LineTraceSingle_NEW_OutHit"))
	FHitResult b0l__CallFunc_LineTraceSingle_NEW_OutHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bBlockingHit"))
	bool b0l__CallFunc_BreakHitResult_bBlockingHit__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_bInitialOverlap"))
	bool b0l__CallFunc_BreakHitResult_bInitialOverlap__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Time"))
	float b0l__CallFunc_BreakHitResult_Time__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Location"))
	FVector b0l__CallFunc_BreakHitResult_Location__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactPoint"))
	FVector b0l__CallFunc_BreakHitResult_ImpactPoint__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_Normal"))
	FVector b0l__CallFunc_BreakHitResult_Normal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_ImpactNormal"))
	FVector b0l__CallFunc_BreakHitResult_ImpactNormal__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_PhysMat"))
	UPhysicalMaterial* b0l__CallFunc_BreakHitResult_PhysMat__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitActor"))
	AActor* b0l__CallFunc_BreakHitResult_HitActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitComponent"))
	UPrimitiveComponent* b0l__CallFunc_BreakHitResult_HitComponent__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitBoneName"))
	FName b0l__CallFunc_BreakHitResult_HitBoneName__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_HitItem"))
	int32 b0l__CallFunc_BreakHitResult_HitItem__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_FaceIndex"))
	int32 b0l__CallFunc_BreakHitResult_FaceIndex__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceStart"))
	FVector b0l__CallFunc_BreakHitResult_TraceStart__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_BreakHitResult_TraceEnd"))
	FVector b0l__CallFunc_BreakHitResult_TraceEnd__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_SwitchEnum_CmpSuccess"))
	bool b0l__K2Node_SwitchEnum_CmpSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable5"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Anim_BP_Mannequin4"))
	UMyAnimBP_Mannequin_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess7"))
	bool b0l__K2Node_DynamicCast_bSuccess7__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable5"))
	bool b0l__Temp_bool_IsClosed_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Anim_BP_Mannequin5"))
	UMyAnimBP_Mannequin_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Anim_BP_Mannequin5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess8"))
	bool b0l__K2Node_DynamicCast_bSuccess8__pf;
	AMyChar_C__pf2980937819(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MyChar_0"))
	void bpf__ExecuteUbergraph_MyChar__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MyChar_4"))
	void bpf__ExecuteUbergraph_MyChar__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_8(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MyChar_9"))
	void bpf__ExecuteUbergraph_MyChar__pf_9(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MyChar_10"))
	void bpf__ExecuteUbergraph_MyChar__pf_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_11(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_12(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_13(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_14(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_15(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_16(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_17(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_18(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_19(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MyChar_20"))
	void bpf__ExecuteUbergraph_MyChar__pf_20(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_21(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_22(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_MyChar_23"))
	void bpf__ExecuteUbergraph_MyChar__pf_23(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_24(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_25(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_26(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_27(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_28(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_29(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_30(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_31(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_32(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_33(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_34(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_35(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_36(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_37(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_38(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_39(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_40(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_41(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_42(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_MyChar__pf_43(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Holster/Draw Weapon"))
	virtual void bpf__HolsterxDrawxWeapon__pfET();
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SwitchToAimView"))
	virtual void bpf__SwitchToAimView__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ShootTrace"))
	virtual void bpf__ShootTrace__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxClimb_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxClimb_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__BoxClimb_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__BoxClimb_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="UnHolsterWeapon"))
	virtual void bpf__UnHolsterWeapon__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="HolsterWeapon"))
	virtual void bpf__HolsterWeapon__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_Turn_K2Node_InputAxisEvent_47"))
	virtual void bpf__InpAxisEvt_Turn_K2Node_InputAxisEvent_47__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUp_K2Node_InputAxisEvent_40"))
	virtual void bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_40__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53"))
	virtual void bpf__InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_53__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38"))
	virtual void bpf__InpAxisEvt_TurnRate_K2Node_InputAxisEvent_38__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2"))
	virtual void bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0"))
	virtual void bpf__InpAxisEvt_MoveForward_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_AimDownSights_K2Node_InputActionEvent_10"))
	virtual void bpf__InpActEvt_AimDownSights_K2Node_InputActionEvent_10__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Interact_K2Node_InputActionEvent_11"))
	virtual void bpf__InpActEvt_Interact_K2Node_InputActionEvent_11__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Interact_K2Node_InputActionEvent_12"))
	virtual void bpf__InpActEvt_Interact_K2Node_InputActionEvent_12__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Reload_K2Node_InputActionEvent_13"))
	virtual void bpf__InpActEvt_Reload_K2Node_InputActionEvent_13__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Reload_K2Node_InputActionEvent_14"))
	virtual void bpf__InpActEvt_Reload_K2Node_InputActionEvent_14__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ZoomIn_K2Node_InputActionEvent_15"))
	virtual void bpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_15__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_ZoomIn_K2Node_InputActionEvent_16"))
	virtual void bpf__InpActEvt_ZoomIn_K2Node_InputActionEvent_16__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Shoot_K2Node_InputActionEvent_17"))
	virtual void bpf__InpActEvt_Shoot_K2Node_InputActionEvent_17__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Shoot_K2Node_InputActionEvent_18"))
	virtual void bpf__InpActEvt_Shoot_K2Node_InputActionEvent_18__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Flashlight_K2Node_InputActionEvent_19"))
	virtual void bpf__InpActEvt_Flashlight_K2Node_InputActionEvent_19__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8"))
	virtual void bpf__InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_8__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9"))
	virtual void bpf__InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_9__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftShift_K2Node_InputKeyEvent_10"))
	virtual void bpf__InpActEvt_LeftShift_K2Node_InputKeyEvent_10__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftShift_K2Node_InputKeyEvent_11"))
	virtual void bpf__InpActEvt_LeftShift_K2Node_InputKeyEvent_11__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12"))
	virtual void bpf__InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_13"))
	virtual void bpf__InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_13__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftShift_K2Node_InputKeyEvent_14"))
	virtual void bpf__InpActEvt_LeftShift_K2Node_InputKeyEvent_14__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="InpActEvt_LeftShift_K2Node_InputKeyEvent_15"))
	virtual void bpf__InpActEvt_LeftShift_K2Node_InputKeyEvent_15__pf(FKey bpp__Key__pf);
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__UpdateFunc"))
	virtual void bpf__Timeline_0__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="Timeline_0__FinishedFunc"))
	virtual void bpf__Timeline_0__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="ChangeFOV__UpdateFunc"))
	virtual void bpf__ChangeFOV__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="ChangeFOV__FinishedFunc"))
	virtual void bpf__ChangeFOV__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="ToMainCamera__UpdateFunc"))
	virtual void bpf__ToMainCamera__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="ToMainCamera__FinishedFunc"))
	virtual void bpf__ToMainCamera__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="ToShoulderAim__UpdateFunc"))
	virtual void bpf__ToShoulderAim__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="ToShoulderAim__FinishedFunc"))
	virtual void bpf__ToShoulderAim__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="RunSpeed__UpdateFunc"))
	virtual void bpf__RunSpeed__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="RunSpeed__FinishedFunc"))
	virtual void bpf__RunSpeed__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="RunningFOV_Pistol__UpdateFunc"))
	virtual void bpf__RunningFOV_Pistol__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="RunningFOV_Pistol__FinishedFunc"))
	virtual void bpf__RunningFOV_Pistol__FinishedFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="RunningFOV__UpdateFunc"))
	virtual void bpf__RunningFOV__UpdateFunc__pf();
	UFUNCTION(meta=(OverrideNativeName="RunningFOV__FinishedFunc"))
	virtual void bpf__RunningFOV__FinishedFunc__pf();
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetIsRunning"))
	virtual void bpf__SetIsRunning__pf(bool bpp__IsRunning__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="SetIsMoving"))
	virtual void bpf__SetIsMoving__pf(bool bpp__IsMoving__pf);
public:
};
