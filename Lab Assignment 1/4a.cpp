#include<iostream>
using namespace std;
int main()
{	int n;
	cout<<"Enter number:"<<endl;
	cin>>n;
	int t1=0, t2=1, nextTerm;	
    for (int i = 1; i <= n; ++i)
    {
        cout<<t1<<" ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }		
 return 0;
}
