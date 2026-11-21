#pragma once
#include<string>
using namespace std;
class car
{
private:
	string maker;
	int model;
	string color;
public:
	void setmaker(string m);
	string getmaker();
	void setmodel(int n);
	int getmodel(); 
	car(string m,int n);
	car();
	~car();
};

