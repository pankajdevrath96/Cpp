#include <iostream>
using namespace std;

int main() {
    //code
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,k,i,j;
        cin>>m>>n>>k;
        int a[105][105],b[105][105];
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
                cin>>a[i][j];
        }
        while(k>0)
        {
            k--;
            for(i=1;i<=m;i++)
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1)
                    {
                        b[i][n]=a[i][j];
                        
                    }
                    else
                        b[i][j-1]=a[i][j];
                }}for(i=1;i<=m;i++)
                {
                    for(j=1;j<=n;j++)
                        a[i][j]=b[i][j];
                }
            
        }
        cout<<endl;
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
                cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
