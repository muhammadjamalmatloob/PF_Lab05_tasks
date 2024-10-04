#include<iostream>
using namespace std;

string num_to_word(int n);

int main()
{
    int n;
    cout << "Enter a number(1-99): ";
    cin >> n;
    cout << num_to_word(n);
    return 0;
}

string num_to_word(int n)
{
    if (n<20)
    {
        if (n == 1)
            return "One";
        else if (n == 2)
            return "Two";
        else if (n == 3)
            return "Three";
        else if (n == 4)
            return "Two";
        else if (n == 5)
            return "Five";
        else if (n == 6)
            return "Six";
        else if (n == 7)
            return "Seven";
        else if (n == 8)
            return "Eight";
        else if (n == 9)
            return "Nine";
        else if (n == 10)
            return "Ten";
        else if (n == 11)
            return "Eleven";
        else if (n == 12)
            return "Twelve";
        else if (n == 13)
            return "Thirteen";
        else if (n == 14)
            return "Fourteen";
        else if (n == 15)
            return "Fifteen";
        else if (n == 16)
            return "Sixteen";
        else if (n == 17)
            return "Seventeen";
        else if (n == 18)
            return "Eighteen";
        else if (n == 19)
            return "Nineteen";
    }
    else if (n>19)
    {
        string x,y;
        //For Second Digit
        if (n%10==1)
            x = "One";
        else if (n%10==2)
            x = "Two";
        else if (n%10==3)
            x = "Three";
        else if (n%10==4)
            x = "Four";
        else if (n%10==5)
            x = "Five";
        else if (n%10==6)
            x = "Six";
        else if (n%10==7)
            x = "Seven";
        else if (n%10==8)
            x = "Eight";
        else if (n%10==9)
            x = "Nine";
        //For First Digit  
        if (n/10==2)
            y = "Twenty";
        else if (n/10==3)
            y = "Thirty";
        else if (n/10==4)
            y = "Forty";
        else if (n/10==5)
            y = "Fifty";
        else if (n/10==6)
            y = "Sixty";
        else if (n/10==7)
            y = "Seventy";
        else if (n/10==8)
            y = "Eighty";
        else if (n/10==9)
            y = "Ninety";
        //When second digit is 0 
        if (n%10==0)
            return y;
        //When second digit is not 0
        else if (n%10!=0)
            return y + " " + x;

    }
    
}