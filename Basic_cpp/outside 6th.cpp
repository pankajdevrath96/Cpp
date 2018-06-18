#include<iostream>
using namespace std;
class demo
{
    int a,b;
public:
    void input(int x,int y);
    int display();
    int logic();
    
    
};
void demo::input(int x,int y)
{
    a=x;
    b=y;
}
int demo::logic()
{
    int a,b;
    cin>>a>>b;
     input(a,b);
    return a+b;
}

int demo::display()
{
    return logic();
}
int main()
{
    demo d;
    int x=d.display();
    cout<<x<<endl;
    
    return 0;
}
