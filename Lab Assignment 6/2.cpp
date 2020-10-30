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
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<p[i][j]<<"\t";
            }
            cout<<endl;
            }
            cout<<endl<<endl;
            }
        int row(){
            return n;
        }
        int col(){
            return m;
        }
        int** mat(){
            return p;
        }
        void getdata(){
            cout<<"Enter the array elements."<<endl;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cin>>p[i][j];
                }
            }
}
    friend matrix operator*(matrix obj);
};
matrix operator*(matrix obj1,matrix obj2){
    matrix res;
    int r1=obj1.row();
    int c2=obj2.col();
    int c1=obj1.col();
    int **a=obj1.mat();
    int **b=obj2.mat();
    int **result=res.mat();
    for(int i = 0; i < r1; ++i)
        for(int j = 0; j < c2; ++j)
            for(int k = 0; k < c1; ++k){
                result[i][j] += a[i][k] * b[k][j];
            }
            return res;
}
int main(){
    matrix a;
    a.getdata();
    matrix b;
    b.getdata();
    a.display();
    b.display();
    matrix result;
    result=a*b;
    cout<<endl<<"Matrix after multiplication : "<<endl;
    result.display();
}