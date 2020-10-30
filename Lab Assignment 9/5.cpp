#include<iostream>
using namespace std;
int main()
{   int a,b;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    cout<<"Enter the value of b"<<endl;
    cin>>b;
    try
    {
        if(b==0)
            throw "value of b is zero";
        else
            cout<<"a/b="<<a/b<<"\n";
    }
    catch(const char *x)
    {
        cout<<"Program Failed\n"<<x<<endl;
    }
    cout<<"End of program";
    return 0;
}
