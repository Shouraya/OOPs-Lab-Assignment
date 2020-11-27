#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file;
	char ch;
	int i=0,j=0;
	file.open("OUT.txt",ios::out);
	for(int i=1;i<=100;i++)
	file<<i<<endl;
	file<<"Assignment done by Shouraya Goyal."<<endl;
	file.close();
	file.open("OUT.txt",ios::in);
	file.get(ch);
	while(!file.eof())
	{
		if(ch>=65 && ch<=90 || ch==32)
		{
			cout<<ch;
			i++;
		}
		else if(ch>=97 && ch<=122 || ch==32)
		{
			cout<<ch;
			j++;
		}
		file.get(ch);
	}
	cout<<"\nNumber of characters are "<<i+j<<" including space.";
	file.close();
	return 0;
}
