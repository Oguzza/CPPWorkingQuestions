#include "Master.h"
#include <iostream>
#include<string>
#include<stdexcept>
using namespace std;

Master::Master(int noa, int nop,const string& fn, const string& ln, const string& uni, const string& title)
:Bachelor(fn,ln,uni,title)
{
	setNOAMaster(noa);
	setNOPMaster(nop);
}
	
void Master::setNOAMaster(int noa){
	if(noa>0)
		NOAMaster = noa;
	else 
		throw invalid_argument("Must be >0");
	
}
void Master::setNOPMaster(int nop){
	if(nop>0)
		NOPMaster = nop;
	else 
		throw invalid_argument("Must be >0");
}
	
int Master::getNOAMaster(void)const{
	return NOAMaster;
}
int Master::getNOPMaster(void)const{
	return	NOPMaster;
}
	
void Master::printResume(void)const{
	Bachelor::printResume();
	cout<<"NOA Master: "<<getNOAMaster()
		<<"\nNOP Master: "<<getNOPMaster();
}
double Master::performance(void){
	return 12.0 + (6.2*(double)NOAMaster) + (14.5*(double)NOPMaster);
}
Master::~Master()
{
}