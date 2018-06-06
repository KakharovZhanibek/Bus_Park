#include "BusP.h"
#include "Library.h"
istream & operator >> (istream & is, Bus_Park & obj)
{
	is >> obj.No >> obj.sname >> obj.name >> obj.RouteNo >> obj.placeNo;
	return is;
}

ostream & operator<<(ostream & os, Bus_Park  obj)
{
	os <<setw(19)<<"Номер автобуса : "<< obj.No 
		<< "\nФамилия водителя : " << obj.sname 
		<< "\n"<<setw(19)<<"Имя водителя: " << obj.name 
		<< "\n"<<setw(19)<<"Номер маршрута : " << obj.RouteNo 
		<< "\n"<<setw(19)<<"Количество мест : " << obj.placeNo << endl;
	return os;
}

//istream & operator >> (istream & is, string &tmp)
//{
//	is >> tmp;
//	return is;
//}

int Bus_Park::getNo() const
{
	return No;
}

int Bus_Park::getRouteNo() const
{
	return RouteNo;
}

string Bus_Park::getName() const
{
	return name;
}
