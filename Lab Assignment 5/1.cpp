#include<iostream>
using namespace std; 
class student
{
    private:
         char name[20];
         int roll_no;
         int marks[6];
    public:
        void getdata();   
        void tot_marks();   
}; 
void student::getdata()
{
    cout<<"Please enter the details: "<<endl;
    cout<<"Your name : ";
    cin>>name;
    cout<<"Roll Number : ";
    cin>>roll_no;
    for ( int i = 0; i < 6; i++ )
    {
        cout<<"Enter your marks in Subject "<<i+1<<" : ";
        cin>>marks[i];
    }
}
void student::tot_marks()
{
    int sum = 0 ;
    for( int i = 0; i <6; i++ )
    {
        sum+=marks[i];
    }

    cout<<"Hi ! "<<name<<" with Roll number "<<roll_no<<" your total marks in 6 Subjects is: "<<sum<<" .";
}
int main()
{
    student stud;
    stud.getdata();
    stud.tot_marks();
    return 0;
}
