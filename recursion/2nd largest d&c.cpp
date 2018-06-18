#include "iostream"
using namespace std;

int logic(int a[],int x,int n,int &l,int &sl)
{
    int m;
    
    if(x==n)
        {
        if(a[x]>l)
            {
            sl=l;
            l=a[x];
            }
       else if(a[x]>sl)
            sl=a[x];
        return sl;
        }
    m=(n+x)/2;
    logic(a,x,m,l,sl);
    logic(a,m+1,n,l,sl);
    return sl;
}
int main()
{
    int n,l=0,sl=0;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    logic(a,0,n-1,l,sl);
    cout<<sl<<endl;
}



