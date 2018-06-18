#include <iostream>
using namespace std;
int main()
{
    int i,j,k=0,n,x=0 ;
    cin>>n;
    int  a[n][n],b[n][n];
    for(i=0;i<n;i++)
    { for (j=0;j<n;j++)
    {
        cin>>a[i][j];
        b[i][j]=a[i][j];
    }
    }
    for(i=0;i<n;i++)
    { for(j=0;j<n;j++)
    {
        if(a[i][j]==2)
        {
            if(i!=0 && a[i-1][j]==1)
            {
                b[i-1][j]=2;
                k=1;
            }
            if(j!=0 && a[i][j-1]==1)
            {
                b[i][j-1]=2;
                k=1;
            }
            if(j!=n-1 && a[i][j+1]==1)
            {
                b[i][j+1]=2;
                k=1;
            }
            if(i!=n-1 &&a[i+1][j]==1)
            {
                b[i+1][j]=2;
                k=1;
            }
            
        }
        
        if((i==(n-1)) && (j==(n-1)) && (k==1))
        {
            k=0;
            for(i=0;i<n;i++){
                for (j=0;j<n;j++){
                   // cout << b[i][j];
                    a[i][j]=b[i][j];
                }
               // cout<<endl;
            }
            
            x++;i=0;j=0;
        }
    }
    }
    
    cout<<x<<endl;
}
