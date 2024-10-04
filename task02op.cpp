#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n1,n2;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << n1 << " raised to the power " << n2 << " is equal to " << pow(n1,n2);
}