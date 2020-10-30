#include<iostream>
using namespace std;
class alpha
{
    int a,b,temp;
   public:
   	
    void get()
    {	cout<<"enter both numbers: ";
    	cin>>a>>b;
    }
    
    friend void swap(alpha &ob);
    void display(){
    	cout << "After swap values are "<< a<<" "<<b;
	}
};
void swap(alpha &ob)
{	
	ob.temp=ob.a;
	ob.a=ob.b;
	ob.b=ob.temp;

}
int main()
{
    alpha obj;
    obj.get();
    swap(obj);
    obj.display();
    return 0;
}