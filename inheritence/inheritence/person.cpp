#include "person.h"

person::person()
{
	name = "unknown";
	gender = "unknown";
	age = 0;
}

person::person(string n, string g, float a) {
	name = n;
	gender = g;
	age = a;
}

void person::setage(float a) {
	age = a;
}

float person::getage()
{
	return age;
}

void person::setname(string n)
{
	name = n;
}

string person::getname()
{
	return name;
}

void person::setgender(string g)
{
	gender = g;
}

string person::getgender()
{
	return gender;
}

void person::display()
{
	cout << "name = " << name << " " << "gender = " << gender << " " << "age = " << age << "\n";
}




