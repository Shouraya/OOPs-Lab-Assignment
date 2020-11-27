#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	char string[20];
	fstream f;
	fstream f2;
	f.open("FILE1.txt",ios::out); //opening file to write data
	cout<<"Enter text to be written in file."<<endl<<"Press * to end input."<<endl;
	cin.getline(string,21,'*');
	f<<string;
	f.close();
	f.open("FILE1.txt",ios::in|ios::ate); //opening file to read data
	f2.open("FILE2.txt",ios::in|ios::ate);
	f.seekp(ios::beg);
	cout<<endl<<"Reading File..."<<endl;
	while(f.getline(string,21,'*'))
		{
		cout<<string;
		f2<<string;
	}
	f.close();
	f2.close();
}