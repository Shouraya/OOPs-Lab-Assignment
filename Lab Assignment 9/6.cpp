#include <iostream>
#include <string.h>
#include <cstring>
int passcheck(char *c);
using namespace std;
int main()
{
	char un[20],pass[20];
	cout<<"Enter username: ";
	cin>>un;
	cout<<"Enter password: ";
	cin>>pass;
	try{
		if(strlen(pass)<6 || passcheck(pass)==1)
		{
			throw "Invalid password!";
		}
		else{
			cout<<"Correct credentials."<<endl;
		}
	}catch(const char *str)
	{
		cout<<str;
	}
}
int passcheck(char *c)
{
	int i,p;
	for(i=0;i<strlen(c);i++)
	{
		if(c[i]>=48 && c[i]<=57)
		{
			p=1;
			break;
		}
	}
	return p;
}
