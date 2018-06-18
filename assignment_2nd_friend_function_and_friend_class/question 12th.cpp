#include "iostream"
using namespace std;
class test;
class demo
{
    int a[10];
public:
    void input(int m[]);
    friend void logic(demo,test);
    
};
class test
{
    int x[10];
public:
    void input(int m[]);
    friend void logic(demo, test);
};
void demo::input(int m[])
{
    for(int i=0;i<5;i++)
        a[i]=m[i];
}

void test::input(int m[])
{
    for(int i=0;i<5;i++)
        x[i]=m[i];
}
void logic(demo p, test t)
{
    int i=0;
    for(i=0;i<5;i++)
        p.a[i]+=t.x[i];
    
    for(i=0;i<5;i++)
        cout<<p.a[i]<<" ";
    
    cout<<endl;
     for(i=0;i<5;i++)
        p.a[i]-=t.x[i];
    for(i=0;i<5;i++)
        cout<<p.a[i]<<" ";
    cout<<endl;
    
}
int main()
{
    int a[5],b[5],i;
    for(i=0;i<5;i++)
        cin>>a[i];
    
    for(i=0;i<5;i++)
        cin>>b[i];
    demo p;
    test q;
    p.input(a);
    q.input(b);
    logic(p,q);
    
    
    return 0;
}

