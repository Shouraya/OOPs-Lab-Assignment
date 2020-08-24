#include<iostream>
using namespace std;
int power(int a, int b)
{
    int i,prod=1;
    for(i=1;i<=b;i++)
    {
        prod *= a;
    }
    return prod;
}
int main()
{
    int a,b,res;
    cout<<"Enter base value(integer): "<<endl;
    cin>>a;
    cout<<"Enter power value(integer): "<<endl;
    cin>>b;
    res = power(a,b);
    cout<<"The result of "<<a<<" raised to the power "<<b<<" is: "<<res;
}