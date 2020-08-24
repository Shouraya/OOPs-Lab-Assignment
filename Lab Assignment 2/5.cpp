#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements you want in the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
    }
    int largest = a[0];
    for(int i = 0;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest = a[i];
        }
    }
    cout<<"The largest element is: "<<largest;
}