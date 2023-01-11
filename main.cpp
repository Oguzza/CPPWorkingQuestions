#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef map< pair<int,int>, pair<int, double> > Mmap;

vector < int > labels(100);


int gt(void)
{
	static int i = 0;
	if(i < 20 ){
		i++;
		return 1;
	}
	else if(i < 30 && i >= 20){
		i++;
		return 2;	
	}
	else if(i < 60 && i >= 30){
		i++;
		return 3;	
	}
	else if(i < 65 && i >= 60){
		i++;
		return 4;	
	}
	else if(i < 100 && i >= 65){
		i++;
		return 5;	
	}
}

void printVector(vector<int> a)
{
	int count = 0;
	for(vector<int>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout <<  *it << "   ";
		count ++;
		if(count % 10 == 0) cout << endl;
	}	
}

int rand15(void)
{
	return rand() %5 +1;
}

bool isOne(int a)
{
	if(a == 1) return true;
	else return false;
}

bool evaluate(int a)
{
	static int i = 0;
	if( a == labels[i] )
	{
		i++;
		return true;
	}
	else 
	{
		i++;
		return false;
	}
}

int main(int argc, char** argv) {
	
	Mmap map;
	vector < int > mask(100);
	vector < int > predictions(100);
	
	map.insert(make_pair(make_pair(1,20), make_pair(0,0)));
	map.insert(make_pair(make_pair(2,10), make_pair(0,0)));
	map.insert(make_pair(make_pair(3,30), make_pair(0,0)));
	map.insert(make_pair(make_pair(4,5), make_pair(0,0)));
	map.insert(make_pair(make_pair(5,35), make_pair(0,0)));
	
	
	cout << "  ClassID:\tSamples\tTP\tPrecision" << endl;
	for(Mmap::iterator it = map.begin(); it != map.end(); it++){
		cout << "\t" <<  it->first.first << "\t" << it->first.second << "\t" 
			<< it->second.first << "\t" << it->second.second << endl;
	}
		
		
	generate(labels.begin(), labels.end(), gt);		
	cout << "\nLabels:\n";
	printVector(labels);
	
	generate(predictions.begin(), predictions.end(), rand15);	
	cout << "\nPredictions:\n";
	printVector(predictions);

	transform(predictions.begin(), predictions.end(),mask.begin(), evaluate);	
	cout << "\nMask:\n";
	printVector(mask);
	
	Mmap::iterator it = map.begin();
	
	int count = count_if(mask.begin(), mask.begin() + 20, isOne);
	it->second.first = count;
	it->second.second = count / (double)it->first.second;
	it++;
	
	count = count_if(mask.begin() + 20 , mask.begin() +30, isOne);
	it->second.first = count;
	it->second.second = count / (double)it->first.second;
	it++;

	count = count_if(mask.begin() + 30 , mask.begin() +60, isOne);
	it->second.first = count;
	it->second.second = count / (double)it->first.second;
	it++;
	
	count = count_if(mask.begin() + 60 , mask.begin() +65, isOne);
	it->second.first = count;
	it->second.second = count / (double)it->first.second;
	it++;
	
	count = count_if(mask.begin() + 65 , mask.begin() +100, isOne);
	it->second.first = count;
	it->second.second = count / (double)it->first.second;
	it++;

	cout << "\n  ClassID:\tSamples\tTP\tPrecision" << endl;
	for(Mmap::iterator it = map.begin(); it != map.end(); it++){
		cout << "\t" <<  it->first.first << "\t" << it->first.second << "\t" 
			<< it->second.first << "\t" << it->second.second << endl;
	}
		
	return 0;
}
