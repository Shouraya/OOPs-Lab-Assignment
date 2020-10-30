#include<iostream>
using namespace std;
class matrix{
    private:
        int m,n;
        int **p;
    public:
matrix(){
    cout<<"Enter the number of rows and columns of the matrix."<<endl;
    cin>>m>>n;
    p=new int *[m];
    for(int i=0;i<m;i++)
    {
        p[i]=new int[n];
    }
}
void display(){
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
int row(){
    return n;
}
int col()
{
    return m;
}
int** mat()
{
    return p;
}
void getdata(){
    cout<<"Enter the array elements."<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
             cin>>p[i][j];
        }
    }
}
matrix mul(matrix obj){
    matrix res;
    int r1=n;
    int c2=obj.col();
    int c1=m;
    int **a=p;
    int **b=obj.mat();
    int **result=res.mat();
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
            for(int k = 0; k < c1; ++k)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
    return res;
}
};
int main(){
    matrix a;
    a.getdata();
    matrix b;
    b.getdata();
    a.display();
    b.display();
    matrix result;
    result=a.mul(b);
    cout<<endl<<"Matrix after multiplication : ";
    result.display();
}
