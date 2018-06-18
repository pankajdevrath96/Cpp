#include "iostream"
using namespace std;
class demo
{
public:
    virtual void display()=0;
};

class test
{
    int a,b;
public:
    void input()
    {
    cin>>a>>b;
    display();
    }
    void display()
    {
    int c=a;
    a=b;
    b=c;
    cout<<a<<endl<<b<<endl;
    
    }
};
int main()
{
    test t;
    t.input();
   
}
