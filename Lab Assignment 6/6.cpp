#include <iostream>
using namespace std;
class complex {
    int a,b;
	public:
	    void getvalue(){
	        cout<<"Enter the complex number:";
	        cin>>a>>b;
	    }
	    void operator++(){
	        a=++a;
	        b=++b;
	    }
	    void display(){
	        cout<<a<<" + i"<<b<< endl;
	    }
};
int main(){
    complex c1;
    c1.getvalue();
    ++c1;
    cout<<"Incremented Complex Number\n";
    c1.display();
    return 0;
}
