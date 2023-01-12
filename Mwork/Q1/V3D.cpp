#include "V3D.h"
#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>

using namespace std;

	int V3D::count = 0;

	V3D::V3D(const string n, double x, double y, double z)
	:name(n)
	{
		count++;
		setX(x);
		setY(y);
		setZ(z);
		cout<<"V3D object constructor:"<<name<<endl;
	}
	V3D::~V3D(){
		count--;
		cout<<"V3D object destructor:"<<name<<endl;
	}
	void V3D::setX(double a){
		x = a;
	}
	void V3D::setY(double a){
		y = a;
	}
	void V3D::setZ(double a){
		z = a;
	}
	double V3D::getX()const{
		return x;
	}
	double V3D::getY()const{
		return y;
	}
	double V3D::getZ()const{
		return z;
	}
	string V3D::getName()const{
		return name;
	}
	int V3D::getCount(){
		return count;
	}
	void V3D::print()const{
		cout<<getName()<<"("<<getX()<<","<<getY()<<","<<getZ()<<")"<<endl;
	}
	V3D &V3D::algebra(const V3D &b){
		
		x = x - 4*b.getX();
		y = y - 4*b.getY();
		z = z - 4*b.getZ();
		
		return *this;
	}
	V3D V3D::crossProduct(const V3D &b){
		
		V3D temp("dump");
		
		temp.setX( y*b.getZ() - z*b.getY() );
		temp.setY( z*b.getX() - x*b.getZ() );
		temp.setZ( x*b.getY() - y*b.getX() );
		
		return temp;
	}
	
	void angle(const V3D &v1, const V3D &v2){
		double ang;
		double dotpro = (v1.getX()*v2.getX()) + (v1.getY()*v2.getY()) + (v1.getZ()*v2.getZ());
		double magV1 = sqrt( pow(v1.getX(),2) + pow(v1.getY(),2) + pow(v1.getZ(),2) ); 
		double magV2 =sqrt( pow(v2.getX(),2) + pow(v2.getY(),2) + pow(v2.getZ(),2) );
		ang = acos(( dotpro ) / ( magV1 * magV2 ))*( 180/M_PI );
		
		cout<<"dot product: "<<dotpro<<endl;
		cout<<"magnitude of V1: "<<magV1<<", magnitude of V2: "<<magV2<<endl;
		cout<<"The angle beetween"<<endl;
		v1.print();
		v2.print();
		cout<<endl;
		cout<<"vectors: "<<ang<<endl;
	}
	
