#include<iostream>
using namespace std;

class mean
{
private:
    int n;
    int a;
public:
    void getdata()
    {
        cout<<"Enter first number of element = ";
        cin>>n;
        cout<<"\nEnter second number of element = ";
        cin>>a;

    }
    friend void greatest(mean d);
};
 void greatest(mean d)
 {
     cout<<"\n\nDISPLAY AND SUM USING FRIEND FUNCATION ";
     cout<<"\n\nFIRST NUMBER = "<<d.n<<"\n\nSECOUND NUMBER = "<<d.a;
     int sum =0;
     sum=d.a+d.n;
     cout<<"\n\nSUM OF TWO NUMBER = "<<sum;

 }
 int main()
 {
     mean D;
     D.getdata();
     greatest(D);

     return 0;
 }


