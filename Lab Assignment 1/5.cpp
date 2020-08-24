#include<iostream>
using namespace std;
int main()
{
    float C, F;
    cout << "Enter temperature in Celcius: "<<endl;
    cin >> C;
    F = (9*C/5)+32;
    cout << "Temperature in Fahrenheit is: "<<F;
    return 0;
} 