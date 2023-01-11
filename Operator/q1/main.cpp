#include <iostream>
#include <stdexcept>
#include "DSA.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	DSA n1,n2,n3,n4,x;
	
	cout << "Enter discrete signals in the form xNM1---xN---xNP1:" << endl;
	cin >> n1 >> n2;
	
	cout << n1 << endl << n2 << endl << x << endl;
	
	x=n1+n2;
	cout << n1 << " + " << n2 << " = " << x << endl;
	
	x=n1-n2;
	cout << n1 << " - " << n2 << " = " << x << endl;
	
	x=n1*n2;
	cout << n1 << " * " << n2 << " = " << x << endl;
	
	try{	
		x=n1/n2;
		cout << n1 << " / " << n2 << " = " << x << endl;
	}catch(invalid_argument &e){
		cout<<"\nExecption: "<<e.what();
	}
	
	try{	
		x=n1/n4;
		cout << n1 << " / " << n4 << " = " << x << endl;
	}catch(invalid_argument &e){
		cout<<"\nException: "<<e.what();
	}	
	
	cout<< n1++ << endl << ++n2 <<endl;
	
	if (n1<n2)
		cout << "d1 is less than d2" << endl;
	
	if (n1>n2)
		cout << "d1 is greater than d2" << endl;
	
	if (n1==n2)
		cout << "d1 is equal to d2" << endl;
		
	if (n1!=n2)
		cout << "d1 is not equal to d2" << endl;	
		

/*	cout << "Enter discrete signals in the form xNM1---xN---xNP1:" << endl;
	cin >> n3;
	cout << n3++ <<endl;
	
	cout << "Enter discrete signals in the form xNM1---xN---xNP1:" << endl;	
	cin >> n3;
	cout << ++n3 <<endl;	*/	
	
	return 0;
}
