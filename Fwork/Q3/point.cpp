#include <iostream>
#include <map>
#include <iomanip>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <iterator>

using namespace std;

struct Point
{
public:
    double x, y, z;
};

vector<Point> points(20);
void printVector(vector<Point> &);
Point initPoint();
bool zGT5(Point&);
typedef map<int, Point> MiP;

int main(int argc, char **argv)
{

    generate(points.begin(), points.end(), initPoint);

    cout <<"Point Vector" << endl;
    printVector(points);

    vector<int> mask(20);
    fill(mask.begin(), mask.end(), 0);

    /*for (int i = 0; i < 20; i++)
    {
        if (points[i].z > 5)
            mask[i] = 1;
    }*/

    // transform
    transform(points.begin(), points.end(), mask.begin(), zGT5);

    cout <<"Mask Vector" << endl;
    for (int j = 0; j < points.size(); j++)
    {
        cout <<mask[j]<<" ";
    }
    cout<<endl;

    MiP maps;
    cout<<endl;

    // MiP::iterator it = maps.begin();
    for (int i = 0; i < mask.size(); i++)
    {
        if (mask[i] == 1)
            maps.insert(pair<int, Point>(i, points[i]));
        else
            continue;
    }
    

    cout << "Point Map" << endl;
    cout <<"Key\tX\tY\tZ" << endl;
    for (MiP::iterator it = maps.begin(); it != maps.end(); it++)
    {
        cout << it->first << "\t" << it->second.x <<"\t"<< it->second.y <<"\t"<< it->second.z << endl;
    }

    return 0;
}

void printVector(vector<Point> &a)
{

    cout << "X\tY\tZ" << endl;
    for (int j = 0; j < points.size(); j++)
    {
        cout << a[j].x << "\t" << a[j].y << "\t" << a[j].z << endl;
    }
    cout<<endl;
}

Point initPoint()
{
    Point coord;
    coord.x = (double)(rand() % 100) / 10.0;
    coord.y = (double)(rand() % 100) / 10.0;
    coord.z = (double)(rand() % 100) / 10.0;

    return coord;
}

bool zGT5(Point &a)
{

    if (a.z > 5)
        return true;
    else
        return false;
}
