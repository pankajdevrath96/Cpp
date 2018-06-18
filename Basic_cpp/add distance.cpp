#include<iostream>
using namespace std;
class ADD
{
    int a,b,c;
    float x,y,z;
public:

    void input()
    {
    cin>>a>>x>>b>>y;
    a=a+b;
    x=x+y;
    if(x>12)
        {
        x=x-12;
        a++;
        }
    
    cout<<a<<"feet"<<x<<"inches";
    
    }
};
int main()
{
    ADD p;
    p.input();
    
}

