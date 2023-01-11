#ifndef DOCTORAL_H
#define DOCTORAL_H

#include "Master.h"

class Doctoral : public Master
{
public:
	Doctoral(int, int, int, int ,const string&, const string&, const string&, const string&);
	
	void setNOAPhd(int);
	void setNOPPhd(int);
	
	int getNOAPhd(void)const;	
	int getNOPPhd(void)const;
	
	virtual void printResume(void)const;
	virtual double performance(void);

	~Doctoral();
private:
	int NOAPhd, NOPPhd;
};

#endif