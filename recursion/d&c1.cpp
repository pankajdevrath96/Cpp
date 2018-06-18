#include "iostream"
using namespace std;

int logic(int a[],int x,int n)
{
    int m;
    if(x>n)
        return 0;
    
    if(x==n)
        return a[x];
    
         m=(n+x)/2;
        return logic(a,x,m)+logic(a,m+1,n);
        
    
}
int main()
{
    int n;
    cin>>n;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<logic(a,0,n-1)<<endl;
}
