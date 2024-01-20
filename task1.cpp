#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

struct Punkt
{
    int x;
    int y;
};

float distance(Punkt p1, Punkt p2){
    int distx = abs(p1.x - p2.x);
    int disty = abs(p1.y - p2.y);
    
    return sqrt(pow(distx,2) + pow(disty,2));
}


int main(){
    Punkt point1;
    Punkt point2;
    point1.x = 3;
    point1.y = 6;
    point2.x = 7;
    point2.y = 4;

    cout << distance(point1, point2) << endl;

    return 0;
}