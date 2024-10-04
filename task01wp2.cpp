#include<iostream>
using namespace std;

int myFunction(int a);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << myFunction(num);
    return 0;
}

int myFunction(int a)
{
    return a*5;
}