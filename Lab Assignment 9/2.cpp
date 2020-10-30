#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	int age,income;
	char city[20],fw[20];
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your income: ";
	cin>>income;
	cout<<"Enter your city: ";
	cin>>city;
	cout<<"Do you have 4-wheeler? yes or no? ";
	cin>>fw;
	try{
		if(age<=18 || age>=55){
			throw age;
		}
		else{
			cout<<"No exception in age.\n";
		}
	}catch(int x){
			cout<<"Caught an exception! "<<age<<"\n";
		}	
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
		if (strcmp(city,"Pune")!=0 && strcmp(city,"Mumbai")!=0 && strcmp(city,"Bangalore")!=0 && strcmp(city,"Chennai")!=0)
		{
			throw "not a mentioned city.";
		}
		else{
			cout<<"No exception!\n";
		}
	}catch(const char* str){
			cout<<"Caught an exception! You have written ";
			cout<<city;
			cout<<" which is "<<str<<"\n";
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
