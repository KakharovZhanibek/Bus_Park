#pragma once
#include "Library.h"

class Bus_Park
{
private:
	int No;
	string sname;
	string name;
	int RouteNo;
	int placeNo;
public:
	Bus_Park(int No, string sname, string name, int RouteNo, int placeNo) :No(No), sname(sname), name(name), RouteNo(RouteNo), placeNo(placeNo) {}
	Bus_Park()
	{
		No = 0;
		sname = "";
		name = "";
		RouteNo = 0;
		placeNo = 0;
	}

	int getNo()const;
	int getRouteNo()const;
	string getName()const;

	friend istream&operator >> (istream&is, Bus_Park& obj);
	friend ostream&operator<<(ostream&os, Bus_Park obj);
	//friend istream&operator >> (istream&is, string& tmp);
	
};

