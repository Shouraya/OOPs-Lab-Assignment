#include <iostream>
using namespace std;
void multiply(int a,int b);
int main()
{
	int x,y;
	cout<<"Enter two no to multiply: ";
	cin>>x>>y;
	try{
		multiply(x,y);
	}
	catch(int y)
	{
		cout<<"I will not multiply a negative no..."<<y<<"  "<<x;
	};
}
void multiply(int a,int b)
{
	try{
		if(a<0)
		{
			throw a;
		}
		else if(b<0)
		{
			throw b;
		}
		else{
			cout<<"Result: "<<a*b;
		}
	}
	catch(int s){
		throw s;
	}
}
