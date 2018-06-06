#pragma once
#include"BusP.h"
#include "Library.h"

class CmpbyRouteNo
{
public:
	bool operator()(const Bus_Park&obj1, const Bus_Park&obj2)
	{
		return obj1.getRouteNo() < obj2.getRouteNo();
	}
};