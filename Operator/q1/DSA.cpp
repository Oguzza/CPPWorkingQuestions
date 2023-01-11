#include "DSA.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdexcept>
using namespace std;


	bool operator==(const DSA &op1, const DSA &op2){
		if(op1.xNM1 == op2.xNM1 && op1.xN == op2.xN && op1.xNP1 == op2.xNP1){
			return true;
		}else{
			return false;
		}
	}
	bool operator!=(const DSA &op1, const DSA &op2){
		return !(op1 == op2);
	}
	bool operator<(const DSA &op1, const DSA &op2){
		double mag1 = sqrt(pow(op1.xNM1,2) + pow(op1.xN,2) + pow(op1.xNP1,2));
		double mag2 = sqrt(pow(op2.xNM1,2) + pow(op2.xN,2) + pow(op2.xNP1,2));
		
		if(mag1 < mag2){
			return true;
		}else{
			return false;
		}
	}
	bool operator>(const DSA &op1, const DSA &op2){
		return !(op1 < op2);
		
	}
	
	ostream &operator<<(ostream &output, const DSA &o){
		output << o.xNM1 <<"..."<< o.xN <<"..."<<o.xNP1;
		
		return output;
	}
	istream &operator>>(istream &input, DSA &o){
		input >>setw(1)>>o.xNM1; /// why setw(1) 
		input.ignore(3); // ignore 3 dash
		input >>setw(1)>>o.xN;
		input.ignore(3); // ignore 3 dash
		input >>setw(1)>>o.xNP1;
		
		return input;
	}

	DSA::DSA(double xnm1, double xn, double xnp1)
	:xNM1(xnm1), xN(xn), xNP1(xnp1)
	{
	}
	DSA DSA::operator + (const DSA &op2){
		return DSA( xNM1+op2.xNM1, xN+op2.xN, xNP1+op2.xNP1 );
	}
	DSA DSA::operator - (const DSA &op2){
		return DSA( xNM1-op2.xNM1, xN-op2.xN, xNP1-op2.xNP1 );
	}
	DSA DSA::operator * (const DSA &op2){
		return DSA( xNM1*op2.xNM1, xN*op2.xN, xNP1*op2.xNP1 );
	}
	DSA DSA::operator / (const DSA &op2){ /// BURAYI SOR!!
		if(op2.xNM1 != 0 && op2.xN != 0 && op2.xNP1 != 0){
			return DSA( xNM1/op2.xNM1, xN/op2.xN, xNP1/op2.xNP1 );
		}else{
			throw invalid_argument("Zero division cannot be allowed\n\n");
			//return DSA( op2.xNM1/xNM1, op2.xN/xN, op2.xNP1/xNP1 );
		}
		
	}
	DSA DSA::operator ++ (){	
	
		xNP1 = xN;
		xN = xNM1;
		xNM1 = 0.0;
	
		return *this;
	}
	DSA DSA::operator ++ (int){ // xN++  temp.xN++
		DSA temp(xNM1,xN,xNP1);
					  
		xNP1 = xN;
		xN = xNM1;
		xNM1 = 0.0;
		
		return temp;
	}
