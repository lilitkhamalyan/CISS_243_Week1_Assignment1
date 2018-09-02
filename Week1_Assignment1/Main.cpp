#include <iostream>
#include "NumDays.h"
using namespace std;
int main()
{
	double hours, days;
	NumDays first, second, third;
	cout << "Enter hours" << endl;
	cin >> hours;
	first.setHours(hours);
	cout << "Enter hours2" << endl;
	cin >> hours;
	second.setHours(hours);
	third = first + second;
	cout << third.getDays() << endl;
	cout << "Enter hour and the program will demonstrate prefix ++ operator." << endl;
	cin >> hours;
	first.setHours(hours);
	for (int i = 0; i < 8; i++)
	{
		++first;
		cout << "first: " << first.getHours() << "hours, " << endl;
	
	}
	cout << "Enter hour and the program will demonstrate postfix ++ operator." << endl;
	cin >> hours;
	for (int i = 0; i < 8; i++)
	{
		 first++;
		 cout << "first: " << first.getHours() << "hours," << endl;
	}
	return 0;

}