#include <iostream>
using namespace std;

string checkAlphabetcase(char a);

int main()
{
    char a;
    cout << "Enter a character (A/a): ";
    cin >> a;
    cout << checkAlphabetcase(a);
}

string checkAlphabetcase(char a)
{
    if (a == 'a')
    {
        return "You have entered a small a";
    }
    else if (a == 'A')
    {
        return "You have entered a capital A";
    }
}
