#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HouseID
struct  HouseID_t2765168667  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 HouseID::id
	int32_t ___id_2;
	// System.Boolean HouseID::isActive
	bool ___isActive_3;
	// System.Boolean HouseID::isLast
	bool ___isLast_4;

public:
	inline static int32_t get_offset_of_id_2() { return static_cast<int32_t>(offsetof(HouseID_t2765168667, ___id_2)); }
	inline int32_t get_id_2() const { return ___id_2; }
	inline int32_t* get_address_of_id_2() { return &___id_2; }
	inline void set_id_2(int32_t value)
	{
		___id_2 = value;
	}

	inline static int32_t get_offset_of_isActive_3() { return static_cast<int32_t>(offsetof(HouseID_t2765168667, ___isActive_3)); }
	inline bool get_isActive_3() const { return ___isActive_3; }
	inline bool* get_address_of_isActive_3() { return &___isActive_3; }
	inline void set_isActive_3(bool value)
	{
		___isActive_3 = value;
	}

	inline static int32_t get_offset_of_isLast_4() { return static_cast<int32_t>(offsetof(HouseID_t2765168667, ___isLast_4)); }
	inline bool get_isLast_4() const { return ___isLast_4; }
	inline bool* get_address_of_isLast_4() { return &___isLast_4; }
	inline void set_isLast_4(bool value)
	{
		___isLast_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
