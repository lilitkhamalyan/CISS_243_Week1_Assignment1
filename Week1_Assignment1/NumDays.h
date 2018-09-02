#ifndef NUMDAYS_H
#define NUMDAYS_H
// The NumDays class stores a value that will 
//convert the number of worked hours to a number of days.
// The class shows use of Overloaded + and Overloaded - operators.
// The class shows use of Overloaded prefix++, Overloaded postfix++, Overloaded prefix--, and Overloaded postfix--.
class NumDays
{
private:
	double hours; // To hold a number of hours.
	double days; // To hold a number of days.
	void findNumOfDays(); // Defined in NumDays.cpp
	
public:
	//Constractors
	NumDays(double h = 0, double d = 0)
	{
		hours = h;
		days = d;
		findNumOfDays();
	}
	//Mutator functions
	void setHours(double h)
	{
		hours = h;
	}
	void setDays(double d)
	{
		days = d;
	}
	//Accessor functions
	double getHours() const
	{
		return hours;
	}
	double getDays() const
	{
		return days;
	}
	//overloaded operator  functions
	NumDays operator + (const NumDays &); // Overloaded +
	NumDays operator - (const NumDays &); // Overloaded - 
	NumDays operator++(); // Overloaded prefix++
	NumDays operator++(int); // Overloaded postfix++
	NumDays operator--(); // Overloaded prefix--
	NumDays operator--(int); // Overloaded postfix--
};
#endif