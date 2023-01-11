#ifndef LINE_H
#define LINE_H
#include<string>

using namespace std;

class Line
{
	friend void dotProduct(const Line &l1, const Line &l2);
	
public:
	Line(string n, double sx = 0.0, double sy = 0.0, double ex = 0.0, double ey = 0.0);
	~Line();
	void setStartPoint(double,double);
	void setEndPoint(double,double);
	void setName(string n);
	string getName()const;
	void print()const;
	Line &addInto (const Line &b);
	Line subtract(const Line &b);
private:
	void printStartPoint()const;
	void printEndPoint()const;
	double sX,sY,eX,eY;
	string name;
};

#endif
