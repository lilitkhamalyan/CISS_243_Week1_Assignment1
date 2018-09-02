//Implementation file for the NumDays class
#include <iostream>
using namespace std;
#include "NumDays.h"
NumDays::NumDays()
{
	hours = 0.0;
	days = 0.0;
}
//Definition os member function findNumOfDays.
void NumDays::findNumOfDays()
{
	if (hours < 0)
	{
		cout << "Enter a valid value." << endl;

	}
	else 
	{
		days = hours / 8;

	}
}
NumDays NumDays::operator + (const NumDays &add)
{
	NumDays temp;
	temp.hours = hours + add.hours;
	temp.findNumOfDays();
	return temp;
}
NumDays NumDays::operator - (const NumDays &sub)
{
	NumDays temp;
	temp.hours = hours - sub.hours; 
	temp.findNumOfDays();
	return temp;
}
//NumDays NumDays::operator ++ ()
//{
//	++hours;
//	findNumOfDays();
//	return *this;
//}
//NumDays NumDays::operator ++ (double)
//{
//
//}