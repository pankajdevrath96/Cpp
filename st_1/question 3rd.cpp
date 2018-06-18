#include<iostream>
using namespace std;
class complex
{
    int r,i;
public:
    complex()
    {
    cin>>r>>i;
    }
    
    
    complex operator +(complex x)
    {
    r+=x.r;
    i+=x.i;
    return *this;
    }
    complex operator -(complex x)
    {
    r-=x.r;
    i-=x.i;
    return *this;
    }
    complex operator*(complex x)
    {
    complex m;
    m.r=(r*x.r)-i*x.i;
    m.i=i*x.r+r*x.i;
    return m;
    }
    void show()
    {
    if(i>0)
        cout<<r<<"+"<<i<<"i";
    else
        cout<<r<<i<<"i";
    
    }
};
    int main() {
        complex C1,C2,C3,C4,C5;
        C5=C1+C2-C3*C4;
        C5.show();
        return 0;
    }
