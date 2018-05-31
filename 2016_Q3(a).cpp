#include<iostream>
using namespace std;
int main()
{
    int a[10][10] , b[10][10] , c[10][10] ={0}, p , q , m , n;
    cout<<"Enter the dimensions of the matrix A "<<endl;
    cin>>p>>q;
    cout<<"Enter the dimensions of the matrix B "<<endl;
    cin>>m>>n;
    if(q==m)
    {
        cout<<"For matrix A"<<endl;
     for(int i=0;i<p;i++)
     {
         for(int j=0;j<q;j++)
         {   cout<<"enter the value "<<endl;
             cin>>a[i][j];
         }
     }
     cout<<"For matrix B"<<endl;
          for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
         {      cout<<"enter the value "<<endl;
             cin>>b[i][j];
         }
     }

     for(int i=0;i<p;i++) /// row of first matrix
     {
         for(int j=0;j<n;j++) ///col of 2nd matrix
         {
             for(int k=0;k<q;k++) ///col of first matrix
             {
                c[i][j] += a[i][k]*b[k][j]; /// this loop is created to stop increment in the value of j and increment in the value of k(rows)
             }

         }
     }
     for(int i=0;i<p;i++)
     {
         for(int j=0;j<n;j++)
         {
             cout<<c[i][j]<<" ";
         }
         cout<<endl;
     }







    }
    else
    {
        cout<<"Multiplication can't be performed"<<endl;
    }












    return 0;
}
