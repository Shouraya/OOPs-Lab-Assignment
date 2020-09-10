#include<iostream>
using namespace std;
class secound;

class first
{
private:
    int n;
public:
    void getdata()
    {
        cout<<"Enter first number : ";
        cin>>n;
    }
    friend void greatest(first d,secound x);
};
class secound
{
private:
    int a;
public:
    void getdata2()
    {
        cout<<"\nEnter second number : ";
        cin>>a;
    }
    friend void greatest(first d,secound x);
};
 void greatest(first d,secound x)
 {
     if(x.a>d.n)
        cout<<"\nEntered number  from secound  class ("<<x.a<<") is greater than that from first class ("<<d.n<<")";
     else
        cout<<"\nEntered number from first class ("<<d.n<<") is greater than that from second class ("<<x.a<<")";
 }
 int main()
 {
     first d;
     secound x;
     d.getdata();
     x.getdata2();
     greatest(d,x);
     return 0;
 }


