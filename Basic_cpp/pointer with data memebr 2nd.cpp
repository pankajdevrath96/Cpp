#include "iostream"
using namespace std;
class demo
{
public:
    int a,b;
    void input();
    
};
void demo::input()
{
    cin>>a>>b;
    
}
int main()
{
    int demo::*p;
    p=&demo::a;
    int demo::*q;
    q=&demo::b;
    demo d;
    d.input();
    //cin>>d.*p>>d.*q;
    cout<<d.*p+d.*q<<endl;
    
}


