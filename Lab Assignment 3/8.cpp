#include <iostream>
using namespace std;
struct date{
	int day,month,yr;
	char x;
}date;
int main()
{
	do{
	cout<<"Date: ";
	cin>>date.day;
	cout<<"Month: ";
	cin>>date.month;
	cout<<"Year: ";
	cin>>date.yr;
	if(date.day>=1 && date.day<=31 && date.month>=1 && date.month<=12)
	{
		if(date.day==31)
		{
			if(date.month>=1 && date.month<=12 && date.month!=2)
			{
				if(date.month%2!=0 && date.month<=7)
				{
					cout<<"Valid date";
				}
				else if(date.month%2==0 && date.month>7 && date.month<=12)
				{
					cout<<"Valid date";
				}
				else
				{
					cout<<"Invalid date";
				}
			}
			else
			{
				cout<<"Invalid date";
			}
		}
		else if(date.day==30)
		{
            // February condition
			if(date.month!=2)
			{
				cout<<"Valid date";
			}
			else
			{
				cout<<"Invalid date as February doesn't have 30 days.";
			}
		}
        // Leap year
		else if(date.day==29 && date.month==2 && date.yr%4==0)
		{
			cout<<"It is a leap year";
		}
		else if(date.day==29 && date.month==2 && date.yr%4!=0)
		{
			cout<<"Invalid date";
		}
		else if(date.day<29 && date.day>=1)
		{
			cout<<"Valid date";
		}
	}
	else
	{
		cout<<"Invalid date";
	}
	cout<<endl;
	cout<<"Do you want test more dates? y or n: ";
	cin>>date.x;
	}while(date.x=='y');
	return 0;
}
