#ifndef DESKTOP_H
#define DESKTOP_H

#include "Computer.h"

class Desktop : public Computer
{
public:
	Desktop(const string&, int = 0, int = 0, int = 0, int = 0, bool = 0);
	
	void setPowerSupply(int);
	void setMonitor(bool);
	
	int getPowerSupply(void)const;
	bool getMonitor(void)const;
	
	virtual void printComputer() const;
	virtual double performance();
	
	~Desktop();
private:
	int powerSupply;
	bool monitor;
};

#endif