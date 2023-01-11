#include "Points.h"
#include<string>
#include<iostream>
using namespace std;



	Points::Points(const string n, double x, double y, double z){
		setX(x);
		setY(y);
		setZ(z);
		setName(n);
		cout<<"Point object constructor for "<<getName()<<endl;
	}
	void Points::setX(double a){
		x = a;
	}
	void Points::setY(double a){
		y = a;
	}	
	void Points::setZ(double a){
		z = a;
	}
	void Points::setName(string n){
		name = n;
	}
	double Points::getX()const{
		return x;
	}
	double Points::getY()const{
		return y;
	}
	double Points::getZ()const{
		return z;
	}
	string Points::getName()const{
		return name;
	}
	void Points::print()const{
		cout<<getName()<<"("<<getX()<<","<<getY()<<","<<getZ()<<")"<<endl;
	}
