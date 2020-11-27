#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream infile;
	int x;
	infile.open("my1.bin",ios::out|ios::binary);
	int i;
	for(i=0;i<5;i++)
	{
		infile<<i+1<<"\n";
	}
	infile.close();	
	ifstream nfile;
	nfile.open("my1.bin",ios::in|ios::binary);
	while(!nfile.eof())
	{
		nfile>>x;
		cout<<x;
	}
	nfile.close();
}
