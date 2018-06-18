#include<iostream>
using namespace std;
class test{
protected:
    int n;
public:
    void input(int);
};
void test::input(int m)
{
    n=m;
}
class demo:public test{
public:
    void logic();
};
void demo::logic(){
    
    int  t=1,t1=1,m;
    
    for (int i = 1; i <= n; i++)
        {
        cout<<t<<" ";
        m=t+t1;
        t=t1;
        t1=m;
        }
    
}


int main()
{
    int m;
    cin>>m;
    demo p;
    p.input(m);
    p.logic();
}
