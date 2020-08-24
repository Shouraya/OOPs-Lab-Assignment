#include <iostream>
using namespace std;
class rectangle{
	float length,width;
	public:
		void setlength(float l)
		{
			length=l;
		}
		void setwidth(float w)
		{
			width=w;
		}
		float perimeter()
		{
			cout<<"The perimeter for entered dimensions is: "<<2*(length+width)<<endl;
		}
		float area()
		{
			cout<<"The area for entered dimensions is: "<<length*width<<endl;
		}
};
int main()
{
	rectangle r1;
	r1.setlength(2.6);
	r1.setwidth(6.9);
	r1.perimeter();
	r1.area();
}
