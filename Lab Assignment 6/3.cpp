#include <iostream>
#include <math.h>
using namespace std;
class triangle{
	public:
		void area(int l,int h)
		{
			float c=0.5*l*h;
			cout<<"area of right angled triangle: "<<c;
		}
		void area(int z)
		{
			float x=(sqrt(3)/4)*z*z;
			cout<<"area of equilateral triangle: "<<x;
		}
		void area(int f,int g,int h)
		{
			float alt=sqrt(pow(f,2) - (pow(g,2)/4));
			float ar=0.5*g*h;
			cout<<"area of isoceles triangle: "<<ar;
		}
};
int main()
{
	triangle a;
	a.area(4);
	cout<<"\n";
	a.area(3,4);
	cout<<"\n";
	a.area(3,4,5);
}
