#include <iostream>
#include <string>
using namespace std;
#include"student.h"
int main()
{
	student s1;	
	s1.setlevel(2);
	s1.setage(19);
	s1.setname("King Ahmed");
	s1.setgender("Male");
	s1.display();
	return 0;
}
