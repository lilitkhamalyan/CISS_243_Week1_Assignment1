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

	return 0;

}