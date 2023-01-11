#include "Plane.h"
#include "Points.h"
#include<string>
#include<cmath>
#include<iostream>
using namespace std;


	Plane::Plane(const Points &po1, const Points &po2, const Points &po3, double x, double y, double z)
	:p1(po1), p2(po2), p3(po3), angleX(x), angleY(y), angleZ(z)
	{
	}
	double Plane::getAngleX()const{
		return angleX;
	}
	double Plane::getAngleY()const{
		return angleY;
	}
	double Plane::getAngleZ()const{
		return angleZ;
	}
	void Plane::print()const{
		cout<<"Angle X: "<<angleX<<endl;
		cout<<"Angle Y: "<<angleY<<endl;
		cout<<"Angle Z: "<<angleZ<<endl;
	}
	void Plane::calculateAngles(){
		double nx = (p2.getY()-p1.getY()) * (p3.getZ()-p1.getZ()) - (p2.getZ()-p1.getZ()) * (p3.getY()-p1.getY());
		double ny = (p2.getZ()-p1.getZ()) * (p3.getX()-p1.getX()) - (p2.getX()-p1.getX()) * (p3.getZ()-p1.getZ());
		double nz = (p2.getX()-p1.getX()) * (p3.getY()-p1.getY()) - (p2.getY()-p1.getY()) * (p3.getX()-p1.getX());
		
		angleX = acos( nx / ( sqrt(pow(nx,2)+pow(ny,2)+pow(nz,2) ) ) )*(180/M_PI);
		angleY = acos( ny / ( sqrt(pow(nx,2)+pow(ny,2)+pow(nz,2) ) ) )*(180/M_PI);
		angleZ = acos( nz / ( sqrt(pow(nx,2)+pow(ny,2)+pow(nz,2) ) ) )*(180/M_PI);		
	}
	bool Plane::compare(const Plane &p1){
		if( abs(angleX-p1.angleX)<10 && abs(angleY-p1.angleY)<10 && abs(angleZ-p1.angleZ)<10  ){
			return true;
		}else{
			return false;
		}
	}
	
	
	

