#include <iostream>
#include <string>
using namespace std;
class shape{
	public:
		double base;
		double height;
		shape()
		{
			cout<<"Enter base and height: ";
			cin>>base>>height;
		}
		virtual void display_area()=0;
};
class rectangle:public shape{
	public:
		void display_area()
		{
			cout<<"In rectangle class Area of rectangle is "<<base*height<<endl;
		}
};
class triangle:public shape{
	public:
		void display_area()
		{
			cout<<"In triangle class Area of triangle is "<<0.5*base*height<<"\n"<<endl;
		}
};
int main()
{
	rectangle r1;
	r1.display_area();
	triangle t1;
	t1.display_area();
	return 0;
}