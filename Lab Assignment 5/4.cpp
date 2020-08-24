#include <iostream>
using namespace std;
class hello{
	private:
		int num;
		static int cnt;
	public:
		hello()
		{
			cnt++;
			num=cnt;
		}
		void print()
		{
			cout<<"Number is: "<<num<<endl;
			cout<<"Count is: "<<cnt<<endl<<"****************"<<endl;
		}
};
int hello::cnt=0;
int main ()
{
	hello x,y,z;
    cout<<"****************"<<endl;
	x.print();
	y.print();
	z.print();
}