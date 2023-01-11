#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include <iostream>
using namespace std;

class Matrix
{

friend ostream& operator<<(ostream& os,const Matrix&);
friend istream& operator>>(istream& is,Matrix&);
friend Matrix operator-(Matrix&);
friend Matrix operator!(Matrix&);

public:
	Matrix();
	
	Matrix operator+(const Matrix&);
	Matrix operator*(int);
	~Matrix();
private:
	vector<vector<int>> a;

};

#endif
