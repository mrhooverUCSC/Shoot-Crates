﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





extern void AudioSettings_InvokeOnAudioConfigurationChanged_m8273D3AEB24F4C3E374238B6F699BE6696808E85 (void);
extern void AudioSettings_InvokeOnAudioSystemShuttingDown_m1B9895D60B3267EBDEC69B9169730DBAD8325E90 (void);
extern void AudioSettings_InvokeOnAudioSystemStartedUp_m7FE042936237E5BDCB20299D8C4CF583B661468C (void);
extern void AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE (void);
extern void AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB (void);
extern void AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944 (void);
extern void AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2 (void);
extern void Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D (void);
extern void Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02 (void);
extern void Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA (void);
extern void Mobile_InvokeOnMuteStateChanged_mE5242862F948BA9FBB013A2B45F645B6A21E6198 (void);
extern void Mobile_InvokeIsStopAudioOutputOnMuteEnabled_m854CB455C7BE7ADC06BABCB9AA24F60309AE7ED1 (void);
extern void Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223 (void);
extern void Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46 (void);
extern void AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C (void);
extern void AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8 (void);
extern void PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28 (void);
extern void PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152 (void);
extern void PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B (void);
extern void PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702 (void);
extern void AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960 (void);
extern void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (void);
extern void AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44 (void);
extern void AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83 (void);
extern void AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD (void);
extern void AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57 (void);
extern void AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4 (void);
extern void AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15 (void);
extern void SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A (void);
extern void SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC (void);
static Il2CppMethodPointer s_methodPointers[30] = 
{
	AudioSettings_InvokeOnAudioConfigurationChanged_m8273D3AEB24F4C3E374238B6F699BE6696808E85,
	AudioSettings_InvokeOnAudioSystemShuttingDown_m1B9895D60B3267EBDEC69B9169730DBAD8325E90,
	AudioSettings_InvokeOnAudioSystemStartedUp_m7FE042936237E5BDCB20299D8C4CF583B661468C,
	AudioSettings_StartAudioOutput_mB04D851DD0E6115DEEFB55779F880146263C67BE,
	AudioSettings_StopAudioOutput_m3FE7A8EADAB2FB570BB05F7C353E25E15885D1CB,
	AudioConfigurationChangeHandler__ctor_mA9827AB9472EC8EE0A0F0FC24EBC06B4740DD944,
	AudioConfigurationChangeHandler_Invoke_m4DC27DD11512481B60071B20284E6886DAE54DE2,
	Mobile_get_muteState_m64C1E8C61537317A7F153E1A72F7D39D85DA684D,
	Mobile_set_muteState_m7C9A464BCA3762330E18CCAD79AF6C47B863CA02,
	Mobile_get_stopAudioOutputOnMute_m43EC82258D38C418353DFE19F32B51B64B18DCCA,
	Mobile_InvokeOnMuteStateChanged_mE5242862F948BA9FBB013A2B45F645B6A21E6198,
	Mobile_InvokeIsStopAudioOutputOnMuteEnabled_m854CB455C7BE7ADC06BABCB9AA24F60309AE7ED1,
	Mobile_StartAudioOutput_m731D1EEEE7A0D56BAADD571BA0FCAC13FB071223,
	Mobile_StopAudioOutput_m10B8CEF668EE4967D0AD1D6741B6A37540C28A46,
	AudioClip_InvokePCMReaderCallback_Internal_m766E5705AB5AE16F5F142867CC3758ABE4BF462C,
	AudioClip_InvokePCMSetPositionCallback_Internal_m986EF703B7DDE42343730DE93A095D05B9F4DBB8,
	PCMReaderCallback__ctor_mF621B6CC1A4BA6525190C5037401CF2FD5C0CF28,
	PCMReaderCallback_Invoke_m76784C690C36B513E2AA5B0E4FD9831B2C7E5152,
	PCMSetPositionCallback__ctor_mD16F77DDB552EB69BB3F5EF39420B2F09F95455B,
	PCMSetPositionCallback_Invoke_m434D4F02FA25F91DF6199EC5A799C551C7F93702,
	AudioSource_PlayHelper_m4DE8C48925C3548BED306DAB9F87939F24A46960,
	AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3,
	AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44,
	AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83,
	AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD,
	AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57,
	AudioSampleProvider_InvokeSampleFramesAvailable_mEB16F7230AB65A3576BF053AC5719F8E134FBCD4,
	AudioSampleProvider_InvokeSampleFramesOverflow_m66593173A527981F5EB2A5EF77B0C9119DAB5E15,
	SampleFramesHandler__ctor_m7DDE0BAD439CD80791140C7D42D661B598A7663A,
	SampleFramesHandler_Invoke_m478D5645634B8C734E58B59CF7750797FC54F1BC,
};
extern void AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk (void);
extern void AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk (void);
extern void AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk (void);
extern void AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[4] = 
{
	{ 0x06000017, AudioClipPlayable_GetHandle_mEA1D664328FF9B08E4F7D5EBCD4B51A754D97C44_AdjustorThunk },
	{ 0x06000018, AudioClipPlayable_Equals_m9C1C75ACBB74FE06AD02BE4643F6EB39413EFF83_AdjustorThunk },
	{ 0x06000019, AudioMixerPlayable_GetHandle_m6C182D9794E901D123223BB57738A302BEAB41FD_AdjustorThunk },
	{ 0x0600001A, AudioMixerPlayable_Equals_mDFB945EB48199A338BAD00D40FB8EEC34CF64D57_AdjustorThunk },
};
static const int32_t s_InvokerIndices[30] = 
{
	8944,
	9785,
	9785,
	9736,
	9736,
	2023,
	3787,
	9736,
	8944,
	9736,
	8944,
	9736,
	9785,
	9785,
	3865,
	3839,
	2023,
	3865,
	2023,
	3839,
	7671,
	4849,
	4768,
	2609,
	4768,
	2610,
	3839,
	3839,
	2023,
	2035,
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_AudioModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_AudioModule_CodeGenModule = 
{
	"UnityEngine.AudioModule.dll",
	30,
	s_methodPointers,
	4,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
