#include <iostream>
using namespace std;
void swap(int &n1, int &n2) {
    int c;
    c = n1;
    n1 = n2;
    n2 = c;
}
int main()
{
    int a,b;
    cout<<"Enter first number: "<<endl;
    cin>>a;
    cout<<"Enter second number: "<<endl;
    cin>>b;
    cout << "Number before swapping\n";
    cout << "a = " << a<<endl;
    cout << "b = " << b<<endl;
    swap(a, b);
    cout << "\nNumber after swapping\n";
    cout << "a = " << a<<endl;
    cout << "b = " << b<<endl;
    return 0;
}