#pragma once
#include <iostream>
#include <string>
using namespace std;
#include "person.h"
class student :public person
{
private:
	int level;

public:
	student()
	{
		level = 0;
	}
	student(string n,string g,float a,int l):person(n,g,a)
	//استدعينا هنا البيرسون ولاحظ وضع القيم به مباشره 
	{
		level = l;
	};
	void setlevel(int l)
	{
		level = l;
	}
	void display()
	{
		person::display();
		cout << "level = " << level;
	}

};

