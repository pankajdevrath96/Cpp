#include<iostream>
#include<fstream>
using namespace std;
class demo
{
    char name[50];
    static int c;
public:
    void input();
    void logic();
    void display();
};

int demo::c;
void demo::input()
{
    //cin>>name;
    //std::getline(cin,name);
    
}
void demo::logic()
{
    int i;
    for(i=0;name[i]!='\n';i++)
        c++;
}
void demo::display()
{
    cout<<c<<endl;
    
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
