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

// UnityEngine.Mesh
struct Mesh_t4241756145;
// System.Array
struct Il2CppArray;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t4024180168;
// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Mesh4241756145.h"
#include "UnityEngine_UnityEngine_Mesh_InternalShaderChannel2277052758.h"
#include "UnityEngine_UnityEngine_Mesh_InternalVertexChannel2290942609.h"
#include "mscorlib_System_Array1146569071.h"
#include "UnityEngine_UnityEngine_Bounds2711641849.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C"  void Mesh__ctor_m2684203808 (Mesh_t4241756145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C"  void Mesh_Internal_Create_m3749730360 (Il2CppObject * __this /* static, unused */, Mesh_t4241756145 * ___mono0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Mesh::get_canAccess()
extern "C"  bool Mesh_get_canAccess_m3042962979 (Mesh_t4241756145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorCantAccessMesh(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  void Mesh_PrintErrorCantAccessMesh_m548718398 (Mesh_t4241756145 * __this, int32_t ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::PrintErrorCantAccessMeshForIndices()
extern "C"  void Mesh_PrintErrorCantAccessMeshForIndices_m2814194066 (Mesh_t4241756145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetArrayForChannelImpl(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
extern "C"  void Mesh_SetArrayForChannelImpl_m1509779596 (Mesh_t4241756145 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, Il2CppArray * ___values3, int32_t ___arraySize4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesImpl(System.Int32,System.Array,System.Int32,System.Boolean)
extern "C"  void Mesh_SetTrianglesImpl_m3687620564 (Mesh_t4241756145 * __this, int32_t ___submesh0, Il2CppArray * ___triangles1, int32_t ___arraySize2, bool ___calculateBounds3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetTrianglesImpl(System.Int32,System.Array,System.Int32)
extern "C"  void Mesh_SetTrianglesImpl_m1324707977 (Mesh_t4241756145 * __this, int32_t ___submesh0, Il2CppArray * ___triangles1, int32_t ___arraySize2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C"  Bounds_t2711641849  Mesh_get_bounds_m1625335237 (Mesh_t4241756145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C"  void Mesh_INTERNAL_get_bounds_m739771994 (Mesh_t4241756145 * __this, Bounds_t2711641849 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C"  void Mesh_RecalculateNormals_m1806625021 (Mesh_t4241756145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::DefaultDimensionForChannel(UnityEngine.Mesh/InternalShaderChannel)
extern "C"  int32_t Mesh_DefaultDimensionForChannel_m1889643149 (Il2CppObject * __this /* static, unused */, int32_t ___channel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::SafeLength(System.Array)
extern "C"  int32_t Mesh_SafeLength_m2932719837 (Mesh_t4241756145 * __this, Il2CppArray * ___values0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::SetSizedArrayForChannel(UnityEngine.Mesh/InternalShaderChannel,UnityEngine.Mesh/InternalVertexChannelType,System.Int32,System.Array,System.Int32)
extern "C"  void Mesh_SetSizedArrayForChannel_m2551235175 (Mesh_t4241756145 * __this, int32_t ___channel0, int32_t ___format1, int32_t ___dim2, Il2CppArray * ___values3, int32_t ___valuesCount4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C"  void Mesh_set_vertices_m2628866109 (Mesh_t4241756145 * __this, Vector3U5BU5D_t215400611* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C"  void Mesh_set_uv_m498907190 (Mesh_t4241756145 * __this, Vector2U5BU5D_t4024180168* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C"  void Mesh_set_triangles_m2341339867 (Mesh_t4241756145 * __this, Int32U5BU5D_t3230847821* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
