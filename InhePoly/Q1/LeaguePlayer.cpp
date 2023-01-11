#include "LeaguePlayer.h"
#include <iostream>
#include <stdexcept>
using namespace std;

LeaguePlayer::LeaguePlayer(const string& fn, const string& ln, const string& n, int a, int nog, int now, int nol)
:Player(fn,ln,n,a)
{
	setNOG(nog);
	setNOW(now);
	setNOL(nol);
}
	
void LeaguePlayer::setNOG(int nog){
	
	if(nog>0)
		NOG = nog;
	else
		throw invalid_argument("Must be >0 ");
}
void LeaguePlayer::setNOW(int now){
	
	if(now>0)
		NOW = now;
	else
		throw invalid_argument("Must be >0 ");	
	
}
void LeaguePlayer::setNOL(int nol){
	
	if(nol>0)
		NOL = nol;
	else
		throw invalid_argument("Must be >0 ");	
	
}

int LeaguePlayer::getNOG(void)const{
	return NOG;
}
int LeaguePlayer::getNOW(void)const{
	return NOW;
}
int LeaguePlayer::getNOL(void)const{
	return NOL;
}
	
void LeaguePlayer::print() const{
	cout<<"League Player: ";
	Player::print();
	cout<<"\nNOG: "<<getNOG()
		<<"\nNOW: "<<getNOW()
		<<"\nNOL: "<<getNOL(); 
}
int LeaguePlayer::points() const{
	return (10*getNOG()) + (3*getNOW()) - (2*getNOL());
}
LeaguePlayer::~LeaguePlayer()
{
}