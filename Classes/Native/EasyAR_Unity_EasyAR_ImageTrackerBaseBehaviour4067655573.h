#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.ImageTracker
struct ImageTracker_t2344666937;
// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour>
struct List_1_t2913954220;
// EasyAR.CameraDevice
struct CameraDevice_t1437158327;
// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean>
struct Action_4_t197553329;

#include "EasyAR_Unity_EasyAR_DeviceUserAbstractBehaviour4137248064.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.ImageTrackerBaseBehaviour
struct  ImageTrackerBaseBehaviour_t4067655573  : public DeviceUserAbstractBehaviour_t4137248064
{
public:
	// EasyAR.ImageTracker EasyAR.ImageTrackerBaseBehaviour::Tracker
	ImageTracker_t2344666937 * ___Tracker_5;
	// System.Collections.Generic.List`1<EasyAR.ImageTargetBaseBehaviour> EasyAR.ImageTrackerBaseBehaviour::imageTargetBaseBehaviours
	List_1_t2913954220 * ___imageTargetBaseBehaviours_6;
	// System.Boolean EasyAR.ImageTrackerBaseBehaviour::_arStarted
	bool ____arStarted_7;
	// EasyAR.CameraDevice EasyAR.ImageTrackerBaseBehaviour::cameraDevice
	CameraDevice_t1437158327 * ___cameraDevice_8;
	// System.Int32 EasyAR.ImageTrackerBaseBehaviour::simultaneousNum
	int32_t ___simultaneousNum_9;
	// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ImageTrackerBaseBehaviour::TargetLoad
	Action_4_t197553329 * ___TargetLoad_10;
	// System.Action`4<EasyAR.ImageTrackerBaseBehaviour,EasyAR.ImageTargetBaseBehaviour,EasyAR.Target,System.Boolean> EasyAR.ImageTrackerBaseBehaviour::TargetUnload
	Action_4_t197553329 * ___TargetUnload_11;

public:
	inline static int32_t get_offset_of_Tracker_5() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4067655573, ___Tracker_5)); }
	inline ImageTracker_t2344666937 * get_Tracker_5() const { return ___Tracker_5; }
	inline ImageTracker_t2344666937 ** get_address_of_Tracker_5() { return &___Tracker_5; }
	inline void set_Tracker_5(ImageTracker_t2344666937 * value)
	{
		___Tracker_5 = value;
		Il2CppCodeGenWriteBarrier(&___Tracker_5, value);
	}

	inline static int32_t get_offset_of_imageTargetBaseBehaviours_6() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4067655573, ___imageTargetBaseBehaviours_6)); }
	inline List_1_t2913954220 * get_imageTargetBaseBehaviours_6() const { return ___imageTargetBaseBehaviours_6; }
	inline List_1_t2913954220 ** get_address_of_imageTargetBaseBehaviours_6() { return &___imageTargetBaseBehaviours_6; }
	inline void set_imageTargetBaseBehaviours_6(List_1_t2913954220 * value)
	{
		___imageTargetBaseBehaviours_6 = value;
		Il2CppCodeGenWriteBarrier(&___imageTargetBaseBehaviours_6, value);
	}

	inline static int32_t get_offset_of__arStarted_7() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4067655573, ____arStarted_7)); }
	inline bool get__arStarted_7() const { return ____arStarted_7; }
	inline bool* get_address_of__arStarted_7() { return &____arStarted_7; }
	inline void set__arStarted_7(bool value)
	{
		____arStarted_7 = value;
	}

	inline static int32_t get_offset_of_cameraDevice_8() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4067655573, ___cameraDevice_8)); }
	inline CameraDevice_t1437158327 * get_cameraDevice_8() const { return ___cameraDevice_8; }
	inline CameraDevice_t1437158327 ** get_address_of_cameraDevice_8() { return &___cameraDevice_8; }
	inline void set_cameraDevice_8(CameraDevice_t1437158327 * value)
	{
		___cameraDevice_8 = value;
		Il2CppCodeGenWriteBarrier(&___cameraDevice_8, value);
	}

	inline static int32_t get_offset_of_simultaneousNum_9() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4067655573, ___simultaneousNum_9)); }
	inline int32_t get_simultaneousNum_9() const { return ___simultaneousNum_9; }
	inline int32_t* get_address_of_simultaneousNum_9() { return &___simultaneousNum_9; }
	inline void set_simultaneousNum_9(int32_t value)
	{
		___simultaneousNum_9 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_10() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4067655573, ___TargetLoad_10)); }
	inline Action_4_t197553329 * get_TargetLoad_10() const { return ___TargetLoad_10; }
	inline Action_4_t197553329 ** get_address_of_TargetLoad_10() { return &___TargetLoad_10; }
	inline void set_TargetLoad_10(Action_4_t197553329 * value)
	{
		___TargetLoad_10 = value;
		Il2CppCodeGenWriteBarrier(&___TargetLoad_10, value);
	}

	inline static int32_t get_offset_of_TargetUnload_11() { return static_cast<int32_t>(offsetof(ImageTrackerBaseBehaviour_t4067655573, ___TargetUnload_11)); }
	inline Action_4_t197553329 * get_TargetUnload_11() const { return ___TargetUnload_11; }
	inline Action_4_t197553329 ** get_address_of_TargetUnload_11() { return &___TargetUnload_11; }
	inline void set_TargetUnload_11(Action_4_t197553329 * value)
	{
		___TargetUnload_11 = value;
		Il2CppCodeGenWriteBarrier(&___TargetUnload_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
