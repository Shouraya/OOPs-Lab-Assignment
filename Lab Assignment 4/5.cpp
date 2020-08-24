#include<iostream>
using namespace std;
//Class Declaration
class  dist{
	int feet;
	float inch;
	public:
		//Fucntion to set distance
		void set(int f, float i)
		{
		 	feet=f;
		 	inch=i;
		}
		void disp()
		{
			cout<<endl<<"Distance "<<endl<<"**************"<<endl<<feet<<" feet "<<inch<<" inches";
		}
		dist add(dist temp)
		{
			dist result;
			result.feet=feet+temp.feet;
			result.inch=inch+temp.inch;
			// convert 12 inch to 1 feet
			if(result.inch>12)
			{
				result.feet++;
				result.inch=result.inch-12;
			}
			return result;
		}
};

int main()
{ 	dist obj,obj1,obj2;
	obj.set(5,4);
	obj1.set(5,11);
	obj2=obj.add(obj1);
	obj.disp();
	obj1.disp();
	obj2.disp();
	return 1;
}
