#include "NationalPlayer.h"
#include <iostream>
#include <stdexcept>
using namespace std;

NationalPlayer::NationalPlayer(const string& fn, const string& ln, const string& n, int a, int nog, int now, int nol, int nnog)
:LeaguePlayer(fn,ln,n,a,nog,now,nol)
{
	setNNOG(nnog);
}
	
void NationalPlayer::setNNOG(int nnog){
	
	if(nnog>0)
		NNOG = nnog;
	else
		throw invalid_argument("Must be >0 ");	
	
}
	
int NationalPlayer::getNNOG(void)const{
	return NNOG;
}
	
void NationalPlayer::print() const{
	cout<<"National Player and ";
	LeaguePlayer::print();
		cout<<"\nNNOG: "<<getNNOG();
	
}
int NationalPlayer::points() const{
	return LeaguePlayer::points() + 15*getNNOG();
}
NationalPlayer::~NationalPlayer()
{
}