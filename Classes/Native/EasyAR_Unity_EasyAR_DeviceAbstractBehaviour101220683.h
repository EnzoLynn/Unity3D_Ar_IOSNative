#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean>
struct Action_2_t3824552546;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.DeviceAbstractBehaviour
struct  DeviceAbstractBehaviour_t101220683  : public MonoBehaviour_t667441552
{
public:
	// System.Action`2<EasyAR.DeviceAbstractBehaviour,System.Boolean> EasyAR.DeviceAbstractBehaviour::DeviceStart
	Action_2_t3824552546 * ___DeviceStart_2;
	// System.Boolean EasyAR.DeviceAbstractBehaviour::<IsOpened>k__BackingField
	bool ___U3CIsOpenedU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_DeviceStart_2() { return static_cast<int32_t>(offsetof(DeviceAbstractBehaviour_t101220683, ___DeviceStart_2)); }
	inline Action_2_t3824552546 * get_DeviceStart_2() const { return ___DeviceStart_2; }
	inline Action_2_t3824552546 ** get_address_of_DeviceStart_2() { return &___DeviceStart_2; }
	inline void set_DeviceStart_2(Action_2_t3824552546 * value)
	{
		___DeviceStart_2 = value;
		Il2CppCodeGenWriteBarrier(&___DeviceStart_2, value);
	}

	inline static int32_t get_offset_of_U3CIsOpenedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DeviceAbstractBehaviour_t101220683, ___U3CIsOpenedU3Ek__BackingField_3)); }
	inline bool get_U3CIsOpenedU3Ek__BackingField_3() const { return ___U3CIsOpenedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CIsOpenedU3Ek__BackingField_3() { return &___U3CIsOpenedU3Ek__BackingField_3; }
	inline void set_U3CIsOpenedU3Ek__BackingField_3(bool value)
	{
		___U3CIsOpenedU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
