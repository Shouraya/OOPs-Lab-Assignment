#include<iostream>
using namespace std;
int main()
{
    int num, x=0, y=1, z;
    cout<<"Enter the positive number upto which you want to print the Fibonacci series: ";
    cin>>num;
    cout << "Fibonacci Series: " << endl << x << ", " << y << ", ";

    z = x + y;

    while(z <= num)
    {
        cout << z << ", ";
        x = y;
        y = z;
        z = x + y;
    }
    return 0;
    
}
