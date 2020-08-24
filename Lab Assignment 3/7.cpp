#include<iostream>
using namespace std;
int main()
{
	int num;
	struct student
	{
		string name;
		int roll;
		float percentage;
	};
	cout<<"Enter the number of students: ";
	cin>>num;
	student data[num];
	student *ptr[num];
	for(int i=0; i<num; i++)
	{
		ptr[i]= &data[i];
		cout<<"Enter the details of student "<<i+1<<": \n";
		cout<<"Name: ";
		cin>> data[i].name;
		cout<<"Roll no.: ";
		cin>> data[i].roll;
		cout<<"Percentage: ";
		cin>> data[i].percentage;
	}
	cout<<"******************************"<<endl<<"The data of the students is: "<<endl<<"******************************";
	for(int i=0; i<num; i++)
	{
		cout<<"\nStudent "<<i+1<<":\n";
		cout<<"Name: "<<ptr[i]->name<<endl;
		cout<<"Roll no.: "<<(*ptr[i]).roll<<endl;
		cout<<"Percentage: "<<ptr[i]->percentage<<endl;
    }
	return 0;
}
