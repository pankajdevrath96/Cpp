#include "iostream"
using namespace std;
class demo
{
public:
    virtual void input()=0;
};
class test
{
public:
    virtual void logic()=0;
};
class demo2:public demo,public test
{
    int a,b,x;
public:
    void input(){
        cin>>a>>b;
    }
    void logic()
    {
    input();
    if(a>b)
        {
        for(int i=1;i<b;i++)
            if(a%i==0 && b%i==0)
                x=i;
        
        }
    else
        
            {
            for(int i=1;i<a;i++)
                if(a%i==0 && b%i==0)
                    x=i;
            
    }
     cout<<x<<endl;
    
    /*
     int t=a%b;
     while(t>0)
     {
     a=b;
     b=t;
     t=a%b;
     }
     cout<<b<<endl;
     */
    }
    
};



int main()
{
    demo2 p;
    p.logic();
}
