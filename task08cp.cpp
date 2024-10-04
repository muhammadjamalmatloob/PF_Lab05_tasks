#include<iostream>
using namespace std;

bool Oddish_or_Evenish(int a);

int main()
{
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (Oddish_or_Evenish(a))
    {
        cout << "Evenish";
    }
    else
    {
        cout << "Oddish";
    }
}

bool Oddish_or_Evenish(int a)
{
    return (a%10 + (a/10)%10 + (a/100)%10 + (a/1000)%10 + (a/10000)%10)%2;
}