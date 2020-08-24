#include <iostream>
using namespace std;
class hello{
	static int a; //a is count
	public:
		hello()
		{
			a++;
		}
		static void show_count()
		{
			cout<<"Total objects are: "<<a;
		}
};
int hello::a=0;
int main()
{
	hello x,y,z,p,q;
	x.show_count();
	cout<<endl;
	hello::show_count();
}
