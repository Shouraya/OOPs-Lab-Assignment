#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
   char str[20];
   int i;
   cout<<"Enter the String in lowercase: "; 
   cin>>str;
   for(i=0;i<=strlen(str);i++) 
   { 
      if(str[i]>=65 && str[i]<=92)
      {
		str[i]=str[i]+32;
      }
   }
   cout<<"The entered string in uppercase: "<<str;
   return 0;
}