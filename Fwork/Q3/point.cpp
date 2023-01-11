#include<iostream>
#include<vector>
#include<algorithm>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
#include<ctime>
#include<cstdlib>
#include <map>
#include <iterator>
using namespace std;

struct Point {
    double x;
    double y;
    double z;
}p1;

Point initPoint (void);
void printPoint(vector <Point>&); 
double rands(void);
bool zGT5 (Point) ;

typedef map<int, Point > MiP;

main(){

	vector<Point> vectorr(20);
	
 
	
	generate(vectorr.begin() , vectorr.end(), initPoint);
	

	vector<int >key(20);

	printPoint(vectorr);
	
	//transform
	cout<<"*************"<<endl;
		transform(vectorr.begin() , vectorr.end(),key.begin(),zGT5); 
	cout<<"*************"<<endl;
	
	    
	for (std::vector<int>::iterator it=key.begin(); it!=key.end(); ++it)
    cout << *it <<" ";
  
	cout<<"*************"<<endl;
 	
	
	
	
	
		MiP maps;
	for( int i = 0; i < key.size(); i++){
		if(key[i]==1)
		maps.insert(pair<int, Point>(key[i], vectorr[i]));
		else
		continue;
	}
	
	
for( map<int, Point>::iterator it= maps.begin(); it != maps.end(); it++)
{
	cout << it->first << ": " << it ->second.x << it ->second.y<< it ->second.z  << endl;
}


	
}

Point initPoint (void){ 
	p1.x=rands();
 	p1.y=rands();
	
	p1.z=rands();
	
	return p1; 
}

double rands(void){
	return (rand()%11);
}

void printPoint(vector<Point> &vec){
	cout<<setw(5)<<"X  "<<setw(5)<<"      Y"<<setw(5)<<"Z"<<endl;
	
	 for (int i = 0; i < vec.size(); i++) {
       cout << vec[i].x<<setw(5) <<"    "<< vec[i].y<<"   "<<setw(5)<< vec[i].z<<endl;
    }
}


bool zGT5 (Point a) {
	 
	if((a.z)>5) 
	return 1; 
	else
	return 0;
	
	
}


