#include<iostream>
using namespace std;

class demo
{
    int age;
    static int large;
public:
    void input();
    void logic();
    void display();
    
    
};
int demo ::large;
void demo ::input()
{
    cin>>age;
}
void demo::logic()
{
    if(age>large)
        large =age;
}

void demo::display()
{
    cout<<large<<endl;
}



int main()
{
    demo d1,d2;
    d1.input();
    d2.input();
    d1.logic();
    d2.logic();
    d1.display();
    
}
