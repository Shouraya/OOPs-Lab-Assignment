#include <iostream>
#include <string>
using namespace std;
class shape{
	public:
		double base;
		double height;
		void get_data()
		{
			cout<<"Enter base and height in shape class: ";
			cin>>base>>height;
		}
		virtual void display()
		{
			cout<<"\nIn shape class Area of rectangle is "<<base*height<<"  &  Area of triangle is "<<0.5*base*height<<endl;
		}
};
class rectangle:public shape{
	public:
		void get_data()
		{
			cout<<"Enter base and height in rectangle class: ";
			cin>>base>>height;
		}
		void display()
		{
			cout<<"\nIn rectangle class Area of rectangle is "<<base*height<<endl;
		}
};
class triangle:public shape{
	public:
		void get_data()
		{
			cout<<"Enter base and height in triangle class: ";
			cin>>base>>height;
		}
		void display()
		{
			cout<<"\nIn triangle class Area of triangle is "<<0.5*base*height<<"\n"<<endl;
		}
};
int main()
{
	shape s1,*s2,*s3;
	rectangle r1,r;
	triangle t1,t;
	s2=&r;
	s3=&t;
	s1.get_data();
	r1.get_data();
	t1.get_data();
	s1.display();
	r1.display();
	t1.display();
	s2->get_data();
	s3->get_data();
	s2->display();
	s3->display();
	return 0;
}