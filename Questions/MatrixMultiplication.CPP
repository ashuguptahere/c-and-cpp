#include<iostream>
using namespace std;
int main()
{
    int a[10][10], b[10][10], c[10][10],m,n,p,q,i,j,k;
    cout<<"Enter the rows and columns for matrix A:";
    cin>>m>>n;
    cout<<"Enter the rows and columns for matrix B:";
    cin>>p>>q;
    if(n==p)
    {
        cout<<"Enter the elements for martix A:";
        for(i=0;i<m;++i)
        for(j=0;j<n;++j)
        cin>>a[i][j];

        cout<<"Enter the elements for martix B:";
        for(i=0;i<p;++i)
        for(j=0;j<q;++j)
        cin>>b[i][j];

        cout<<"Product of the matrix:\n";
        for(i=0;i<m;i++)
        {
            for(j=0;j<p;j++)
            {
                c[i][j]=0;
                for(k=0;k<p;k++)
                {
                    c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
                }
            }
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else
    cout<<"Matrix can not be multiplied";
}
