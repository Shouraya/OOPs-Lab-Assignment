#include<iostream>
using namespace std;
float product(float a,float b)
{
    return a*b;
}
int main()
{
    float a,b,prod;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    prod = product(a,b);
    cout<< "The multiplication gives: "<<prod;
    return 0;
}

