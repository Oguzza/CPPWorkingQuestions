#include "Sine.h"
#include <iostream>
#include <iomanip>
#include <stdexcept>
#include <cmath>
using namespace std;

	Sine::Sine(double ang, double val)
	:angle(ang), value(val)
	{
		
	}
	Sine Sine::operator + (const Sine & B){
		return Sine( angle + B.angle, 
		sin(angle*M_PI/180)*cos(B.angle*M_PI/180) + cos(angle*M_PI/180)*sin(B.angle*M_PI/180));
	}
	Sine Sine::operator - (const Sine &B){
		return Sine( angle + B.angle, 
		sin(angle*M_PI/180)*cos(B.angle*M_PI/180) - cos(angle*M_PI/180)*sin(B.angle*M_PI/180));		
	}
	Sine Sine::operator * (const Sine &B){
		double value = ( sin((90-(angle-B.angle))*M_PI/180) - sin((90-(angle+B.angle))*M_PI/180) ) / 2;
		return Sine( asin(value)*180/M_PI, value);
	}
	Sine Sine::operator ++ (){
		angle = angle + 1;
		value = sin(angle*M_PI/180);
		return *this;
	}
	Sine Sine::operator ++ (int){
		Sine temp(angle, value);
		
		angle = angle + 1;
		value = sin(angle*M_PI/180);
		return temp;
	}
	
	bool operator == (const Sine &s1, const Sine &s2){
		if(s1.angle == s2.angle){
			return true;
		}else{
			return false;
		}
	}
	bool operator != (const Sine &s1, const Sine &s2){
		return !(s1==s2);
	}
	bool operator < (const Sine &s1, const Sine &s2){
		if(s1.value < s2.value){
			return true;
		}else{
			return false;
		}		
	}
	bool operator > (const Sine &s1, const Sine &s2){
		return !(s1<s2);
	}
	
	ostream &operator<<(ostream &output, const Sine & A){
		output << "sin("<<A.angle<<")= "<<A.value;
		
		return output;
	}
	istream &operator>>(istream &input, Sine &A){
		input.ignore(4);
		input>>setw(2)>>A.angle;
		if(A.angle >= 0 && A.angle <= 90){	
			A.value = sin(A.angle*M_PI/180);
			return input;
		}else{
			throw invalid_argument("Angle must be between 0-90 degree\n\n");
		}
		
	}
