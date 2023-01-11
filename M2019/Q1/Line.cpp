#include "Line.h"
#include<string>
#include<iostream>
#include<cmath>
using namespace std;

	Line::Line(string n, double sx, double sy, double ex, double ey)
	{
		setStartPoint(sx,sy);
		setEndPoint(ex,ey);
		setName(n);
		cout<<"Line object constructor: "<<getName()<<endl;
	}
	Line::~Line(){
		cout<<"Line object destructor: "<<getName()<<endl;
	}
	void Line::setStartPoint(double a,double b){
		sX = a;
		sY = b;
	}
	void Line::setEndPoint(double a,double b){
		eX = a;
		eY = b;
	}
	void Line::setName(string n){
		name = n;
	}
	string Line::getName()const{
		return name;
	}
	void Line::printStartPoint()const{
		cout<<"("<<sX<<","<<sY<<")";
	}
	void Line::printEndPoint()const{
		cout<<"("<<eX<<","<<eY<<")";
	}
	void Line::print()const{
		printStartPoint();
		cout<<"-----"<<getName()<<"------>";
		printEndPoint();
		cout<<endl;
	
	}
	Line &Line::addInto (const Line &b){
		
		eX = eX + (b.eX-b.sX);
		eY = eY + (b.eY-b.sY);
		
		return *this;
	}
	Line Line::subtract(const Line &b){
		Line temp("dump");
		temp.setEndPoint(eX-(b.eX-b.sX),eY-(b.eY-b.sY));
		temp.setStartPoint(sX,sY);
		return temp;
	}
	 
	
	void dotProduct(const Line &l1, const Line &l2){
		
		double dotPro;
		dotPro = ((l1.eX-l1.sX) * (l2.eX-l2.sX)) + ((l1.eY-l1.sY) * (l2.eY-l2.sY));
		cout<<"Dot product of"<<endl;
		l1.print();
		l2.print();
		cout<<"vectors "<<dotPro<<endl;
	} 
