#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// EasyAR.EngineNativeIOS/LogFunc
struct LogFunc_t3562562578;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EasyAR.EngineNativeIOS
struct  EngineNativeIOS_t1638809498  : public Il2CppObject
{
public:

public:
};

struct EngineNativeIOS_t1638809498_StaticFields
{
public:
	// EasyAR.EngineNativeIOS/LogFunc EasyAR.EngineNativeIOS::_log
	LogFunc_t3562562578 * ____log_0;

public:
	inline static int32_t get_offset_of__log_0() { return static_cast<int32_t>(offsetof(EngineNativeIOS_t1638809498_StaticFields, ____log_0)); }
	inline LogFunc_t3562562578 * get__log_0() const { return ____log_0; }
	inline LogFunc_t3562562578 ** get_address_of__log_0() { return &____log_0; }
	inline void set__log_0(LogFunc_t3562562578 * value)
	{
		____log_0 = value;
		Il2CppCodeGenWriteBarrier(&____log_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
