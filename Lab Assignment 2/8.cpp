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
    // Printing 2-D Matrix
    cout<<"Entered Matrix is: "<<endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j<n; j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    //Transpose
    cout<<"Transpose of above Matrix is: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[j][i]<<"\t";
        }
        cout<<endl;
    }
}