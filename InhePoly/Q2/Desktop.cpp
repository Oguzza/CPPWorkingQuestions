#include "Desktop.h"
#include <iostream>
using namespace std;

Desktop::Desktop(const string& Cpu, int Ram, int Weight, int Price, int psu, bool mon)
:Computer(Cpu,Ram,Weight,Price)
{
	setPowerSupply(psu);
	setMonitor(mon);
}
	
void Desktop::setPowerSupply(int psu){
	powerSupply = psu;
}
void Desktop::setMonitor(bool mon){
	monitor = mon;
}
	
int Desktop::getPowerSupply(void)const{
	return powerSupply;
}
bool Desktop::getMonitor(void)const{
	return monitor;
}
	
void Desktop::printComputer() const{
	Computer::printComputer();
	cout<< "\nPower Supply: "<< getPowerSupply() <<" Watt"
		<<"\nMonitor: "<< getMonitor();
}
double Desktop::performance(){
	return (0.3*(10000/(double)getPrice()))+(0.7*(64/(double)getRam()));
}


Desktop::~Desktop()
{
}