#pragma once
#include <iostream>
#include <string>
using namespace std;
class person
{
private :
	string  name;
	string gender;
	float age;
public:
	person();
	person(string n, string g, float a);
	
	void setage(float a);

	float getage(); 
	
	void setname(string n);
	
	string getname();
	
	void setgender(string g);
	
	string getgender();
	
	void display();

};

