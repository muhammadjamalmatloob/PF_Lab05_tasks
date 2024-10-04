#include<iostream>
#include<cmath>
using namespace std;
#define pi 3.14159265
 
int main()
{
    double distance,angle,height;
    cout << "Enter the distance from the base of the tree (in feets): ";
    cin >> distance;
    cout << "Enter the angle of elevation (in degrees): ";
    cin >> angle;
    height = distance*tan((angle*pi)/180);
    cout << "Height: " << height << " feets";
}