#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
static int j = 0;
vector < int > neighbors;
struct Point{
	Point(int a=0, int b=0, int c=0, int d=0)
	{
		id = a;
		z = b;
		y = c;
		x = d;
	}
	int id;
	int x;
	int y;
	int z;
};

vector < Point > points(20);
typedef map < pair< int, int>, vector< int > > Mmap;

Point randPoint()
{
	static int i = 0;
	Point dummy(i, rand()%10, rand()%10, rand()%10);
	i++;
	return dummy;
}

void printVector(vector < Point > a)
{
	int count =0;
	for (vector<Point>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << setfill(' ') << setw(2) <<  it->id << "-->  " << it->x << "  " << it->y << "  " << it->z << "| ";
		count ++;
		if(count % 4 == 0) cout << endl;
	} 
}

bool radiusNN (Point &a)
{
	double dist = (double)sqrt( pow( points[j].x - a.x, 2 ) +  pow( points[j].y - a.y, 2 ) + pow( points[j].z - a.z, 2 ));
	if( dist > 3)
	{
		return true;
	}
	else {		
		neighbors.push_back(a.id);
		return true;
	}
}

void printMap(Mmap a)
{
	cout << "PointID:\tNN Size\t NN NID" << endl;
	for(Mmap::iterator it = a.begin(); it != a.end(); it ++)
	{
		cout << setfill(' ') << setw(2) << it->first.first << ":\t\t  " << it->first.second << "\t  [  ";
		for(vector<int>::iterator it2 = it->second.begin(); it2 != it->second.end(); it2 ++)
		{
			cout << *it2 << "  ";
		}
		cout << "]" <<  endl;		
 	}
}

int main(int argc, char** argv) {
	Mmap map;
	
	generate(points.begin(), points.end(), randPoint);
	printVector(points);
	
	Mmap::iterator it = map.begin();
	
	for(int i = 0; i < 20; i++)
	{
		for_each(points.begin(), points.end(), radiusNN);
		map.insert(make_pair(make_pair(i,neighbors.size()), neighbors));
		neighbors.resize(0);
		j++;		
	}
	
	printMap(map);
	
	return 0;
}
