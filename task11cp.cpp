#include<iostream>
using namespace std;

string calculate_pool_state(float v, float p1, float p2, float h);

int main()
{
    float vol,flowrate_p1,flowrate_p2,hr_worker_absent;
    cout << "Enter number of pool in liters: ";
    cin >> vol;
    cout << "Enter flow rate of the first pipe: ";
    cin >> flowrate_p1;
    cout << "Enter flow rate of the second pipe: ";
    cin >> flowrate_p2;
    cout << "Enter hours the worker is absent: ";
    cin >> hr_worker_absent;
    cout << calculate_pool_state(vol,flowrate_p1,flowrate_p2,hr_worker_absent);
    return 0;
}

string calculate_pool_state(float v, float p1, float p2, float h)
{
    float x = (p1 + p2)*h;
    if (x <= v)
    {
        int percent_pool = (x/v)*100;
        int percent_p1 = p1/(p1+p2)*100, percent_p2 = p2/(p1+p2)*100;
        return "The pool is " + to_string(percent_pool) + "% full. Pipe 1: " + to_string(percent_p1) + "%. Pipe 2: " + to_string(percent_p2) + "%.";
    }
    else if(x > v)
    {
        int y = x - v;
        return "For " + to_string(h) + " hours, the pool overflows with " + to_string(y) + " litres.";
    }
}