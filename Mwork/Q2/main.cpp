#include <iostream>
#include "DataSpec.h"
#include "GroupData.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	const DataSpec f1("f1",2.0,-1.3,0.8);
	f1.print();
	const DataSpec f2("f2",0.4,2.1,-0.2);
	f2.print();
	const DataSpec f3("f3",0.0,8.1,3.6);
	f3.print();	 
	
	GroupData g1(f1, f2, f3);
	g1.calculateMaxFeatures();
	g1.print();
	
	const DataSpec f4("f4",3.0,10.2,4.4);
	f4.print();
	
	GroupData g2(f1, f2, f4);
	g2.calculateMaxFeatures();
	g2.print();
	
	
	if(g1.compare(g2)){
		cout<<"g1 group data has max features"<< endl;
	}else{
		cout<<"g2 group data has max features"<< endl;
	}
	
	return 0;
}
