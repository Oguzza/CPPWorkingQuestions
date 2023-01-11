#ifndef PLANE_H
#define PLANE_H
#include "Points.h"
class Plane
{
public:
	Plane(const Points &po1, const Points &po2, const Points &po3, double x = 0.0, double y = 0.0, double z = 0.0);
	double getAngleX()const;
	double getAngleY()const;
	double getAngleZ()const;
	void print()const;
	void calculateAngles();
	bool compare(const Plane &p1);	
private:
	const Points p1, p2, p3;
	double angleX, angleY, angleZ;
	
};

#endif
