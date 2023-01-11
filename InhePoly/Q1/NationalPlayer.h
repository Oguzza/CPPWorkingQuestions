#ifndef NATIONALPLAYER_H
#define NATIONALPLAYER_H

#include "LeaguePlayer.h"

class NationalPlayer : public LeaguePlayer
{
public:
	NationalPlayer(const string&, const string&, const string&, int = 0, int = 0, int = 0, int = 0, int = 0);
	
	void setNNOG(int);
	
	int getNNOG(void)const;
	
	virtual void print() const;
	virtual int points() const;
	
	~NationalPlayer();
private:
	int NNOG;
};

#endif