#include "iostream"
using namespace std;

int logic(int a[],int x,int n,int &c)
{
    int m;
    
    if(x==n)
        {
        if(a[x]%2==0)
            c++;
        return c;
        }
    m=(n+x)/2;
    logic(a,x,m,c);
    logic(a,m+1,n,c);
    return c;
}
int main()
{
    int n,c=0;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    
    c= logic(a,0,n-1,c);
    cout<<c<<endl;
}


