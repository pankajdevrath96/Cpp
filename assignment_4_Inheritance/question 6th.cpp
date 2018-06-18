#include<iostream>
using namespace std;
class demo1
{
protected:
    int a[50],n;
    void input(int [],int);
};

void demo1::input(int p[], int x)
{
    n=x;
    for(int i=0;i<n;i++)
        a[i]=p[i];
    
}
class demo2:public demo1{
public:
    void logic(void);
};

void demo2::logic()
{
    int x;
    cin>>x;
    int p[x];
    for(int i=0;i<x;i++)
        cin>>p[i];
    input(p, x);
    
    int flag=0;
    for(int j=x-1;j>=0;j--)
        {
        for(int k=j-1;k>=0;k--)
            if(a[k]==a[j])
               {
               cout<<j;
               flag=1;
               break;
               }
        if(flag==1)
            break;
        }
    
}
class demo3:public demo2{
public:
    void display();
};
void demo3::display()
{
    logic();
   
    
}
int main(){
    
    demo3 p;
    p.display();
   
}

