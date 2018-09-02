#ifndef NUMDAYS_H
#define NUMDAYS_H
// The NumDays class stores a value that will 
//convert the number of worked hours to a number of days
class NumDays
{
private:
	double hours; // To hold a number of hours.
	double days;
	void findNumOfDays(); // To hold a number of days.
	
public:
	NumDays();
	//Constractor
	NumDays(double h, double d)
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
	NumDays operator++();
	NumDays operator++(int);

	//NumDays operator -- ();
};

#endif