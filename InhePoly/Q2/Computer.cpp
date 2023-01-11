#include "Computer.h"
#include <iostream>
using namespace std;

Computer::Computer(const string& Cpu, int Ram, int Weight, int Price)
:cpu(Cpu), ram(Ram), weight(Weight), price(Price)
{
}
	
void Computer::setCpu(const string& Cpu){
	cpu = Cpu;
}
void Computer::setRam(int Ram){
	ram = Ram;
}
void Computer::setWeight(int Weight){
	weight = Weight;
}
void Computer::setPrice(int Price){
	price = Price;
}

string Computer::getCpu(void)const{
	return cpu;
}
int Computer::getRam(void)const{
	return ram;
}
int Computer::getWeight(void)const{
	return weight;
}
int Computer::getPrice(void)const{
	return price;
}
	
void Computer::printComputer()const{
	cout<<"Initialzer for "<< getRam() <<" GB "<< getCpu();
	cout<< "\nRAM: "<< getRam() <<" GB"
		<<"\nCPU: "<< getCpu()
		<<"\nWeight: "<< getWeight()<<" gram"
		<<"\nPrice: "<<getPrice()<<" TL";
}

Computer::~Computer(){
	
}