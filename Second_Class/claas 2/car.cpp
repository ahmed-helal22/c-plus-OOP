#include "car.h"
#include<iostream>
void car::setmaker(string m)
{
	maker = m;
}
string car::getmaker()
{
	return maker;
}
void car::setmodel(int n)
{
	model = n;
}

int car::getmodel()
{
	return model;
}
car::car(string m,int n):maker("Honda"),model(2019)
{
}
car::car() :maker("Honda"), model(2019)
{
}

car::~car()
{
	cout << "ended";
}
