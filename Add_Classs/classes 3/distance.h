#pragma once
class Distance
{
private :
	int feet;
	float inches;
	static int count ;
public:
	Distance();
	Distance(int f, float i);
	void setdistance(int f, float i);
	void print();
	Distance add_dis(Distance d);
	int getcount();
	~Distance();
};

