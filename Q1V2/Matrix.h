#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Matrix
{
	friend void operator-(Matrix &);
	friend void operator!(Matrix &);
	
	friend ostream &operator<<(ostream &,Matrix &);
	friend istream &operator>>(istream &,Matrix &);
	
public:
	Matrix();
	~Matrix();
	
	Matrix operator+(const Matrix &);
	Matrix operator*(int);
	
	void setMatrix(int,int,int);
	vector < vector < int > > getMatrix(void) const;
	
private:
	vector< vector < int > > twoD;
};

#endif
