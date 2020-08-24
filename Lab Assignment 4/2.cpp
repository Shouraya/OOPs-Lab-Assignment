#include <iostream>
using namespace std;
// Declaring Class
class account{
	char name[20];
	long int ac_num;
	char type;
	float balance;
	
	public:
		void getdata()
		{
			cout<<"Enter Name of Account holder";
			cin>>name;
			cout<<endl<<"Enter Account number";
			cin>>ac_num;
			cout<<endl<<"Enter Type of Account";
			cin>>type;
			cout<<endl<<"Enter Balance of Account";
			cin>>balance;
		}
		void deposit()
		{	
			float dep;
			cout<<endl<<"Enter the amount you wish to Deposit";
			cin>>dep;
			balance+=dep;
		}
		void withdraw()
		{	
			float wid; int ch;
			cout<<endl<<"Current Balance: "<<balance<<"Press 1 If you still wish to proceed with withdrawl";
			cin>>ch;
			{
				cout<<endl<<"Enter the amount you wish to withdraw";
				cin>>wid;
				balance-=wid;
			}
		}
		void printdata()
		{
			cout<<"Account Details:"<<endl<<"*****************"<<endl<<"Account Number: "<<ac_num<<endl<<"Name:  "<<name<<endl<<"Type:  "<<type<<endl<<"Balance: "<<balance;
		}
};
int main()
{
	account obj; 				//Object of class account
	obj.getdata();				//Input data
	obj.deposit();			   	//Deposit Amount
	obj.withdraw();			  	//Withdraw Amount
	obj.printdata(); 		 	//Display Amount
}
