//Implementation file for the NumDays class
#include <iostream>
#include <cstdlib> // needed for abs().
#include "NumDays.h"
using namespace std;

//Definition of member function findNumOfDays.
void NumDays::findNumOfDays() 
{
	bool keepLooping = true;
	do
	{
		if (hours < 0)
		{
			cout << "Enter a positive value." << endl;
			cin >> hours;
		}
		else
		{
			days = hours / 8;
			keepLooping = false;
		}
	}
	while (keepLooping);
}
// Overloaded + operator.
NumDays NumDays::operator + (const NumDays &add)
{
	NumDays temp;
	temp.hours = hours + add.hours;
	temp.findNumOfDays();
	return temp;
}
// Overloaded - operator.
NumDays NumDays::operator - (const NumDays &sub)
{
	NumDays temp;
	temp.hours = abs(hours - sub.hours); 
	temp.findNumOfDays();
	return temp;
}
// Overloaded prefix ++ operator.
NumDays NumDays::operator++()
{
	++hours;
	findNumOfDays();
	return NumDays(hours);
}
// Overloaded postfix ++ operator.
NumDays NumDays::operator++(int)
{
	//NumDays temp(days,hours);
	hours++;
	findNumOfDays();
	return NumDays(hours);
}
// Overloaded prefix -- operator.
NumDays NumDays::operator--()
{
	--hours;
	findNumOfDays();
	return NumDays(hours);
}
// Overloaded postfix -- operator.
NumDays NumDays::operator--(int)
{
	NumDays temp(days, hours);
	hours--;
	findNumOfDays();
	return temp;
}