#include<iostream>
#include<math.h>
using namespace std;
struct complex{
	float real;
	float imaginary;
};
int main()
{
	struct complex sum,subt,multiply,divide,comp2,comp3;
    cout<<"Enter the real part of the first number: ";
    cin>>comp2.real;
    cout<<"Enter the imaginary part of the first number: ";
    cin>>comp2.imaginary;
    cout<<"Enter the real part of the second number: ";
    cin>>comp3.real;
    cout<<"Enter the imaginary part of the second number: ";
    cin>>comp3.imaginary;
    // Real Sum
	sum.real=comp2.real+comp3.real;
    // Imaginary Sum
	sum.imaginary=comp2.imaginary+comp3.imaginary;
    // Real Difference
	subt.real=comp2.real-comp3.real;
    // Imaginary Differece
	subt.imaginary=comp2.imaginary-comp3.imaginary;
    // Real multiplication
	multiply.real=(comp2.real*comp3.real)-(comp2.imaginary*comp3.imaginary);
    // Imaginary Multiplication
	multiply.imaginary=(comp2.real*comp3.imaginary)+(comp2.imaginary*comp3.real);
    // Division Real
	divide.real=(((comp2.real)*(comp3.real))+((comp2.imaginary)*(comp3.imaginary)))/(pow(comp3.real,2)+pow(comp3.imaginary,2));
    // Division Imaginary
	divide.imaginary=(((comp3.real)*(comp2.imaginary))-((comp2.real)*(comp3.imaginary)))/(pow(comp3.real,2)+pow(comp3.imaginary,2));
	// Output
    cout<<"Sum of complex numbers is :"<<sum.real<<" + i"<<sum.imaginary<<endl;
	cout<<"Subtraction of complex numbers is :"<<subt.real<<" + i"<<subt.imaginary<<endl;
	cout<<"Multiplication of complex numbers is :"<<multiply.real<<" + i"<<multiply.imaginary<<endl;
	cout<<"Division of complex numbers is :"<<divide.real<<" + i"<<divide.imaginary<<endl;
}
