#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;
	class strng{
		char str[20];
		public:
		void get(){
		cout<<endl<<"Enter string ";
		cin>>str;
		}
		void display(){
			cout<<endl<<str;
		}
		int operator==(strng obj2){
			return(strcmp(this->str,obj2.str));
		}
		strng operator+(strng obj2){
			strng temp;
			strcpy(this->str,temp.str);
			strcat(temp.str,obj2.str);
			return temp;
		}
	};
int main()
{
	strng obj1,obj2;
	obj1.get();
	obj2.get();
	if((obj1==obj2)==0)
	cout<<endl<<"They are Equal";
	else
	cout<<endl<<"They are not Equal";
	strng sum;
	sum=obj1+obj2;
	cout<<endl<<"String after concatination: ";
	sum.display();
	return 1;
}