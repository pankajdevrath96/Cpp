#include "iostream"
using namespace std;
int isprime(int n,int x)
{
    if(x==1)
        return 1;
    else
        {
        if(n%x==0)
            return 0;
        else
            return isprime(n, --x);
        }
    
}
int logic(int a[],int x,int n,int &c)
{
    int m;
    
    if(x==n)
        {
        if(isprime(a[x],(a[x]-1))==1)
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

