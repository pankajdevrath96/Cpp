#include<iostream>
using namespace std;
class demo
{
  
    int a,b;
public:
    void input();
    int logic();
    
    
};
void demo::input()
{
    cin>>a>>b;
    
}
int demo::logic()
{
    return a+b;
}
int main()
{
    demo p;
    p.input();
    int z=p.logic();
    cout<<z<<endl;
    return 0;
}
