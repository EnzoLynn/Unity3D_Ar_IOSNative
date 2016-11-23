#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// EasyAR.VideoPlayer
struct VideoPlayer_t3930598658;
// System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>
struct Action_2_t1844697874;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "EasyAR_Unity_EasyAR_StorageType2455874075.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_VideoType2764490535.h"

// System.Void EasyAR.VideoPlayer::.ctor()
extern "C"  void VideoPlayer__ctor_m1590535334 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::.cctor()
extern "C"  void VideoPlayer__cctor_m1579858887 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::add_PlayerStatusChanged(System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>)
extern "C"  void VideoPlayer_add_PlayerStatusChanged_m1685283352 (VideoPlayer_t3930598658 * __this, Action_2_t1844697874 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::remove_PlayerStatusChanged(System.Action`2<EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus>)
extern "C"  void VideoPlayer_remove_PlayerStatusChanged_m3041395835 (VideoPlayer_t3930598658 * __this, Action_2_t1844697874 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::set_IsMultithreadCallback(System.Boolean)
extern "C"  void VideoPlayer_set_IsMultithreadCallback_m2307906300 (VideoPlayer_t3930598658 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::get_IsMultithreadCallback()
extern "C"  bool VideoPlayer_get_IsMultithreadCallback_m3762270125 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.VideoPlayer::get_Volume()
extern "C"  float VideoPlayer_get_Volume_m3205502285 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::set_Volume(System.Single)
extern "C"  void VideoPlayer_set_Volume_m2983246294 (VideoPlayer_t3930598658 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::Dispose(System.Boolean)
extern "C"  void VideoPlayer_Dispose_m1652394906 (VideoPlayer_t3930598658 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::CheckCallback()
extern "C"  bool VideoPlayer_CheckCallback_m3210106213 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::UpdateFrame()
extern "C"  void VideoPlayer_UpdateFrame_m3679504552 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::Play()
extern "C"  bool VideoPlayer_Play_m417157918 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::Pause()
extern "C"  bool VideoPlayer_Pause_m4045390510 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::Stop()
extern "C"  bool VideoPlayer_Stop_m510841964 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::Open(System.String,EasyAR.StorageType)
extern "C"  void VideoPlayer_Open_m1309823314 (VideoPlayer_t3930598658 * __this, String_t* ___url0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::Close()
extern "C"  void VideoPlayer_Close_m3301394876 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayer::Seek(System.Int32)
extern "C"  bool VideoPlayer_Seek_m4021913523 (VideoPlayer_t3930598658 * __this, int32_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayer::CurrentPosition()
extern "C"  int32_t VideoPlayer_CurrentPosition_m47490208 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayer::Width()
extern "C"  int32_t VideoPlayer_Width_m2609483748 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayer::Height()
extern "C"  int32_t VideoPlayer_Height_m4088399211 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayer::Duration()
extern "C"  int32_t VideoPlayer_Duration_m3094029784 (VideoPlayer_t3930598658 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::SetRenderTexture(System.IntPtr)
extern "C"  void VideoPlayer_SetRenderTexture_m2316691699 (VideoPlayer_t3930598658 * __this, IntPtr_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::SetVideoType(EasyAR.VideoPlayer/VideoType)
extern "C"  void VideoPlayer_SetVideoType_m3835022314 (VideoPlayer_t3930598658 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayer::OnStatusChange(System.IntPtr,System.Int32)
extern "C"  void VideoPlayer_OnStatusChange_m1980810594 (Il2CppObject * __this /* static, unused */, IntPtr_t ___obj0, int32_t ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_VideoPlayer_OnStatusChange_m1980810594(intptr_t ___obj0, int32_t ___status1);
