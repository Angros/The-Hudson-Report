#pragma once
#include "Blueprint/BlueprintSupport.h"
#include "Animation/AnimClassData.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_StateMachine.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_Root.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendSpacePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_SequencePlayer.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_TransitionResult.h"
class AInfectedxAI_C__pfG897084639;
#include "InfectedAnimBP__pf529494595.generated.h"
UCLASS(config=Engine, Blueprintable, BlueprintType, meta=(ReplaceConverted="/Game/ZombieMixamoModels/InfectedAnimBP.InfectedAnimBP_C", OverrideNativeName="InfectedAnimBP_C"))
class UInfectedAnimBP_C__pf529494595 : public UAnimInstance
{
public:
	GENERATED_BODY()
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_Root_1314B4BD46D37F6B19B0D9AC16ECBA93"))
	FAnimNode_Root bpv__AnimGraphNode_Root_1314B4BD46D37F6B19B0D9AC16ECBA93__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_EE5C163644DE1DA5FAB4E1B34451CBA0"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_EE5C163644DE1DA5FAB4E1B34451CBA0__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_35D5D07F4BE9F4C94E9EAB85E81818D6"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_35D5D07F4BE9F4C94E9EAB85E81818D6__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_6F4AD6994C7B3EA573F63A9207EC7390"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_6F4AD6994C7B3EA573F63A9207EC7390__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3"))
	FAnimNode_TransitionResult bpv__AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_E2E18128476BE8AE6AC5CF944FAD40F2"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_E2E18128476BE8AE6AC5CF944FAD40F2__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_4FD0C1E04E05296B60AD84A78381F943"))
	FAnimNode_Root bpv__AnimGraphNode_StateResult_4FD0C1E04E05296B60AD84A78381F943__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_AB484E1942A879DCB7554584B9B52731"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_AB484E1942A879DCB7554584B9B52731__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_DB8735AE40B241516821C3B025581D99"))
	FAnimNode_Root bpv__AnimGraphNode_StateResult_DB8735AE40B241516821C3B025581D99__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_SequencePlayer_FE08114D4D7510F30FC354BF48840261"))
	FAnimNode_SequencePlayer bpv__AnimGraphNode_SequencePlayer_FE08114D4D7510F30FC354BF48840261__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_B40A86724B96E6D5DEFAB09FCDAA9048"))
	FAnimNode_Root bpv__AnimGraphNode_StateResult_B40A86724B96E6D5DEFAB09FCDAA9048__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124"))
	FAnimNode_BlendSpacePlayer bpv__AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateResult_8AE8C9FA4E936916EE4751ADBEDBC204"))
	FAnimNode_Root bpv__AnimGraphNode_StateResult_8AE8C9FA4E936916EE4751ADBEDBC204__pf;
	UPROPERTY(meta=(OverrideNativeName="AnimGraphNode_StateMachine_3EB9C6A349D32C1D30DA64995F223FFE"))
	FAnimNode_StateMachine bpv__AnimGraphNode_StateMachine_3EB9C6A349D32C1D30DA64995F223FFE__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is in Air?", Category="Default", OverrideNativeName="IsInAir?"))
	bool bpv__IsInAirx__pfzy;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Speed", Category="Default", OverrideNativeName="Speed"))
	float bpv__Speed__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Direction", Category="Default", OverrideNativeName="Direction"))
	float bpv__Direction__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Is Attacking", Category="Default", OverrideNativeName="IsAttacking"))
	bool bpv__IsAttacking__pf;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="AI-Health", Category="Default", OverrideNativeName="AI-Health"))
	float bpv__AIxHealth__pfG;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, meta=(DisplayName="Player Health", Category="Default", OverrideNativeName="PlayerHealth"))
	float bpv__PlayerHealth__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_Event_DeltaTimeX"))
	float b0l__K2Node_Event_DeltaTimeX__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_AsInfected__AI"))
	AInfectedxAI_C__pfG897084639* b0l__K2Node_DynamicCast_AsInfected__AI__pf;
	UPROPERTY(Transient, DuplicateTransient, meta=(OverrideNativeName="K2Node_DynamicCast_bSuccess"))
	bool b0l__K2Node_DynamicCast_bSuccess__pf;
	UInfectedAnimBP_C__pf529494595(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph) override;
	static void __CustomDynamicClassInitialization(UDynamicClass* InDynamicClass);
	static void __StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_CommonAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	static void __StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad);
	void bpf__ExecuteUbergraph_InfectedAnimBP__pf_0(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedAnimBP__pf_1(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedAnimBP__pf_2(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedAnimBP__pf_3(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedAnimBP__pf_4(int32 bpp__EntryPoint__pf);
	void bpf__ExecuteUbergraph_InfectedAnimBP__pf_5(int32 bpp__EntryPoint__pf);
	UFUNCTION(meta=(ToolTip="Executed when the Animation is updated", CppFromBpEvent, OverrideNativeName="BlueprintUpdateAnimation"))
	void bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf);
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_35D5D07F4BE9F4C94E9EAB85E81818D6"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_35D5D07F4BE9F4C94E9EAB85E81818D6__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_BlendSpacePlayer_6361788048A0FA5446FA3B9BE2373124__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_EE5C163644DE1DA5FAB4E1B34451CBA0"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_EE5C163644DE1DA5FAB4E1B34451CBA0__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_45B8FAF84042C2BDE2AFA69CEFF84BE3__pf();
	UFUNCTION(meta=(OverrideNativeName="EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_6F4AD6994C7B3EA573F63A9207EC7390"))
	virtual void bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_InfectedAnimBP_AnimGraphNode_TransitionResult_6F4AD6994C7B3EA573F63A9207EC7390__pf();
public:
};
