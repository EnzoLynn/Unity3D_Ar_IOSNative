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

// EasyAR.DeviceUserAbstractBehaviour
struct DeviceUserAbstractBehaviour_t4137248064;
// System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour>
struct Action_2_t3003726150;
// System.Action`1<EasyAR.DeviceUserAbstractBehaviour>
struct Action_1_t238096904;
// EasyAR.DeviceAbstractBehaviour
struct DeviceAbstractBehaviour_t101220683;

#include "codegen/il2cpp-codegen.h"
#include "EasyAR_Unity_EasyAR_DeviceAbstractBehaviour101220683.h"

// System.Void EasyAR.DeviceUserAbstractBehaviour::.ctor()
extern "C"  void DeviceUserAbstractBehaviour__ctor_m1718307368 (DeviceUserAbstractBehaviour_t4137248064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::add_WorkStart(System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour>)
extern "C"  void DeviceUserAbstractBehaviour_add_WorkStart_m3922421885 (DeviceUserAbstractBehaviour_t4137248064 * __this, Action_2_t3003726150 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::remove_WorkStart(System.Action`2<EasyAR.DeviceUserAbstractBehaviour,EasyAR.DeviceAbstractBehaviour>)
extern "C"  void DeviceUserAbstractBehaviour_remove_WorkStart_m1220781750 (DeviceUserAbstractBehaviour_t4137248064 * __this, Action_2_t3003726150 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::add_WorkStop(System.Action`1<EasyAR.DeviceUserAbstractBehaviour>)
extern "C"  void DeviceUserAbstractBehaviour_add_WorkStop_m165522556 (DeviceUserAbstractBehaviour_t4137248064 * __this, Action_1_t238096904 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::remove_WorkStop(System.Action`1<EasyAR.DeviceUserAbstractBehaviour>)
extern "C"  void DeviceUserAbstractBehaviour_remove_WorkStop_m1775570613 (DeviceUserAbstractBehaviour_t4137248064 * __this, Action_1_t238096904 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::Bind(EasyAR.DeviceAbstractBehaviour)
extern "C"  void DeviceUserAbstractBehaviour_Bind_m213383823 (DeviceUserAbstractBehaviour_t4137248064 * __this, DeviceAbstractBehaviour_t101220683 * ___behaviour0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::OnWorkStart()
extern "C"  void DeviceUserAbstractBehaviour_OnWorkStart_m1511378872 (DeviceUserAbstractBehaviour_t4137248064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.DeviceUserAbstractBehaviour::OnWorkStop()
extern "C"  void DeviceUserAbstractBehaviour_OnWorkStop_m1296092942 (DeviceUserAbstractBehaviour_t4137248064 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
