#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.CameraCalibration
struct CameraCalibration_t252974987;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// EasyAR.Vector2I[]
struct Vector2IU5BU5D_t549686323;

#include "EasyAR_Unity_EasyAR_Base920305581.h"
#include "EasyAR_Unity_EasyAR_CameraDevice_Device2757367407.h"
#include "EasyAR_Unity_EasyAR_Vector2I2400269878.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.CameraDevice
struct  CameraDevice_t1437158327  : public Base_t920305581
{
public:
	// EasyAR.CameraDevice/Device EasyAR.CameraDevice::OpenedDeviceIfOpened
	int32_t ___OpenedDeviceIfOpened_2;
	// System.Boolean EasyAR.CameraDevice::horizontalFlip
	bool ___horizontalFlip_3;
	// EasyAR.Vector2I EasyAR.CameraDevice::_size
	Vector2I_t2400269878  ____size_4;
	// EasyAR.CameraCalibration EasyAR.CameraDevice::<Calibration>k__BackingField
	CameraCalibration_t252974987 * ___U3CCalibrationU3Ek__BackingField_5;
	// System.Single[] EasyAR.CameraDevice::<SupportedFPS>k__BackingField
	SingleU5BU5D_t2316563989* ___U3CSupportedFPSU3Ek__BackingField_6;
	// EasyAR.Vector2I[] EasyAR.CameraDevice::<SupportedSize>k__BackingField
	Vector2IU5BU5D_t549686323* ___U3CSupportedSizeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_OpenedDeviceIfOpened_2() { return static_cast<int32_t>(offsetof(CameraDevice_t1437158327, ___OpenedDeviceIfOpened_2)); }
	inline int32_t get_OpenedDeviceIfOpened_2() const { return ___OpenedDeviceIfOpened_2; }
	inline int32_t* get_address_of_OpenedDeviceIfOpened_2() { return &___OpenedDeviceIfOpened_2; }
	inline void set_OpenedDeviceIfOpened_2(int32_t value)
	{
		___OpenedDeviceIfOpened_2 = value;
	}

	inline static int32_t get_offset_of_horizontalFlip_3() { return static_cast<int32_t>(offsetof(CameraDevice_t1437158327, ___horizontalFlip_3)); }
	inline bool get_horizontalFlip_3() const { return ___horizontalFlip_3; }
	inline bool* get_address_of_horizontalFlip_3() { return &___horizontalFlip_3; }
	inline void set_horizontalFlip_3(bool value)
	{
		___horizontalFlip_3 = value;
	}

	inline static int32_t get_offset_of__size_4() { return static_cast<int32_t>(offsetof(CameraDevice_t1437158327, ____size_4)); }
	inline Vector2I_t2400269878  get__size_4() const { return ____size_4; }
	inline Vector2I_t2400269878 * get_address_of__size_4() { return &____size_4; }
	inline void set__size_4(Vector2I_t2400269878  value)
	{
		____size_4 = value;
	}

	inline static int32_t get_offset_of_U3CCalibrationU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CameraDevice_t1437158327, ___U3CCalibrationU3Ek__BackingField_5)); }
	inline CameraCalibration_t252974987 * get_U3CCalibrationU3Ek__BackingField_5() const { return ___U3CCalibrationU3Ek__BackingField_5; }
	inline CameraCalibration_t252974987 ** get_address_of_U3CCalibrationU3Ek__BackingField_5() { return &___U3CCalibrationU3Ek__BackingField_5; }
	inline void set_U3CCalibrationU3Ek__BackingField_5(CameraCalibration_t252974987 * value)
	{
		___U3CCalibrationU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCalibrationU3Ek__BackingField_5, value);
	}

	inline static int32_t get_offset_of_U3CSupportedFPSU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CameraDevice_t1437158327, ___U3CSupportedFPSU3Ek__BackingField_6)); }
	inline SingleU5BU5D_t2316563989* get_U3CSupportedFPSU3Ek__BackingField_6() const { return ___U3CSupportedFPSU3Ek__BackingField_6; }
	inline SingleU5BU5D_t2316563989** get_address_of_U3CSupportedFPSU3Ek__BackingField_6() { return &___U3CSupportedFPSU3Ek__BackingField_6; }
	inline void set_U3CSupportedFPSU3Ek__BackingField_6(SingleU5BU5D_t2316563989* value)
	{
		___U3CSupportedFPSU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSupportedFPSU3Ek__BackingField_6, value);
	}

	inline static int32_t get_offset_of_U3CSupportedSizeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CameraDevice_t1437158327, ___U3CSupportedSizeU3Ek__BackingField_7)); }
	inline Vector2IU5BU5D_t549686323* get_U3CSupportedSizeU3Ek__BackingField_7() const { return ___U3CSupportedSizeU3Ek__BackingField_7; }
	inline Vector2IU5BU5D_t549686323** get_address_of_U3CSupportedSizeU3Ek__BackingField_7() { return &___U3CSupportedSizeU3Ek__BackingField_7; }
	inline void set_U3CSupportedSizeU3Ek__BackingField_7(Vector2IU5BU5D_t549686323* value)
	{
		___U3CSupportedSizeU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSupportedSizeU3Ek__BackingField_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
