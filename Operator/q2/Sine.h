#ifndef SINE_H
#define SINE_H
#include <iostream>

using namespace std;

class Sine
{
	friend bool operator == (const Sine &, const Sine &);
	friend bool operator != (const Sine &, const Sine &);
	friend bool operator < (const Sine &, const Sine &);
	friend bool operator > (const Sine &, const Sine &);
	
	friend ostream &operator<<(ostream &, const Sine &);
	friend istream &operator>>(istream &, Sine &);
	
public:
	Sine(double = 0.0, double = 0.0);
	Sine operator + (const Sine &);
	Sine operator - (const Sine &);
	Sine operator * (const Sine &);
	Sine operator ++ ();
	Sine operator ++ (int);
private:
	double angle, value;
	
};

#endif
