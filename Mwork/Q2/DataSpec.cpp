#include "DataSpec.h"
#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

	DataSpec::DataSpec(string n,double x,double y,double z)
	{
		setFX(x);
		setFY(y);
		setFZ(z);
		setName(n);
		cout<<"DataSpec constructor: "<<getName()<<endl;
	}
	void DataSpec::setFX(double a){
		FeatureX = a;
	}
	void DataSpec::setFY(double a){
		FeatureY = a;
	}
	void DataSpec::setFZ(double a){
		FeatureZ = a;
	}
	void DataSpec::setName(string a){
		dataName = a;
	}
	double DataSpec::getFX()const{
		return FeatureX;
	}
	double DataSpec::getFY()const{
		return FeatureY;
	}
	double DataSpec::getFZ()const{
		return FeatureZ;
	}
	string DataSpec::getName()const{
		return dataName;
	}
	void DataSpec::print()const{
		cout<<fixed<<setprecision(2)<<getName()<<"("<<getFX()<<","<<getFY()<<","<<getFZ()<<")"<<endl;
	}
