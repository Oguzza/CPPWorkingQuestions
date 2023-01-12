#ifndef DATASPEC_H
#define DATASPEC_H
#include <iostream>
#include <string>

using namespace std;

class DataSpec
{
public:
	DataSpec(string,double x = 0.0,double y = 0.0,double z = 0.0);
	void setFX(double);
	void setFY(double);
	void setFZ(double);
	void setName(string);
	double getFX()const;
	double getFY()const;	
	double getFZ()const;
	string getName()const;
	void print()const;
private:
	double FeatureX,FeatureY,FeatureZ;
	string dataName;
};

#endif
