#include "iostream"
using namespace std;
class demo
{
public:
    int a,b;
};

int main()
{
    int demo::*p;
    p=&demo::a;
    int demo::*q;
    q=&demo::b;
    demo d;
    cin>>d.*p>>d.*q;
    cout<<d.*p+d.*q<<endl;
    
}

