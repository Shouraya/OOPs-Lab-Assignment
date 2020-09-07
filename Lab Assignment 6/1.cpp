#include<iostream>
#include<conio.h>
using namespace std;
class  stud
{
    int a[5];
    public:
        void get()
        {
            cout<<"Enter numbers: "<<endl;
            for(int i=0;i<5;i++)
            {
                cin>>a[i];
            }
        }
    friend float sum(stud x);
};
float sum(stud x)
{
   float s=0;
   for(int i=0;i<5;i++)
    {
       s += x.a[i];
    }
    return s/5;
}
int main()
{
    stud s1;
    s1.get();
    cout<<sum(s1);
    return 0;
}   