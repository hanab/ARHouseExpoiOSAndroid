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

// System.Collections.Generic.Queue`1<UnityEngine.Quaternion>
struct Queue_1_t3599803519;
// System.Array
struct Il2CppArray;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerator`1<UnityEngine.Quaternion>
struct IEnumerator_1_t3374822427;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t3236402666;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "System_System_Collections_Generic_Queue_1_Enumerato774457940.h"

// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::.ctor()
extern "C"  void Queue_1__ctor_m1287302428_gshared (Queue_1_t3599803519 * __this, const MethodInfo* method);
#define Queue_1__ctor_m1287302428(__this, method) ((  void (*) (Queue_1_t3599803519 *, const MethodInfo*))Queue_1__ctor_m1287302428_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::.ctor(System.Int32)
extern "C"  void Queue_1__ctor_m4201884972_gshared (Queue_1_t3599803519 * __this, int32_t ___count0, const MethodInfo* method);
#define Queue_1__ctor_m4201884972(__this, ___count0, method) ((  void (*) (Queue_1_t3599803519 *, int32_t, const MethodInfo*))Queue_1__ctor_m4201884972_gshared)(__this, ___count0, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Queue_1_System_Collections_ICollection_CopyTo_m1851889576_gshared (Queue_1_t3599803519 * __this, Il2CppArray * ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_CopyTo_m1851889576(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t3599803519 *, Il2CppArray *, int32_t, const MethodInfo*))Queue_1_System_Collections_ICollection_CopyTo_m1851889576_gshared)(__this, ___array0, ___idx1, method)
// System.Boolean System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m2736066986_gshared (Queue_1_t3599803519 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_IsSynchronized_m2736066986(__this, method) ((  bool (*) (Queue_1_t3599803519 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_IsSynchronized_m2736066986_gshared)(__this, method)
// System.Object System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Queue_1_System_Collections_ICollection_get_SyncRoot_m861920106_gshared (Queue_1_t3599803519 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_ICollection_get_SyncRoot_m861920106(__this, method) ((  Il2CppObject * (*) (Queue_1_t3599803519 *, const MethodInfo*))Queue_1_System_Collections_ICollection_get_SyncRoot_m861920106_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C"  Il2CppObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m765145710_gshared (Queue_1_t3599803519 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m765145710(__this, method) ((  Il2CppObject* (*) (Queue_1_t3599803519 *, const MethodInfo*))Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m765145710_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Queue_1_System_Collections_IEnumerable_GetEnumerator_m1402298295_gshared (Queue_1_t3599803519 * __this, const MethodInfo* method);
#define Queue_1_System_Collections_IEnumerable_GetEnumerator_m1402298295(__this, method) ((  Il2CppObject * (*) (Queue_1_t3599803519 *, const MethodInfo*))Queue_1_System_Collections_IEnumerable_GetEnumerator_m1402298295_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::CopyTo(T[],System.Int32)
extern "C"  void Queue_1_CopyTo_m2790069523_gshared (Queue_1_t3599803519 * __this, QuaternionU5BU5D_t3236402666* ___array0, int32_t ___idx1, const MethodInfo* method);
#define Queue_1_CopyTo_m2790069523(__this, ___array0, ___idx1, method) ((  void (*) (Queue_1_t3599803519 *, QuaternionU5BU5D_t3236402666*, int32_t, const MethodInfo*))Queue_1_CopyTo_m2790069523_gshared)(__this, ___array0, ___idx1, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::Dequeue()
extern "C"  Quaternion_t1891715979  Queue_1_Dequeue_m2411503419_gshared (Queue_1_t3599803519 * __this, const MethodInfo* method);
#define Queue_1_Dequeue_m2411503419(__this, method) ((  Quaternion_t1891715979  (*) (Queue_1_t3599803519 *, const MethodInfo*))Queue_1_Dequeue_m2411503419_gshared)(__this, method)
// T System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::Peek()
extern "C"  Quaternion_t1891715979  Queue_1_Peek_m3800745682_gshared (Queue_1_t3599803519 * __this, const MethodInfo* method);
#define Queue_1_Peek_m3800745682(__this, method) ((  Quaternion_t1891715979  (*) (Queue_1_t3599803519 *, const MethodInfo*))Queue_1_Peek_m3800745682_gshared)(__this, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::Enqueue(T)
extern "C"  void Queue_1_Enqueue_m3133081394_gshared (Queue_1_t3599803519 * __this, Quaternion_t1891715979  ___item0, const MethodInfo* method);
#define Queue_1_Enqueue_m3133081394(__this, ___item0, method) ((  void (*) (Queue_1_t3599803519 *, Quaternion_t1891715979 , const MethodInfo*))Queue_1_Enqueue_m3133081394_gshared)(__this, ___item0, method)
// System.Void System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::SetCapacity(System.Int32)
extern "C"  void Queue_1_SetCapacity_m2460298247_gshared (Queue_1_t3599803519 * __this, int32_t ___new_size0, const MethodInfo* method);
#define Queue_1_SetCapacity_m2460298247(__this, ___new_size0, method) ((  void (*) (Queue_1_t3599803519 *, int32_t, const MethodInfo*))Queue_1_SetCapacity_m2460298247_gshared)(__this, ___new_size0, method)
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::get_Count()
extern "C"  int32_t Queue_1_get_Count_m2490702064_gshared (Queue_1_t3599803519 * __this, const MethodInfo* method);
#define Queue_1_get_Count_m2490702064(__this, method) ((  int32_t (*) (Queue_1_t3599803519 *, const MethodInfo*))Queue_1_get_Count_m2490702064_gshared)(__this, method)
// System.Collections.Generic.Queue`1/Enumerator<T> System.Collections.Generic.Queue`1<UnityEngine.Quaternion>::GetEnumerator()
extern "C"  Enumerator_t774457940  Queue_1_GetEnumerator_m4242209523_gshared (Queue_1_t3599803519 * __this, const MethodInfo* method);
#define Queue_1_GetEnumerator_m4242209523(__this, method) ((  Enumerator_t774457940  (*) (Queue_1_t3599803519 *, const MethodInfo*))Queue_1_GetEnumerator_m4242209523_gshared)(__this, method)
