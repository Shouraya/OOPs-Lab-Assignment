#include <iostream>
using namespace std;
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
}
int main()
{
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    cout << "Number before swapping\n";
    cout << "a = " << a <<endl;
    cout << "b = " << b <<endl;
    cout << "\nNumber after swapping\n";
    swap(a, b);
    return 0;
}