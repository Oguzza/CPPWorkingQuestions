#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(const string& fn, const string& ln, const string& n, int a)
:firstName(fn), lastName(ln), nation(n), age(a)
{
}
	
void Player::setFirstName(const string& fn){
	firstName = fn;
}
void Player::setlastName(const string& ln){
	lastName = ln;
}
void Player::setNation(const string& n){
	nation = n;
}
void Player::setAge(int a){
	age = a;
}

string Player::getFirstName(void)const{
	return firstName;
	
}
string Player::getlastName(void)const{
	return lastName;
}
string Player::getNation(void)const{
	return nation;
}
int Player::getAge(void)const{
	return age;
}
	
void Player::print() const{
	cout<<getFirstName()<<" "<<getlastName()
		<<"\nNation: "<<getNation()
		<<"\nAge: "<<getAge();

}
Player::~Player()
{
}