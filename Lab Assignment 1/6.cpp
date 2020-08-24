#include<iostream>
using namespace std;
int main()
{
    int n,i,j,temp;
    cout<<"Enter the number of elements you want in the array: ";
    cin>>n;
	int arr[n];
    cout<<"Enter the elements: ";
    for(i = 0;i<n;i++)
    {
        cin>>arr[i];
    }	
	//sorting 
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	cout<<"Sorted Array is:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<", ";
	return 0;	
}
