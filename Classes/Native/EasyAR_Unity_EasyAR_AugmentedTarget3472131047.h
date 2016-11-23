#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.Target
struct Target_t1661091757;

#include "EasyAR_Unity_EasyAR_Base920305581.h"
#include "EasyAR_Unity_EasyAR_AugmentedTarget_TrackStatus987949268.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.AugmentedTarget
struct  AugmentedTarget_t3472131047  : public Base_t920305581
{
public:
	// EasyAR.AugmentedTarget/TrackStatus EasyAR.AugmentedTarget::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_2;
	// EasyAR.Target EasyAR.AugmentedTarget::<Target>k__BackingField
	Target_t1661091757 * ___U3CTargetU3Ek__BackingField_3;
	// UnityEngine.Quaternion EasyAR.AugmentedTarget::<Rotation>k__BackingField
	Quaternion_t1553702882  ___U3CRotationU3Ek__BackingField_4;
	// UnityEngine.Vector3 EasyAR.AugmentedTarget::<Position>k__BackingField
	Vector3_t4282066566  ___U3CPositionU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CStatusU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AugmentedTarget_t3472131047, ___U3CStatusU3Ek__BackingField_2)); }
	inline int32_t get_U3CStatusU3Ek__BackingField_2() const { return ___U3CStatusU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CStatusU3Ek__BackingField_2() { return &___U3CStatusU3Ek__BackingField_2; }
	inline void set_U3CStatusU3Ek__BackingField_2(int32_t value)
	{
		___U3CStatusU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AugmentedTarget_t3472131047, ___U3CTargetU3Ek__BackingField_3)); }
	inline Target_t1661091757 * get_U3CTargetU3Ek__BackingField_3() const { return ___U3CTargetU3Ek__BackingField_3; }
	inline Target_t1661091757 ** get_address_of_U3CTargetU3Ek__BackingField_3() { return &___U3CTargetU3Ek__BackingField_3; }
	inline void set_U3CTargetU3Ek__BackingField_3(Target_t1661091757 * value)
	{
		___U3CTargetU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CTargetU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CRotationU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AugmentedTarget_t3472131047, ___U3CRotationU3Ek__BackingField_4)); }
	inline Quaternion_t1553702882  get_U3CRotationU3Ek__BackingField_4() const { return ___U3CRotationU3Ek__BackingField_4; }
	inline Quaternion_t1553702882 * get_address_of_U3CRotationU3Ek__BackingField_4() { return &___U3CRotationU3Ek__BackingField_4; }
	inline void set_U3CRotationU3Ek__BackingField_4(Quaternion_t1553702882  value)
	{
		___U3CRotationU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CPositionU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AugmentedTarget_t3472131047, ___U3CPositionU3Ek__BackingField_5)); }
	inline Vector3_t4282066566  get_U3CPositionU3Ek__BackingField_5() const { return ___U3CPositionU3Ek__BackingField_5; }
	inline Vector3_t4282066566 * get_address_of_U3CPositionU3Ek__BackingField_5() { return &___U3CPositionU3Ek__BackingField_5; }
	inline void set_U3CPositionU3Ek__BackingField_5(Vector3_t4282066566  value)
	{
		___U3CPositionU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
