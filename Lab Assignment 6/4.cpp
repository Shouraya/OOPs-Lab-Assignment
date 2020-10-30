#include <iostream>
using namespace std;
class complex{
	float a,b;
	public:
		complex(float x,float y)
		{
			a=x;
			b=y;
		}
		complex(){}
		friend complex add(complex,complex);
		void display()
		{
			cout<<"Sum is "<<a<<" + i"<<b;
		}
};
complex add(complex x,complex y)
{
	complex t;
	t.a=x.a+y.a ;
	t.b=x.b+y.b;
	return t;
}
int main()
{
	complex c1(3,4),c2(4.5,6.7),c3;
	c3=add(c1,c2);
	c3.display();
	return 0;
}
