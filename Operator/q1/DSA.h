#ifndef DSA_H
#define DSA_H

#include <iostream>

using namespace std;

class DSA
{
	friend bool operator==(const DSA &, const DSA &);
	friend bool operator!=(const DSA &, const DSA &);
	friend bool operator<(const DSA &, const DSA &);
	friend bool operator>(const DSA &, const DSA &);
	
	friend ostream &operator<<(ostream &, const DSA &);
	friend istream &operator>>(istream &, DSA &);
	
public:
	DSA(double = 0.0, double = 0.0, double = 0.0);
	DSA operator + (const DSA &);
	DSA operator - (const DSA &);
	DSA operator * (const DSA &);
	DSA operator / (const DSA &);
	DSA operator ++ ();
	DSA operator ++ (int);
	

private:
	double xNM1, xN, xNP1;
};

#endif
