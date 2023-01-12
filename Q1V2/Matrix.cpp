#include "Matrix.h"

void operator-(Matrix & a)
{
	double disc = 1 / ( a.getMatrix()[0][0] * a.getMatrix()[1][1] - a.getMatrix()[0][1] * a.getMatrix()[1][0]);
	a.setMatrix(0,0, disc * a.getMatrix()[1][1]);
	a.setMatrix(0,1, -disc * a.getMatrix()[0][1]);
	a.setMatrix(1,0, -disc * a.getMatrix()[1][0]);
	a.setMatrix(1,1, disc * a.getMatrix()[0][0]);
}
void operator!(Matrix & a)
{
	int dummy = a.getMatrix()[0][1];
	a.setMatrix(0,1, a.getMatrix()[1][0]);
	a.setMatrix(1,0, dummy);
}

ostream &operator<<(ostream &out,Matrix & a)
{
	for(int i = 0; i < a.getMatrix().size(); i++ )
	{
		out << "| ";
		for(int j = 0; j < a.getMatrix()[i].size(); j++)
		{
		 out<< a.getMatrix()[i][j] << "  ";
		}
		out << "|" << endl;
	}
	return out;
}
istream &operator>>(istream &input,Matrix &a)
{
	for(int i = 0; i <  a.getMatrix().size(); i++)
	{
		for(int j = 0; j< a.getMatrix()[i].size(); j++)
		{
			int dum;
			input>> dum;
			a.setMatrix(i,j,dum);
			input.ignore(1);
		}
	}
	return input;
}

Matrix::Matrix()
{
	twoD.resize(2, vector<int> (2,0));
}

Matrix::~Matrix()
{
}

Matrix Matrix::operator+(const Matrix &a)
{
	Matrix dummy;
	for(int i = 0; i < twoD.size(); i++)
	{
		for(int j = 0; j< twoD[i].size(); j++)
		{
			dummy.setMatrix(i,j, this->getMatrix()[i][j] + a.getMatrix()[i][j] );
		}
	}
	return dummy;
}
Matrix Matrix::operator*(int a)
{
	Matrix dummy;
	for(int i = 0; i < twoD.size(); i++)
	{
		for(int j = 0; j< twoD[i].size(); j++)
		{
			dummy.setMatrix(i,j, this->getMatrix()[i][j] * a );
		}
	}
	return dummy;	
}

void Matrix::setMatrix(int a,int b,int c)
{
	twoD[a][b] = c;
}
vector < vector < int > > Matrix::getMatrix(void) const
{
	return twoD;
}


