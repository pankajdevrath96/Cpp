#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    long a[100000], j, d, k[100], c[100], n, i, m;
    for(i=1; i<=T; i++)
    {
        cin >> n >> k[i];
        m=k[i];
        for(j=1; j<=n; j++)
        {
            cin>>a[j];
            for(d=2;d<a[j];d++)
            {
                if(a[j]%d==0)
                {
                    k[i]--;
                    break;
                }
            }
            if(d==a[j] && j!=n)
            {
                k[i]=m;
            }
        }
        if(k[i]<0)
        {
            c[i]=0;
        }
        else
        {
            c[i]=1;
        }
        
    }
    for(i=1; i<=T; i++)
    {
        cout<<c[i]<<endl;
    }
    //code
    return 0;
}
