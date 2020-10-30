#include <iostream>
#include<string.h>
using namespace std;
class string{
	char s[20];
	public:
		void getstring()
		{
			cin>>s;
		}
		int operator==(string s1)
		{
			if(strcmp(this->s,s1.s)==0)
				return 1;
			else
			{
				return 0;
			}
		}
		string operator+(string s1)
		{
			string temp;
			strcpy(temp.s,this->s);
			strcat(temp.s,s1.s);
			return temp;
		}
		void display()
		{
			cout<<s;
		}
};
int main()
{
	::string s1,s2,s3;
	cout<<"Enter first string: ";
	s1.getstring();
	cout<<"Enter second string: ";
	s2.getstring();
	if(s1==s2)
	{
		cout<<"Strings are equal.";
	}
	else
		cout<<"Strings are not equal.";
	s3=s1+s2;
	cout<<"\nAfter concatenation: ";
	s3.display();
	return 0;
}
