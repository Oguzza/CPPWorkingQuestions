#include <iostream>
#include "Sine.h"
#include <stdexcept>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Sine s1,s2,s3,x;
	
	try{
		cout<<"Enter angle in terms of degree in the form sin angle"<<endl;
		cin>>s1>>s2;
		
	}catch(invalid_argument &e){
		cout<<"\nException:"<< e.what()<<endl<<endl;
	}
	
	cout<<s1<<endl<<s2<<endl<<x<<endl;
	
	x = s1+s2;
	cout<<"sin(s1 + s2)=====>"<< x <<endl;
	
	x = s1-s2;
	cout<<"sin(s1 - s2)=====>"<< x <<endl;
	
	x = s1*s2;
	cout<<"sin(s1)sin(s2)=====>"<< x <<endl;
	
	cout<<s1++<<endl<<++s2<<endl;
	
	if (s1==s2)
		cout << "s1 is equal to s2" << endl;
		
	if (s1!=s2)
		cout << "s1 is not equal to s2" << endl;
		
	if (s1>s2)
		cout << "s1 is greater than s2" << endl;
			
	if (s1<s2)
		cout << "s1 is less than s2" << endl;
	
	try{
		cout<<"Enter angle in terms of degree in the form sin angle"<<endl;
		cin>>s3;
		
	}catch(invalid_argument &e){
		cout<<"\nException:"<< e.what()<<endl<<endl;
	}		
	
	return 0;
}
