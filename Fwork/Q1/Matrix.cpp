#include "Matrix.h"
#include <iostream>
using namespace std;
Matrix::Matrix()
{
	a.resize(2);
	for(int i=0;i<2;i++){
		a[i].resize(2);
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			a[i][j]=0;
		}
	}
}
Matrix Matrix::operator+(const Matrix& add){
	Matrix res;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res.a[i][j]=a[i][j]+add.a[i][j];
		}
	}
	return res;
}

Matrix Matrix::operator*(int mul){
	Matrix res;
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res.a[i][j]=a[i][j]*mul;
		}
	}
	return res;
	
}
Matrix operator-(Matrix& m){
	double det=(m.a[0][0]*m.a[1][1])-(m.a[0][1]*m.a[1][0]);
	Matrix res;
	
	res.a[0][0]=(m.a[1][1])/det;
	res.a[0][1]=(-m.a[0][1])/det;
	res.a[1][0]=(-m.a[1][0])/det;
	res.a[1][1]=(m.a[0][0])/det;
	return res;
	
}
Matrix operator!(Matrix& c){
	
	Matrix res;
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			res.a[j][i]=c.a[i][j];
		}
	}
	return res;
}

ostream& operator<<(ostream& os, const Matrix& m){
	for(int i=0;i<2;i++){
		os<<"\t"<<"| ";
		for(int j=0;j<2;j++){
			os<<" "<<m.a[i][j]<<" ";
			
		}
		os<<" |"<<"\n";
	}
	return os;
}

istream& operator>>(istream& is, Matrix& m){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			is>>m.a[i][j];
			
		}
	}
	return is;
}


Matrix::~Matrix()
{
}
