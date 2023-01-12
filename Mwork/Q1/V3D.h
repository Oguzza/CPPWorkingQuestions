#ifndef V3D_H
#define V3D_H
#include<string>

using namespace std;

class V3D
{
friend void angle(const V3D &v1, const V3D &v2);
	
public:
	V3D(const string n, double x =0.0,double y =0.0,double z =0.0);
	~V3D();
	void setX(double);
	void setY(double);
	void setZ(double);
	double getX()const;
	double getY()const;
	double getZ()const;
	string getName()const;
	static int getCount();
	void print()const;
	V3D &algebra(const V3D &b);
	V3D crossProduct(const V3D &b);
private:
	double x,y,z;
	const string name;	
	static int count;
};

#endif
