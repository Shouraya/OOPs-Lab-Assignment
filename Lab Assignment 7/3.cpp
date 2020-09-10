#include<iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

float area(float base,float height)
{
        return(0.5 * base * height);
}
float area(float s1,float s2, int x)
{
        float a = pow(((s2*s2)-(s1*s1*0.25)),0.5)*x;
        return(s1*0.5*a);
        // base s1
}
float area(float s)
{
        return (0.432*s*s);
}
int main()
{
        float base,height,s1,s2,angle;
        int ch;

        do
        {
                cout<<"\n\n *****\nMenu\n****** \n";
                cout<<"\n1. Area of Right Triangle";
                cout<<"\n2. Area of Equilateral Triangle";
                cout<<"\n3. Area of Iscoseles Triangle ";
                cout<<"\n4. Exit";
                cout<<"\nEnter Your Choice : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"\nEnter the Base";
                                cin>>base;
                                cout<<endl<<"Enter the Height.";
                                cin>>height;
                                cout<<"\nArea of Right Triangle : "<<area(base,height);
                                break;
                        }
                        case 2:
                        {
                                cout<<"\nEnter side of Triangle : ";
                                cin>>s1;
                                cout<<"\nArea of Equilateral Triangle : "<<area(s1);
                                break;
                        }
                        case 3:
                        {
                                cout<<"\nEnter length of base"<<endl;
                                cin>>s1;
                                cout<<endl<<"Enter height"<<endl;
                                cin>>s2;
                                cout<<"\nArea of Iscoseles Triangle : "<<area(s1,s2,1);
                                break;
                        }
                        case 4:
                                exit(0);
                        default:
                                cout<<"\nInvalid Choice";
                }
        }while(ch!=4);
        return 0;
}