#ifndef PLAYER_H
#define PLAYER_H

#include<string>
using namespace std;

class Player
{
public:
	Player(const string&, const string&, const string&, int = 0);
	
	void setFirstName(const string&);
	void setlastName(const string&);
	void setNation(const string&);
	void setAge(int);

	string getFirstName(void)const;
	string getlastName(void)const;
	string getNation(void)const;
	int getAge(void)const;
	
	virtual void print() const;
	virtual int points() const = 0;
	
	~Player();
private:
	string firstName,lastName, nation;
	int age;
};

#endif