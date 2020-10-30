#include <iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"Enter x: ";
	cin>>x;
	cout<<"Enter y: ";
	cin>>y;
	try{
		if(y==0)
		{
			throw y;
		}
		else
		{
			cout<<"x/y is "<<x/y;
		}
	}catch(float z)
	{
		cout<<"Caught an exception! Denominator is y="<<z;
	}
}
