/*Name: Lilit Khamalyan
  Class: CISS 243
  Date: 09/01/2018
*/
#include <iostream>
#include "NumDays.h"
using namespace std;
int main()
{
	double hours; // To hold input for hours.
	// Get the number of worked hours.
	cout << "Enter a number of worked hours and the program will convert it to a number of days." << endl;
	cin >> hours;
	NumDays days(hours);  
	cout << "The number of worked days = " << days.getDays() << endl; // Returns the number of days. 
	cout << "\n\n";
	// Get the first and second number of worked hours. 
	cout << "Now program will add, subtracte, and convert two different worked hours into a number of worked days." << endl;
	cout << "Enter the first number of worked hours." << endl;
	cin >> hours;
	NumDays first(hours);
	cout << "Enter the second number of worked hours." << endl;
	cin >> hours;
	NumDays second(hours);
	NumDays third = first + second; // Adds the first and second worked hours. 
	cout << "The sum of two different worked hours = " << third.getDays() << "days." << endl;
	third = first - second; 
	cout << "The difference of two different worked hours = " << third.getDays() << "days"<< endl;
	cout << "\n\n";
	cout << "Demonstrating prefix ++ operator." << endl;
	cout << "Enter hour." << endl;
	cin >> hours;
	first.setHours(hours);
	for (int i = 0; i < 3; i++)
	{
		++first;
		cout << "Hours: " << first.getHours();
		cout << " Days: " << first.getDays() << endl;
	}
	cout << "Demonstrating postfix ++ operator." << endl;
	for (int i = 0; i < 3; i++)
	{
		first++;
		 cout << "Hours: " << first.getHours();
		 cout << " Days: " << first.getDays() << endl;
	}
	cout << "Demonstrating prefix -- operator." << endl;
	cout << "Enter hour." << endl;
	cin >> hours;
	first.setHours(hours);
	for (int i = 0; i < 3; i++)
	{
		--first;
		cout << "Hours: " << first.getHours();
		cout << " Days: " << first.getDays() << endl;
	}
	cout << "Demonstrating postfix -- operator." << endl;
	for (int i = 0; i < 3; i++)
	{
		first--;
		cout << "Hours: " << first.getHours();
		cout << " Days: " << first.getDays() << endl;
	}
	return 0;
}