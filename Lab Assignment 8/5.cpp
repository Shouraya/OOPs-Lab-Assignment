#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a String: "<<endl;
    getline(cin, str);
    cout<<"Length of the string is: "<<sizeof(str)/sizeof(str[0])<<endl;
    ofstream ofile("StringFile.txt", ios::out);
    int i=0;
    char ch;
    cout<<"Writing to file...."<<endl;
    while(str[i]!='\0')
    {
        ofile.put(str[i]);
        i++;
    }
    ofile.close();
    ifstream ifile("StringFile.txt", ios::in);
    cout<<"The contents of File are..."<<endl;
    while(ifile.get(ch))
    {
        cout<<ch;
    }
    return 0;
}