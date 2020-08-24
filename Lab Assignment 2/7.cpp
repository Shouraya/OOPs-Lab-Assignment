#include<iostream>
using  namespace std;
int main()
{
    int m,n,i,j,sum=0;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int a[m][n];
    // 2-D Array Input
    for (i = 0; i < m; i++)
    {
        for (j = 0; j<n; j++)
        {
            cout<<"Enter the a["<<i<<"]["<<j<<"]: ";
            cin>>a[i][j];
        }
    }
    // Sum
    for (i = 0; i < m; i++)
    {
        for (j = 0; j<n; j++)
        {
            
            sum+=a[i][j];
        }
        cout<<"Sum of "<<i+1<<" row is: "<<sum<<endl;
        sum = 0;
    }
}