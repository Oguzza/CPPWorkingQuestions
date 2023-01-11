#include "Bachelor.h"
#include <iostream>
#include<string>

using namespace std;

Bachelor::Bachelor(const string& fn, const string& ln, const string& uni, const string& title)
{
	setFirstName(fn);
	setLastName(ln);
	setUniversity(uni);
	setTitle(title);
}
	
void Bachelor::setFirstName(const string& fn){
	firstName = fn;
}
void Bachelor::setLastName(const string& ln){
	lastName = ln;
}
void Bachelor::setUniversity(const string& uni){
	university = uni;
}
void Bachelor::setTitle(const string& tit){
	title = tit;
}
	
string Bachelor::getFirstName(void)const{
	return firstName;
}
string Bachelor::getLastName(void)const{
	return lastName;
}
string Bachelor::getUniversity(void)const{
	return university;
}
string Bachelor::getTitle(void)const{
	return title;
}
	
void Bachelor::printResume(void)const{
	cout<<"Name: "<< getFirstName()
		<<"\nSurname: "<< getLastName()
		<<"\nUniversity: "<< getUniversity()
		<<"\nTitle: "<< getTitle()<<endl;
		
}
Bachelor::~Bachelor()
{
}