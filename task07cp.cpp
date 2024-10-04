#include<iostream>
using namespace std;

bool IsSymmetrical(int a);

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (IsSymmetrical(a))
    {
        cout << "The number is symmetrical";
    }
    else
    {
        cout << "The number is not symmetrical";
    }
    return 0;
}

bool IsSymmetrical(int a)
{
    return (a%10 == (a/100)%10);
}