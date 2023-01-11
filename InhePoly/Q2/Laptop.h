#ifndef LAPTOP_H
#define LAPTOP_H

#include "Computer.h"
#include<string>
using namespace std;

class Laptop : public Computer
{
public:
	Laptop(const string&, int = 0, int = 0, int = 0, int = 0, bool = 0);
	
	void setBattery(int);
	void setTouchpad(bool);
	
	int getBattery(void)const;
	bool getTouchpad(void)const;
	
	virtual void printComputer() const;
	virtual double performance();
	
	~Laptop();
private:
	int battery;
	bool touchpad;
};

#endif