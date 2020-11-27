#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file;
	char ch;
	file.open("NOTES.txt",ios::out);
	for(int i=1;i<=100;i++)
	file<<i<<endl;
	cout<<"NOTES.txt has being created successfully"<<endl;
	return 0;
}
