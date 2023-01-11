#include <iostream>
#include "Points.h"
#include "Plane.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	const Points Q("Q",-1,1,2);
	Q.print();

	const Points R("R",-4,2,2);
	R.print();
	
	const Points S("S",-2,1,5);
	S.print();
	
	Plane A(Q,R,S);
	A.calculateAngles();
	A.print();
	
	const Points P("P",0,0,5);
	P.print();
	
	Plane B(Q,R,P);
	B.calculateAngles();
	B.print();
	
	if(A.compare(B)){
		cout<<"Q,R,S and P lie the same plane"<<endl;
	}else {
		cout<<"Q,R,S and P dont lie the same plane"<<endl;
	}
	
	return 0;
}
