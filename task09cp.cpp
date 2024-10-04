#include<iostream>
#include<string>
using namespace std;

string timeTravel(int hr, int min);

int main()
{
    int hrs , min;
    cout << "Enter hours: ";
    cin >> hrs;
    cout << "Enter minutes: ";
    cin >> min;
    cout << timeTravel(hrs,min);
    return 0;
}

string timeTravel(int hr, int min)
{
    string t;
    min += 15;
    if (min >= 60)
    {
        min -=60;
        hr ++;
    }
    if (hr == 24)
    {
        hr -= 24;
    }
    t = to_string(hr) + ":" + to_string(min);
    return t;   
}