#include <iostream>
using namespace std;
class student
{
	private:
		char  name[30];
		int   rollNo;
		int   marks;
	public:
		void getDetails()
        {
            cout << "Enter name: " ;
            cin >> name;
            cout << "Enter roll number: ";
            cin >> rollNo;
            cout << "Enter total marks: ";
            cin >> marks;
        };
        // Calling outside the class||Declaring
		void showDetails();
};
void student::showDetails(){
	cout << "Student details:\n";
	cout << "Name:"<< name << ", Roll Number:" << rollNo << ", Marks:" << marks;
}

int main()
{
	student stud;		
	stud.getDetails();
	stud.showDetails();
	return 0;
}
