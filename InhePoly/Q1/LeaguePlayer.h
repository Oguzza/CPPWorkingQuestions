#ifndef LEAGUEPLAYER_H
#define LEAGUEPLAYER_H

#include "Player.h"

class LeaguePlayer : public Player
{
public:
	LeaguePlayer(const string&, const string&, const string&, int = 0, int = 0, int = 0, int = 0);
	
	void setNOG(int);
	void setNOW(int);
	void setNOL(int);

	int getNOG(void)const;
	int getNOW(void)const;
	int getNOL(void)const;
	
	virtual void print() const;
	virtual int points() const;
	

	~LeaguePlayer();
private:
	int NOG, NOW, NOL;
};

#endif