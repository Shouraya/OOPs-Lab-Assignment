#include <iostream>
using namespace std;
int main()
{
    int i, flag;
    int a=1;
    cout << "Prime numbers between 1 and 300 are: "<<endl;
    while (a < 300)
    {
        flag = 0;
        for(i = 2; i <= a/2; ++i)
        {
            if(a % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << a << " " <<endl;
        ++a;
    }
    return 0;
}
