#include<iostream>
using namespace std;
int main() 
{
    float a,b;
    int op;
    cout<<"Enter first value: ";
    cin>>x;
    cout<<"Enter second value: ";
    cin>>y;
    cout<<"Enter:\n1 for addition\n2 for substraction\n3 for division\n4 for multiplication\n";
    cin>>op;
    switch(op)
    {
        case 1: cout<<a+b;
        break;
        case 2: cout<<a-b;
        break;
        case 3: cout<<a/b;
        break;
        case 4: cout a*b;
        break;
        default: "Not correct choice!";
        break;
    }
    return 0;
}