#include<iostream>
using namespace std;

void sum(int a, int b);

int main()
{
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    sum(a,b);
    return 0;
}

void sum(int a, int b)
{
    cout << "Sum: " << a+b;
}