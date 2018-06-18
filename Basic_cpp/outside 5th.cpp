#include<iostream>
using namespace std;
class demo
{
  
    int a,b;
public:
    void input(int x,int y)
    {
     a=x;
     b=y;
     }
     int logic();
    int display();
    
};

int demo::display()
{
    return logic();
    
}
int demo::logic()
{
    return a+b;
}
int main()

{
    demo d;
    int a,b;
    cin>>a>>b;
    d.input(a,b);
    int k=d.display();
    cout<<k<<endl;
    
    
    return 0;
}
