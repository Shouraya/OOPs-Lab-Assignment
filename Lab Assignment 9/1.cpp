#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	int income;
	char fw[20];
	cout<<"Enter your income: ";
	cin>>income;
	cout<<"Do you have 4-wheeler? yes or no? ";
	cin>>fw;	
	try{
		if(income>=100000 || income<=50000)
		{
			throw income;
		}
		else{
			cout<<"No exception in income.\n";
		}
	}catch(int y){
			cout<<"Caught an exception! "<<y<<"\n";
		}
	try{
		if (strcmp("yes",fw)!=0 && strcmp("no",fw)!=0)
		{
			throw "neither yes nor no.";
		}
		else{
			cout<<"No exception!\n";
		}
	}catch(const char* stre){
			cout<<"Caught an exception! You have written "<<fw<<" which is "<<stre<<"\n";
		}
}
