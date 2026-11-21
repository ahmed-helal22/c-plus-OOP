#include "Distance.h"
#include <iostream>
using namespace std;
int Distance::count = 0;
Distance::Distance()
{
	feet = 0;inches = 0;count++;
}

Distance::Distance(int f, float i) :feet (f), inches (i)
{
	count++;
}

void Distance::setdistance(int f, float i) 
{
	feet = f;inches = i;count++;
}

void Distance::print()
{
	cout << "feet =" << feet << "\n";
	cout << "inches =" << inches << "\n";
}

Distance Distance::add_dis(Distance d)
{
	Distance result;
	result.feet = feet + d.feet;
	result.inches= inches + d.inches;
	return result;
}

int Distance::getcount()
{
	return count;
}

Distance::~Distance()
{
	count--;
}
