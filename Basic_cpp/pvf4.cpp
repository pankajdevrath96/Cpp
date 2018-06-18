#include <iostream>
using namespace std;
class demo
{
public:
    virtual void display()=0;
    
};
class test:public demo
{
public:
    void display()
    {
    cout<<"hello"<<endl;
    }
};
int main()
{
    demo *p;
    p=new test;
    p->display();
}

