#include<iostream>
#include<string>
using namespace std;
class student_detail
{
private:
    string name;
    int roll_no;
    string class_section;
    float total_marks;
public:
    void get_detail()
    {
        cout<<"Enter student details: "<<endl<<"Enter name : "<<endl;
        cin>>name;
        cout<<endl<<"Enter roll = ";
        cin>>roll_no;
        cout<<endl<<"Enter class = ";
        cin>>class_section;
        cout<<endl<<"Enter total marks = ";
        cin>>total_marks;
    }
   friend void display(student_detail d);
};
void display(student_detail d)
{   
        cout<<endl<<"**************************************"<<endl;
        cout<<"STUDENT DETAILS: "<<endl<<"Name = "<<d.name<<endl<<"Roll Number = "<<d.roll_no<<endl<<"Class = "<<d.class_section<<endl<<"Total Marks = "<<d.total_marks;
        cout<<endl<<"**************************************"<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number of students = ";
    cin>>n;
    student_detail s1[n];
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        s1[i].get_detail();
    }
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        display(s1[i]);
    }
    return 0;

}
