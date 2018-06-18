#include<iostream>
using namespace std;
class demo
{
protected:
    int a[50],n;
public:
    demo(int [],int);
};
demo::demo(int p[],int m)
{
    n=m;
    for(int i=0;i<n;i++)
        a[i]=p[i];
}
class test:public demo{
public:
    test(int p[],int m):demo(p,m)
    {
    
    }
    void logic()
    {
    int p[n],j=0;
    for(int i=0;i<n;i++)
        if(a[i]%2==0)
            p[j++]=a[i];
    int k=0;
    
    for(int i=0;i<j-1;i++)
        for( k=0;k<j-i-1;j++)
            if(p[k]>p[k+1])
               {
               int l=p[k];
               p[k]=p[k+1];
               p[k+1]=l;
               }
    for(int i=0;i<n;i++)
        {
        if(a[i]%2==0)
            a[i]=p[k++];
        }
               
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    }
    
};
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    test p(a,n);
    p.logic();
    
    
}

