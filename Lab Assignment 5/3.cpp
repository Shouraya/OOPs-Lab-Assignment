#include<iostream>
using namespace std;
class manager
{
    private :
        int ID;
        char name[20];
        int age;
        float sal;
    //Declaring the Member functions inside the Class.
    public:
        void put_data();
        void get_data();
};

void manager::put_data()
{
    cout<<endl;
    cout<<"Enter your Name: ";
    cin>>name;
    cout<<"Enter your ID: ";
    cin>>ID;
    cout<<"Enter your Age: ";
    cin>>age;
    cout<<"Enter your Salary: ";
    cin>>sal;
}

void manager::get_data()
{
    cout<<"ID: "<<ID<<"\n Name: "<<name<<"\n Age: "<<age<<"\n Salary: "<<sal;
}
int main()
{
    int i,n;
    cout<<"Enter the number of Managers: ";
    cin>>n;
    //array of objects declaration
    manager man[n];  
    //input
    for(i=0; i<n; i++)
    {
        cout<<endl<<"************************************"<<endl<<"Enter the Details for Manager - "<<i+1<<" :"<<endl<<"************************************"<<endl;
        man[i].put_data();
    }
    for(i=0; i<n; i++)
    {
        cout<<endl<<"**********"<<endl<<"MANAGER "<<i+1<<":"<<endl<<"**********"<<endl;
        man[i].get_data();
    }
}
