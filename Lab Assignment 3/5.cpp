#include <iostream>
using namespace std;
struct cricket{
	char name[20];
	int age;
	float matches,avg,runs_total;
}c1[3];
int main()
{
	int i;
	cout<<"Enter detils of player: "<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"Player "<<i+1<<endl<<"Name: ";
		cin>>c1[i].name;
		cout<<endl<<"Age: ";
		cin>>c1[i].age;
		cout<<endl<<"No. of matches played: ";
		cin>>c1[i].matches;
		cout<<endl<<"Total runs: ";
		cin>>c1[i].runs_total;
	}
	cout<<endl<<"*******************************"<<endl<<"Entered details are as follows:"<<endl<<"*******************************"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<i+1<<endl<<"Name: "<<c1[i].name;
		cout<<endl<<"nAge: "<<c1[i].age;
		cout<<endl<<"No. of matches played: "<<c1[i].matches;
		cout<<endl<<"Total runs: "<<c1[i].runs_total;
		c1[i].avg=c1[i].runs_total/c1[i].matches;
		cout<<endl<<"Avg. score: "<<c1[i].avg<<endl;
	}
	for(i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(c1[i].avg<c1[j].avg)
			{
				int temp;
				temp=c1[i].avg;
				c1[i].avg=c1[j].avg;
				c1[j].avg=temp;
			}
		}
	}
	cout<<"**************************************************"<<endl<<"Displaying results in sorted order of avg. score:"<<endl<<"**************************************************";
	for(i=0;i<3;i++)
	{
		cout<<i+1<<endl<<"Name: "<<c1[i].name;
		cout<<endl<<"Age: "<<c1[i].age;
		cout<<endl<<"No. of matches played: "<<c1[i].matches;
		cout<<endl<<"Total runs: "<<c1[i].runs_total;
		c1[i].avg=c1[i].runs_total/c1[i].matches;
		cout<<endl<<"Avg. score: "<<c1[i].avg<<endl;
	}
}
