#include<iostream>
using namespace std;
class great {
    int a,b;
    public:
    void get(int x, int y);
    friend int check(great G);

};
void great::get(int x, int y){
    a=x;
    b=y;
}
int check(great G)
{
    if(G.a>G.b)
    {
        cout<<"a is greater";
    }
    else if(G.a==G.b)
    {
        cout<<"Both are equal!";
    }
    else
    {
        cout<<"b is greater";
    }
    return 0;
}
int main()
{
    great G1;
    G1.get(3,4);
    cout<<check(G1);
    return 0;
}