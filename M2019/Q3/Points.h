#ifndef POINTS_H
#define POINTS_H

#include<string>

using namespace std;


class Points
{
public:
	Points(const string n, double x = 0.0, double y = 0.0, double z = 0.0);
	void setX(double);
	void setY(double);	
	void setZ(double);	
	void setName(string);
	double getX()const;
	double getY()const;
	double getZ()const;
	string getName()const;
	void print()const;	
private:
	double x,y,z;
	string name;
};

#endif
