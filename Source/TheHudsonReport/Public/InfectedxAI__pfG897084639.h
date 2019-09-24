#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
class UAudioComponent;
class UBoxComponent;
class UPawnSensingComponent;
class APawn;
class AMyChar_C__pf2980937819;
class UAIAsyncTaskBlueprintProxy;
class UPrimitiveComponent;
class AActor;
class UDamageType;
class AController;
#include "InfectedxAI__pfG897084639.generated.h"
UCLASS(config=Game, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/Mannequin/AngrosEdit/InfectedBlueprints/Infected-AI.Infected-AI_C", OverrideNativeName="Infected-AI_C"))
class AInfectedxAI_C__pfG897084639 : public ACharacter
{
public:
	GENERATED_BODY()
	UDELEGATE(meta=(OverrideNativeName="OAISimpleDelegate__DelegateSignature"))
	DECLARE_DYNAMIC_DELEGATE_OneParam(F__OAISimpleDelegate__DelegateSignature__SC, EPathFollowingResult::Type , MovementResult);
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Zombie-dead-02"))
	UAudioComponent* bpv__Zombiexdeadx02__pfGG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="zombie-detect-2"))
	UAudioComponent* bpv__zombiexdetectx2__pfGG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="zombie-detect"))
	UAudioComponent* bpv__zombiexdetect__pfG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="zombie-idle-3"))
	UAudioComponent* bpv__zombiexidlex3__pfGG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="zombie-idle-2"))
	UAudioComponent* bpv__zombiexidlex2__pfGG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Zombie-dead"))
	UAudioComponent* bpv__Zombiexdead__pfG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="Zombie-attack"))
	UAudioComponent* bpv__Zombiexattack__pfG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="zombie-idle"))
	UAudioComponent* bpv__zombiexidle__pfG;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="InRange"))
	UBoxComponent* bpv__InRange__pf;
	UPROPERTY(BlueprintReadWrite, NonTransactional, meta=(Category="Default", OverrideNativeName="PawnSensing"))
	UPawnSensingComponent* bpv__PawnSensing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Damage", Category="Default", OverrideNativeName="Damage"))
	float bpv__Damage__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Zombie Health", Category="Default", OverrideNativeName="ZombieHealth"))
	float bpv__ZombieHealth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Chasing", Category="Default", OverrideNativeName="Chasing"))
	bool bpv__Chasing__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Attacking?", Category="Default", OverrideNativeName="IsAttacking?"))
	bool bpv__IsAttackingx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Health", Category="Default", OverrideNativeName="PlayerHealth"))
	float bpv__PlayerHealth__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Special- Infected?", Category="Default", OverrideNativeName="Special-Infected?"))
	bool bpv__SpecialxInfectedx__pfGzy;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable"))
	int32 b0l__Temp_int_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable2"))
	int32 b0l__Temp_int_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_object_Variable"))
	UAudioComponent* b0l__Temp_object_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_int_Variable3"))
	int32 b0l__Temp_int_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable"))
	bool b0l__Temp_bool_IsClosed_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate"))
	F__OAISimpleDelegate__DelegateSignature__SC b0l__K2Node_CreateDelegate_OutputDelegate__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable2"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable2"))
	bool b0l__Temp_bool_IsClosed_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable3"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable3"))
	bool b0l__Temp_bool_IsClosed_Variable3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable4"))
	bool b0l__Temp_bool_IsClosed_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable4"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult4"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_ComponentBoundEvent_Pawn"))
	APawn* b0l__K2Node_ComponentBoundEvent_Pawn__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Char"))
	AMyChar_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Char__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_TargetActor"))
	APawn* b0l__K2Node_CustomEvent_TargetActor__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate2"))
	F__OAISimpleDelegate__DelegateSignature__SC b0l__K2Node_CreateDelegate_OutputDelegate2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="CallFunc_CreateMoveToProxyObject_ReturnValue2"))
	UAIAsyncTaskBlueprintProxy* b0l__CallFunc_CreateMoveToProxyObject_ReturnValue2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable5"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaSeconds"))
	float b0l__K2Node_Event_DeltaSeconds__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable5"))
	bool b0l__Temp_bool_IsClosed_Variable5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Char2"))
	AMyChar_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Char2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess2"))
	bool b0l__K2Node_DynamicCast_bSuccess2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Char3"))
	AMyChar_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Char3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess3"))
	bool b0l__K2Node_DynamicCast_bSuccess3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Char4"))
	AMyChar_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Char4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess4"))
	bool b0l__K2Node_DynamicCast_bSuccess4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Char5"))
	AMyChar_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Char5__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess5"))
	bool b0l__K2Node_DynamicCast_bSuccess5__pf;
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
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsMy_Char6"))
	AMyChar_C__pf2980937819* b0l__K2Node_DynamicCast_AsMy_Char6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess6"))
	bool b0l__K2Node_DynamicCast_bSuccess6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_Damage"))
	float b0l__K2Node_Event_Damage__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageType"))
	UDamageType* b0l__K2Node_Event_DamageType__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_InstigatedBy"))
	AController* b0l__K2Node_Event_InstigatedBy__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DamageCauser"))
	AActor* b0l__K2Node_Event_DamageCauser__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_Has_Been_Initd_Variable6"))
	bool b0l__Temp_bool_Has_Been_Initd_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select_Default"))
	UAudioComponent* b0l__K2Node_Select_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select2_Default"))
	UAudioComponent* b0l__K2Node_Select2_Default__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate3"))
	F__OAISimpleDelegate__DelegateSignature__SC b0l__K2Node_CreateDelegate_OutputDelegate3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_bool_IsClosed_Variable6"))
	bool b0l__Temp_bool_IsClosed_Variable6__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CreateDelegate_OutputDelegate4"))
	F__OAISimpleDelegate__DelegateSignature__SC b0l__K2Node_CreateDelegate_OutputDelegate4__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="Temp_byte_Variable2"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__Temp_byte_Variable2__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_CustomEvent_MovementResult3"))
	TEnumAsByte<EPathFollowingResult::Type> b0l__K2Node_CustomEvent_MovementResult3__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Select3_Default"))
	UAudioComponent* b0l__K2Node_Select3_Default__pf;
	AInfectedxAI_C__pfG897084639(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Infected-AI_0"))
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_0(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Infected-AI_1"))
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_1(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Infected-AI_2"))
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_3(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(OverrideNativeName="ExecuteUbergraph_Infected-AI_4"))
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_5(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_6(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_7(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_8(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_9(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_10(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedxAI__pfG_11(int32 bpp__EntryPoint__pf);
	UFUNCTION(BlueprintAuthorityOnly, meta=(Category="Game|Damage", DisplayName="AnyDamage", ToolTip="Event when this actor takes ANY damage", CppFromBpEvent, OverrideNativeName="ReceiveAnyDamage"))
	void bpf__ReceiveAnyDamage__pf(float bpp__Damage__pf, const UDamageType* bpp__DamageType__pf__const, AController* bpp__InstigatedBy__pf, AActor* bpp__DamageCauser__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__InRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__InRange_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf);
	UFUNCTION(meta=(OverrideNativeName="BndEvt__InRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature"))
	virtual void bpf__BndEvt__InRange_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature__pf(UPrimitiveComponent* bpp__OverlappedComponent__pf, AActor* bpp__OtherActor__pf, UPrimitiveComponent* bpp__OtherComp__pf, int32 bpp__OtherBodyIndex__pf, bool bpp__bFromSweep__pf, /*out*/ FHitResult const& bpp__SweepResult__pf__const);
	UFUNCTION(meta=(DisplayName="Tick", ToolTip="Event called every frame", CppFromBpEvent, OverrideNativeName="ReceiveTick"))
	void bpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="ChasePlayer"))
	virtual void bpf__ChasePlayer__pf(APawn* bpp__TargetActor__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="Roam"))
	virtual void bpf__Roam__pf();
	UFUNCTION(meta=(DisplayName="BeginPlay", ToolTip="Event when play begins for this actor.", CppFromBpEvent, OverrideNativeName="ReceiveBeginPlay"))
	void bpf__ReceiveBeginPlay__pf();
	UFUNCTION(meta=(OverrideNativeName="BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature"))
	virtual void bpf__BndEvt__PawnSensing_K2Node_ComponentBoundEvent_0_SeePawnDelegate__DelegateSignature__pf(APawn* bpp__Pawn__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_329799874A4B74ABDD2DCDB1E6BE70BF"))
	virtual void bpf__OnSuccess_329799874A4B74ABDD2DCDB1E6BE70BF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_329799874A4B74ABDD2DCDB1E6BE70BF"))
	virtual void bpf__OnFail_329799874A4B74ABDD2DCDB1E6BE70BF__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnSuccess_445D30DB4D31073BD7764C951B0F3ECE"))
	virtual void bpf__OnSuccess_445D30DB4D31073BD7764C951B0F3ECE__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(Category, OverrideNativeName="OnFail_445D30DB4D31073BD7764C951B0F3ECE"))
	virtual void bpf__OnFail_445D30DB4D31073BD7764C951B0F3ECE__pf(EPathFollowingResult::Type bpp__MovementResult__pf);
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Construction Script", ToolTip="Construction script, the place to spawn components and do other setup.@note Name used in CreateBlueprint function@param       Location        The location.@param       Rotation        The rotation.", Category, CppFromBpEvent, OverrideNativeName="UserConstructionScript"))
	void bpf__UserConstructionScript__pf();
public:
};
