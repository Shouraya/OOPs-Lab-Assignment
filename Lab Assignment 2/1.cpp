#include<iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    num%2 == 0 ? cout << "The number is even" : cout<<"The number is odd";
}