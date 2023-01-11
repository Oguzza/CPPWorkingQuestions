#include <iostream>
#include "Matrix.h"
using namespace std;

int main() {
	
	Matrix m1,m2,x;
	
	cout<<"enter matrix items"<<endl;
	cin>>m1>>m2;
	
	cout<<"\nm1\n"<<m1<<endl;
	cout<<"\nm2\n"<<m2<<endl;
	cout<<"\nx\n"<<x<<endl;
	
	x=m1+m2;
	cout<<"\nm1+m2\n"<<x<<endl;
	
	x=m1*5;
	cout<<"\nx\n"<<x<<endl;
	

	cout<<"\ninverse of m2\n"<<-m2<<endl;
	
	cout<<"\nTranspose of m1\n"<<!m1<<endl;
	
	
	return 0;
}
