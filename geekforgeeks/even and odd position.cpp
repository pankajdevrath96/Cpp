#include <iostream>
using namespace std;

int main() {
    //code
    int t,a[10000],n,i,j,k,b[10000];
    float s;
    cin>> t;
    while(t>0)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        k=1;j=0;
            
            for(i=0;i<n;i++)
            {
                s=a[i]%2;
            if(s==0)
            {
                b[j]=a[i];
                j+=2;
            }
            else{
                b[k]=a[i];
                k+=2;
            }
            
            }
        
        
        for(i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        
        cout<<endl;
        t--;
    }
    return 0;
}
