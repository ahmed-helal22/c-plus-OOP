#include <iostream>
#include "car.h"
using namespace std;
int main()
{
	car c1;
	c1.setmaker("BMW");
	c1.setmodel(2030);
	cout << "this car is made by " << c1.getmaker() << "\n";
	cout << c1.getmodel()<<"\n";
	car c2("fiat", 2022);
	cout << "this car is made by " << c2.getmaker() << "\n";
	cout << c2.getmodel()<<"\n";
	return 0;
}

