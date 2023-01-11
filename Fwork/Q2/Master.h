#ifndef MASTER_H
#define MASTER_H

#include "Bachelor.h"

class Master : public Bachelor
{
public:
	Master(int, int ,const string&, const string&, const string&, const string&);
	
	void setNOAMaster(int);
	void setNOPMaster(int);
	
	int getNOAMaster(void)const;	
	int getNOPMaster(void)const;
	
	virtual void printResume(void)const;
	virtual double performance(void);
	
	~Master();
private:
	int NOAMaster, NOPMaster;
};

#endif