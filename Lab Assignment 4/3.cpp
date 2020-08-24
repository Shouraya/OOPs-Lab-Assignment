#include <iostream>
using namespace std;
class complex{
	float a,b;
	public:
		void set(float p, float q)
		{
			a=p;
			b=q;
		}
		void display()
		{
			cout<<a<<" + "<<b<<"i"<<endl;
		}
		complex sum(complex C)
		{
			complex temp;
			temp.a=a+C.a;
			temp.b=b+C.b;
			return temp;
		}
};
int main()
{
	complex c1,c2,c3;
	c1.set(2.3,4.1);
	c1.display();
	c2.set(6.9,9.6);
	c2.display();
	c3=c1.sum(c2);
	cout<<"Sum of both of the complex no is: ";
	c3.display();
}
