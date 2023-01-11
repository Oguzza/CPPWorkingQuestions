#include "Doctoral.h"
#include <iostream>
#include<string>
#include<stdexcept>
using namespace std;

Doctoral::Doctoral(int noap, int nopp ,int noa, int nop,const string& fn, const string& ln, const string& uni, const string& title)
:Master(noa,nop,fn,ln,uni,title)
{
	setNOAPhd(noap);
	setNOPPhd(nopp);
}
	
void Doctoral::setNOAPhd(int noap){
	if(noap>0)
		NOAPhd = noap;
	else 
		throw invalid_argument("Must be >0");
}
void Doctoral::setNOPPhd(int nopp){
	if(nopp>0)
		NOPPhd = nopp;
	else 
		throw invalid_argument("Must be >0");
}
	
int Doctoral::getNOAPhd(void)const{
	return NOAPhd;
}
int Doctoral::getNOPPhd(void)const{
	return NOPPhd;
}
	
void Doctoral::printResume(void)const{
	Master::printResume();
	cout<<"\nNOA Phd: "<<getNOAPhd()
		<<"\nNOP Phd: "<<getNOPPhd();
}
double Doctoral::performance(void){
	return Master::performance() + (8.5*(double)getNOAPhd()) + (26.5*(double)getNOPPhd());
}
Doctoral::~Doctoral()
{
}