#include "iostream"
using namespace std;
class demo
{
    int a,b,c;
public:
    void input(int x,int y);
    void display();
    
};
void demo::input(int x, int y)
{
    a=x;
    b=y;
}
void demo::display()
{
    cout<<a<<" "<<endl;
    
}
int main()
{
    demo p;
    int a,b;
    cin>>a>>b;
    void demo::*ptr1(int ,int);
    ptr1=&demo::input(a, b);
    p.*ptr1(a, b);
    p.display();
    
    
}
