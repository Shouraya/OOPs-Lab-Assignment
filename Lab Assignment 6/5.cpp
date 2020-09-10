#include<iostream>
using namespace std;
class Distance
{
    int meter;
    public:
        Distance():meter(0){}
        friend int addSix(Distance);
};

int addSix(Distance d)
{
    d.meter+=6;
    return d.meter;
}

int main()
{
    Distance d1;
    cout<<"DISTANCE:"<<" "<<addSix(d1);
    return 0;
}