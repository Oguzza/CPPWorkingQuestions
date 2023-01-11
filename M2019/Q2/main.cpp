#include <iostream>
#include "Box.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	cout<<"Number of boxes before instantiation of any objects is "<<Box::getCount()<<endl;
	{
		Box b1(4,5,6);
		printVolume(b1);
		
		Box b2(1,2,3);
		printVolume(b2);
		cout<<"Number of boxes after objects are instantiated is "<<Box::getCount()<<endl;	
			
		if(b1.compare(b2)){
			cout<<"Box1 has larger volume"<<endl;
		}else{
			cout<<"Box2 has larger volume"<<endl;
		}
	}
	cout<<"\nNumber of boxes after objects are deleted is "<<Box::getCount()<<endl;	
	

	return 0;
	
}
