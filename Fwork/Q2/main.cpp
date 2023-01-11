#include <iostream>
#include "Master.h"
#include "Doctoral.h"
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void virtualViaRef(Bachelor &baseClassRef);

int main(int argc, char** argv) {
	
	
	Master p1(16,3,"Ricardo","Charles","Osmangazi Uni","Research Assistant");
	Master p2(4,1,"Jonas","Benz","Osmangazi Uni","Research Assistant");
	
	
	Doctoral p3(18,13,26,8,"Andrew","Liang","Osmangazi Uni","Assistant Professor");
	Doctoral p4(23,5,13,2,"Lilian","Bartez","Osmangazi Uni","Professor");
	
	vector<Bachelor*> personal(4);
		
	personal[0] = &p1;	
	personal[1] = &p2;
	personal[2] = &p3;	
	personal[3] = &p4;	
	
	
	for(int i=0; i<personal.size(); i++){
		virtualViaRef(*personal[i]);
	}
	
		
	return 0;
}

void virtualViaRef(Bachelor &baseClassRef){
	baseClassRef.printResume();
	cout<<"\nPerformance: "<< baseClassRef.performance()<<"\n\n";
	
}