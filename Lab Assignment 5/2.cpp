#include <iostream>
using namespace std;
class student
{
    private:
        char name[50];
        int roll_no;
        int marks[5];
        int sum;
        float percent;
    public:
        //Get student details - Member Function
        void getdata();
        //Show student details - Member Function
        void putdata();
};
//Member function declaration outside class
void student::getdata()
{
    //basic details input
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> roll_no;
    for (int i=0; i<5; i++)
    {
        cout << "Enter your marks in SUBJECT " << i + 1 << " : ";
        cin >> marks[i];
    }
    //total marks
    sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }
    //Percentage calculation
    percent = (sum/5);
}
void student::putdata()
{
    cout<<"Name: "<<name<<"\n";
    cout<<"Roll Number : "<<roll_no<<"\n";
    cout<<"Total Marks: "<<sum<<"/500"<<"\n";
    cout<<"PERCENTAGE ACHIEVED: "<<percent<<"%"<<"\n";
}

int main()
{
    int n, i;
    cout << "Enter total number of students: ";
    cin >> n;
    //decalring array of objects
    student stud[n];
    for (i=0; i<n; i++)
    {
        cout<<endl<<"******************************"<<endl<<"Enter details of student " << i + 1 << ":"<<endl<<"******************************"<<endl;
        stud[i].getdata();
    }
    for (i=0; i<n; i++)
    {
        cout<<endl<<"*********************"<<endl<<"Details of student " << (i + 1) << ":"<<endl<<"*********************"<<endl;
        stud[i].putdata();
    }
    return 0;
}