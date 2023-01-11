#ifndef BACHELOR_H
#define BACHELOR_H
#include<string>

using namespace std;

class Bachelor
{
public:
	Bachelor(const string&, const string&, const string&, const string&);
	
	void setFirstName(const string&);
	void setLastName(const string&);
	void setUniversity(const string&);
	void setTitle(const string&);
	
	string getFirstName(void)const;
	string getLastName(void)const;
	string getUniversity(void)const;
	string getTitle(void)const;
	
	virtual void printResume(void)const;
	virtual double performance(void) = 0;
	
	~Bachelor();
private:
	string firstName, lastName, university, title;
};

#endif