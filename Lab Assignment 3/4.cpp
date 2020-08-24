#include <iostream>
using namespace std;
void sum(int *a,int n);
int main()
{
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	int a[size];
	cout<<"Enter the elements of array:\n";
	for(int i=0;i<size;i++)
	{
		cin>>a[i];
	}
	sum(a,size);
	return 0;
}
void sum(int *a,int n)
{
	int sum=0;
	cout<<"\nEntered array is: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	for(int i=0;i<n;i++)
	{
		sum=sum + *(a+i);
	}
	cout<<"\nSum is "<<sum;
}
