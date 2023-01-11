#include <iostream>
#include "Line.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Line l1("l1",3,4,5,6);
	l1.print();
	
	const Line l2("l2",1,1,2,2);
	l2.print();
	
	l1.addInto(l2).print();
	Line l3("l3"),l4("l4",2,2,4,4);
	l3=l1.subtract(l4);
	l3.print();
	
	const Line l5("l5",0,8,1,10);
	const Line l6("l6",0,0,-10,8);
	
	dotProduct(l5,l6);
	
	return 0;
}
