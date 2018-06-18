#include "iostream"
using namespace std;
class demo
{
    int a,b;
    void logic();
    void display();
public:
    demo()
    {
    cin>>a>>b;
    logic();
    }
};
void demo::logic()
{
    a=a+b;
    display();
    
}
void demo::display()
{
    cout<<a<<endl;
}
int main()
{
    demo p;
}
