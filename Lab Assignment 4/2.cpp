#include <iostream>
using namespace std;
class bank
{
	int acc_num;
	char name[20];
	char type[20];
	int bal;

public:
	void assign()
	{
		cout<<"Name of depositor: ";
		cin>>name;
		cout<<"Account number: ";
		cin>>acc_num;
		cout<<"Type of account: ";
		cin>>type;
		cout<<"Enter amount: ";
		cin>>bal;
	}
	void deposit()
	{
		int mon;
		cout<<endl<<"Amount to deposit money: ";
		cin>>mon;
		bal+=mon;
		cout<<"Balance after Deposit: " <<bal<< endl;
	}
	void withdraw()
	{
		int wit;
		cout<<endl<<"withdraw money: ";
		cin>>wit;
		bal = bal - wit;
		if (wit > bal)
		{
			cout << "Insufficient Balance !";
		}
		else
		{
			cout<<"Balance after withdrawal: "<< bal<< endl;
		}
	}
	void display()
	{
		if (bal < 0)
		{
			cout << endl<<"Name: "<<name<< endl<<"Amount Can't be withdrawn";
		}
		else
		{
			cout<<endl<<"Name: " <<name << endl<< "Balance: " <<bal;
		}
	}
};
int main()
{
	bank mem;
	mem.assign();
	mem.deposit();
	mem.withdraw();
	mem.display();
	return 0;
}