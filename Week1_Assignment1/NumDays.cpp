//Implementation file for the NumDays class
#include <iostream>
#include "NumDays.h"
using namespace std;

//Definition os member function findNumOfDays.
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
NumDays NumDays::operator++()
{
	++hours;
	findNumOfDays();
	return *this;
}
NumDays NumDays::operator++(int)
{
	NumDays temp(days,hours);
	hours++;
	findNumOfDays();
	return temp;
}
NumDays NumDays::operator--()
{
	--hours;
	findNumOfDays();
	return *this;
}
NumDays NumDays::operator--(int)
{
	NumDays temp(days, hours);
	hours--;
	findNumOfDays();
	return temp;
}