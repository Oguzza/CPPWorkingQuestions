#include "Laptop.h"
#include <iostream>
using namespace std;

Laptop::Laptop(const string& Cpu, int Ram, int Weight, int Price, int bat, bool tp)
:Computer(Cpu,Ram,Weight,Price)
{
	setBattery(bat);
	setTouchpad(tp);
}
	
void Laptop::setBattery(int bat){
	battery = bat;
}
void Laptop::setTouchpad(bool tp){
	touchpad = tp;
}
	
int Laptop::getBattery(void)const{
	return battery;
}
bool Laptop::getTouchpad(void)const{
	return touchpad;
}
	
void Laptop::printComputer() const{
	Computer::printComputer();
	cout<< "\nBattery: "<< getBattery()<<" cells"
		<<"\nTouchPad: "<< getTouchpad();
}
double Laptop::performance(){
	return (0.3*(10000/(double)getPrice()))+(0.7*(64/(double)getRam()));
}
Laptop::~Laptop()
{
}