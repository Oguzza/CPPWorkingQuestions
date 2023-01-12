#include <iostream>
#include "V3D.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	cout<<"Number of vectors before instantiation of any objects is "<<V3D::getCount()<<endl;
	{
		V3D v1("v1",3,4,5);
		v1.print();	
		
		const V3D v2("v2",1,2,3);
		v2.print();
		
		V3D v3("v3",7,8,9);
		
		cout<<"Number of vectors after objects are instantiated is "<<V3D::getCount()<<endl;	
		
		v3.algebra(v2).print();
		v1.crossProduct(v2).print();	
	}
	cout<<"\nNumber of vectors after objects are deleted is "<<V3D::getCount()<<endl;	
	
	const V3D v5("v5",5,6,7);
	const V3D v6("v6",8,9,10);
	
	cout<<"Number of vectors after objects are instantiated is "<<V3D::getCount()<<endl;
	
	angle(v5,v6);
	return 0;
}
