#include<iostream>
using namespace std;
int main()
{
    int days;
    cout<<"Enter number of days: "<<endl;
    cin >> days;
    if(days<=5)
        cout<<"Fine is 50 paisa!";
    else if (days>5 && days<=10)
        cout<<"Fine is 1 rupee";
    else if(days>10 && days<=30)
        cout<<"Fine is 5 rupees";
    else
        cout<<"membership cancel";
    return 0;
}