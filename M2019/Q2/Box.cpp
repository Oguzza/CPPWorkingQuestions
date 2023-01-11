#include "Box.h"
#include <iostream>

using namespace std;

	int Box::count = 0;

	Box::Box(double l, double b, double h){
		lenght = l;
		breadth = b;
		height = h;
		calculateVolume();
		count++;
	}
	void Box::calculateVolume(void){
		volume = lenght*breadth*height;
	}
	bool Box::compare(const Box &b1){
		
		if( volume > b1.volume ){
			return true;
		}else{
			return false;
		}
		
	}
	int Box::getCount(){
		return count;
	}
	Box::~Box(){
		count--;
	}
	void printVolume(const Box &b){
		
		cout<<"Volume of box is "<<b.volume<<endl;
		
	}
