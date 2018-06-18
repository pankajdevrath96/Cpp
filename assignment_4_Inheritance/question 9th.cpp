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
    for(int i=0;i<n/2-1;i++)
        {
        for(int j=0;j<n/2-i-1;j++)
            if(a[j]>a[j+1])
               {
               int t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
               }
        for(int j=n/2;j<n-i-1;j++)
            if(a[j]<a[j+1])
                {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                }
            
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
