#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;
// ChangeTextScript
struct ChangeTextScript_t1453196360;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ButtonScript
struct  ButtonScript_t1098287805  : public MonoBehaviour_t3012272455
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ButtonScript::buildings
	List_1_t514686775 * ___buildings_2;
	// System.Int32 ButtonScript::lengthOfList
	int32_t ___lengthOfList_3;
	// ChangeTextScript ButtonScript::houseGroupText
	ChangeTextScript_t1453196360 * ___houseGroupText_4;

public:
	inline static int32_t get_offset_of_buildings_2() { return static_cast<int32_t>(offsetof(ButtonScript_t1098287805, ___buildings_2)); }
	inline List_1_t514686775 * get_buildings_2() const { return ___buildings_2; }
	inline List_1_t514686775 ** get_address_of_buildings_2() { return &___buildings_2; }
	inline void set_buildings_2(List_1_t514686775 * value)
	{
		___buildings_2 = value;
		Il2CppCodeGenWriteBarrier(&___buildings_2, value);
	}

	inline static int32_t get_offset_of_lengthOfList_3() { return static_cast<int32_t>(offsetof(ButtonScript_t1098287805, ___lengthOfList_3)); }
	inline int32_t get_lengthOfList_3() const { return ___lengthOfList_3; }
	inline int32_t* get_address_of_lengthOfList_3() { return &___lengthOfList_3; }
	inline void set_lengthOfList_3(int32_t value)
	{
		___lengthOfList_3 = value;
	}

	inline static int32_t get_offset_of_houseGroupText_4() { return static_cast<int32_t>(offsetof(ButtonScript_t1098287805, ___houseGroupText_4)); }
	inline ChangeTextScript_t1453196360 * get_houseGroupText_4() const { return ___houseGroupText_4; }
	inline ChangeTextScript_t1453196360 ** get_address_of_houseGroupText_4() { return &___houseGroupText_4; }
	inline void set_houseGroupText_4(ChangeTextScript_t1453196360 * value)
	{
		___houseGroupText_4 = value;
		Il2CppCodeGenWriteBarrier(&___houseGroupText_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
