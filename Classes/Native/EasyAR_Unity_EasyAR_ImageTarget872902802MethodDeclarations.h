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

// EasyAR.ImageTarget
struct ImageTarget_t872902802;
// System.String
struct String_t;
// System.Collections.Generic.List`1<EasyAR.Target>
struct List_1_t3029277309;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_String7231557.h"
#include "EasyAR_Unity_EasyAR_StorageType2455874075.h"

// System.Void EasyAR.ImageTarget::.ctor()
extern "C"  void ImageTarget__ctor_m1037656854 (ImageTarget_t872902802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTarget::.ctor(System.IntPtr)
extern "C"  void ImageTarget__ctor_m3020289278 (ImageTarget_t872902802 * __this, IntPtr_t ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 EasyAR.ImageTarget::get_Size()
extern "C"  Vector2_t4282066565  ImageTarget_get_Size_m1291859411 (ImageTarget_t872902802 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTarget::set_Size(UnityEngine.Vector2)
extern "C"  void ImageTarget_set_Size_m1130280206 (ImageTarget_t872902802 * __this, Vector2_t4282066565  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTarget::Load(System.String,System.Int32,System.String)
extern "C"  bool ImageTarget_Load_m1411632241 (ImageTarget_t872902802 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EasyAR.ImageTarget::Dispose(System.Boolean)
extern "C"  void ImageTarget_Dispose_m681470474 (ImageTarget_t872902802 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTarget::LoadJsonFile(System.String,EasyAR.StorageType,System.String)
extern "C"  bool ImageTarget_LoadJsonFile_m1318896618 (ImageTarget_t872902802 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___targetname2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTarget::LoadJsonString(System.String,EasyAR.StorageType,System.String)
extern "C"  bool ImageTarget_LoadJsonString_m170474175 (ImageTarget_t872902802 * __this, String_t* ___json0, int32_t ___storageType1, String_t* ___targetname2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EasyAR.ImageTarget::Json(System.String,EasyAR.StorageType,System.String,UnityEngine.Vector2)
extern "C"  String_t* ImageTarget_Json_m1184753235 (ImageTarget_t872902802 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___targetname2, Vector2_t4282066565  ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EasyAR.ImageTarget::LoadImage(System.String,EasyAR.StorageType,System.String,UnityEngine.Vector2)
extern "C"  bool ImageTarget_LoadImage_m3414576023 (ImageTarget_t872902802 * __this, String_t* ___path0, int32_t ___storageType1, String_t* ___targetname2, Vector2_t4282066565  ___size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<EasyAR.Target> EasyAR.ImageTarget::LoadListFromJsonFile(System.String,EasyAR.StorageType)
extern "C"  List_1_t3029277309 * ImageTarget_LoadListFromJsonFile_m2573543983 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<EasyAR.Target> EasyAR.ImageTarget::LoadList(System.String,System.Int32)
extern "C"  List_1_t3029277309 * ImageTarget_LoadList_m1689215724 (Il2CppObject * __this /* static, unused */, String_t* ___path0, int32_t ___storageType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
