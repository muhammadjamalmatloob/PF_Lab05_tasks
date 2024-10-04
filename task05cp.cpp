#include <iostream>
#include <cmath>
using namespace std;

void solve_quad(float a, float b, float c);

int main()
{
    float a,b,c;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    solve_quad(a,b,c);
    return 0;
}

void solve_quad(float a, float b, float c)
{
    float disc = b*b - 4*a*c;
    if (disc == 0)
    {
        cout << "x = " << -b/(2*a);
    }
    else if (disc > 0)
    {
        cout << "First value of x: " << (-b + sqrt(disc))/(2*a);
        cout << endl << "Second value of x: " << (-b - sqrt(disc))/(2*a);
    }
    else if (disc < 0)
    {
        cout << "First value of x: " << -b/(2*a) << " + " << (sqrt(-disc))/(2*a) << "i";
        cout << endl << "Second value of x: " << -b/(2*a) << " - " << (sqrt(-disc))/(2*a) << "i";
    }

}

