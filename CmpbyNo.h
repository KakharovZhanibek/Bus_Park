#pragma once
#include "Library.h"
#include "BusP.h"

class CmpbyNo
{
public:
	bool operator()(const Bus_Park&obj1, const Bus_Park&obj2)
	{
		return obj1.getNo() < obj2.getNo();
	}
};
