#include <iostream>
#include "LeaguePlayer.h"
#include "NationalPlayer.h"
#include<vector>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void virtualViaReference(const Player &baseClassRef);
void virtualViaPointer(const Player * const baseClassPtr);

int main(int argc, char** argv) {
	
	LeaguePlayer p1("Shane","Larkin","USA",27,28,24,4);
	LeaguePlayer p2("Roger","Federer","Switzerland",38,14,13,1);
	
	NationalPlayer p3("Zlatan","Ibrahimovic","Sweden",38,24,14,10,6);
	NationalPlayer p4("Malwina","Smarzek","Poland",23,32,29,3,12);
	
	
	vector<Player*> players(4);
	
	players[0] = &p1;
	players[1] = &p2;	
	players[2] = &p3;
	players[3] = &p4;
	
	for(int i=0; players.size(); i++){
		virtualViaReference(*players[i]);
	}
	
/*	for(int i=0; players.size(); i++){
		virtualViaPointer(players[i]);
	}	*/
	
	return 0;
}


void virtualViaReference(const Player &baseClassRef){
	baseClassRef.print();
	cout<<"\nPoints: "<< baseClassRef.points()<<"\n\n";
}

void virtualViaPointer(const Player * const baseClassPtr){
	baseClassPtr->print();
	cout<<"\nPoints: "<< baseClassPtr->points()<<"\n\n";
}

