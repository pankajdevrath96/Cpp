#include<iostream>
using namespace std;
class demo{
protected:
    
    int a[50],n;
public:
    demo(int a[],int n);
    void logic(void);
};

demo::demo(int a[],int n)
{
    this->n=n;
    for(int i=0;i<n-1;i++)
        this->a[i]=a[i];
}
void demo::logic()
{
    int sum=0,x;
    cin>>x;
    for(int i=0;i<n-1;i++)
            sum+=a[i];
    x*=n;
    x-=sum;
    cout<<x<<endl;
    
}
class demo2:public demo{
public:
    
    demo2(int a[],int n):demo(a,n){
        logic();
    }
   
};
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    demo2 p(a,n);
    //p.logic();
}

