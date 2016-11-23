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

// EasyAR.VideoPlayerBaseBehaviour
struct VideoPlayerBaseBehaviour_t2130413676;
// System.EventHandler
struct EventHandler_t2463957060;
// EasyAR.VideoPlayer
struct VideoPlayer_t3930598658;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_EventHandler2463957060.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer3930598658.h"
#include "EasyAR_Unity_EasyAR_VideoPlayer_PlayerStatus1687256097.h"

// System.Void EasyAR.VideoPlayerBaseBehaviour::.ctor()
extern "C"  void VideoPlayerBaseBehaviour__ctor_m1910646260 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::add_VideoReadyEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_add_VideoReadyEvent_m3712317469 (VideoPlayerBaseBehaviour_t2130413676 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::remove_VideoReadyEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_remove_VideoReadyEvent_m962611164 (VideoPlayerBaseBehaviour_t2130413676 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::add_VideoReachEndEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_add_VideoReachEndEvent_m1807782270 (VideoPlayerBaseBehaviour_t2130413676 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::remove_VideoReachEndEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_remove_VideoReachEndEvent_m3218486623 (VideoPlayerBaseBehaviour_t2130413676 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::add_VideoErrorEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_add_VideoErrorEvent_m1548356674 (VideoPlayerBaseBehaviour_t2130413676 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::remove_VideoErrorEvent(System.EventHandler)
extern "C"  void VideoPlayerBaseBehaviour_remove_VideoErrorEvent_m3093617665 (VideoPlayerBaseBehaviour_t2130413676 * __this, EventHandler_t2463957060 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single EasyAR.VideoPlayerBaseBehaviour::get_Volume()
extern "C"  float VideoPlayerBaseBehaviour_get_Volume_m861098151 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::set_Volume(System.Single)
extern "C"  void VideoPlayerBaseBehaviour_set_Volume_m756073380 (VideoPlayerBaseBehaviour_t2130413676 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Awake()
extern "C"  void VideoPlayerBaseBehaviour_Awake_m2148251479 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Init()
extern "C"  void VideoPlayerBaseBehaviour_Init_m844454368 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Start()
extern "C"  void VideoPlayerBaseBehaviour_Start_m857784052 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnDestroy()
extern "C"  void VideoPlayerBaseBehaviour_OnDestroy_m1468522733 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Update()
extern "C"  void VideoPlayerBaseBehaviour_Update_m827354009 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnEnable()
extern "C"  void VideoPlayerBaseBehaviour_OnEnable_m932736274 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnDisable()
extern "C"  void VideoPlayerBaseBehaviour_OnDisable_m3585957979 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Open()
extern "C"  void VideoPlayerBaseBehaviour_Open_m1017951386 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::Close()
extern "C"  void VideoPlayerBaseBehaviour_Close_m3621505802 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Play()
extern "C"  bool VideoPlayerBaseBehaviour_Play_m2785718648 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Pause()
extern "C"  bool VideoPlayerBaseBehaviour_Pause_m161361812 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Stop()
extern "C"  bool VideoPlayerBaseBehaviour_Stop_m2879402694 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::Seek(System.Int32)
extern "C"  bool VideoPlayerBaseBehaviour_Seek_m400174861 (VideoPlayerBaseBehaviour_t2130413676 * __this, int32_t ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::CurPosition()
extern "C"  int32_t VideoPlayerBaseBehaviour_CurPosition_m1952692097 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Width()
extern "C"  int32_t VideoPlayerBaseBehaviour_Width_m1705377726 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Height()
extern "C"  int32_t VideoPlayerBaseBehaviour_Height_m1830916305 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EasyAR.VideoPlayerBaseBehaviour::Duration()
extern "C"  int32_t VideoPlayerBaseBehaviour_Duration_m2611441598 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.VideoPlayerBaseBehaviour::OnStateChange(EasyAR.VideoPlayer,EasyAR.VideoPlayer/PlayerStatus)
extern "C"  void VideoPlayerBaseBehaviour_OnStateChange_m2589227998 (VideoPlayerBaseBehaviour_t2130413676 * __this, VideoPlayer_t3930598658 * ___player0, int32_t ___state1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.VideoPlayerBaseBehaviour::AutoScale()
extern "C"  bool VideoPlayerBaseBehaviour_AutoScale_m2171010745 (VideoPlayerBaseBehaviour_t2130413676 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
