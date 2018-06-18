#include<iostream>
using namespace std;
class demo1
{
protected:
    unsigned long int a[50],n;
    void input(unsigned long int [],int);
};

void demo1::input(unsigned long int p[], int x)
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
   unsigned long int p[x];
    for(int i=0;i<x;i++)
        cin>>p[i];
    input(p, x);
    
    int f=0;
    for(int i=0;i<n;i++)
        {
        unsigned long m=a[i];
        while(m>0)
            {
            if(m%100000==55555)
                {
                f++;
                break;
                }
            m/=10;
            }
        }
    cout<<f<<endl;
    
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
