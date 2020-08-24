#include<iostream>
using namespace std;
int main()
{
    int a,b,swap;
    cout<<"Enter numbers: "<<endl;
    cin>>a>>b;
    swap = a^b;
    a = swap^a;
    b = swap ^ b;
    cout<<"After swapping :"<<endl<<"a is "<<a<<endl<<"b is "<<b;
    return 0;
}