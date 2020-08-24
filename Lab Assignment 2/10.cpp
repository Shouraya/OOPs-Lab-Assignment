#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
   char str[20];
   char str2[20];
   int i;
   cout<<"Enter the String: "; 
   cin>>str;
   for(i=0;i<=strlen(str);i++)
   { 
      str2[i] = str[i];
   }
   cout<<"The entered string is (without using strcpy): ";
   for(i=0;i<=strlen(str);i++)
   {
        cout<<str2[i];
   }
  
}