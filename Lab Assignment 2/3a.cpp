#include<iostream>
using namespace std;
int main()
{
    int num;
    int fact = 1;
    cout<<"Enter the number for which you want to find the factorial: ";
    cin>>num;
    if(num<0)
    {
        cout<<"Factorial of negative number can't be calculated. Try Again !";
    }
    else if(num < 2) 
    {
        cout<<"Factorial is: "<<fact;
    }
    else
    {
        for(int i = 1; i<=num;i++)
        {
            fact = fact*i;
        }
        cout<<"Factorial of entered number is: "<<fact;
    }
}