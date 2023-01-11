#ifndef COMPUTER_H
#define COMPUTER_H

#include<string>
using namespace std;

class Computer
{
public:
	Computer(const string&, int = 0, int = 0, int = 0);
	
	void setCpu(const string&);
	void setRam(int);
    void setWeight(int);
    void setPrice(int);

	string getCpu(void)const;
	int getRam(void)const;
    int getWeight(void)const;
    int getPrice(void)const;
	
	virtual void printComputer() const;
	virtual double performance() = 0;
	
	~Computer();
private:
	string cpu;
	int ram, weight, price;
};

#endif