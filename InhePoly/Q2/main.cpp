#include <iostream>
#include "Desktop.h"
#include "Laptop.h"
#include<vector>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void virtualViaReference(Computer &baseClassRef);
//void virtualViaPointer(const Computer * const baseClassPtr);

int main() {
	
	Desktop pc1("Intel Core i7",12,3250,6000,180,1);
	Desktop pc2("Intel Core i9",8,2860,7450,180,0);
	
	Laptop pc3("AMD Ryzen 5 4600H",16,1760,5500,3,0);
	Laptop pc4("AMD Threadripper 3990X",8,1950,12500,3,0);
	
	
	vector<Computer*> computers(4);
	
	computers[0] = &pc1;
	computers[1] = &pc2;	
	computers[2] = &pc3;
	computers[3] = &pc4;
	
	for(int i=0; computers.size(); i++){
		virtualViaReference(*computers[i]);
	}
	
/*	for(int i=0; computers.size(); i++){
		virtualViaPointer(computers[i]);
	}	*/
	
	return 0;
}


void virtualViaReference(Computer &baseClassRef){
	baseClassRef.printComputer();
	cout<<"\nPerformance: "<< baseClassRef.performance()<<"\n\n";
}

/*void virtualViaPointer(const Computer * const baseClassPtr){
	baseClassPtr->printComputer();
	cout<<"\nPerformance: "<< baseClassPtr->performance()<<"\n\n";
}*/

