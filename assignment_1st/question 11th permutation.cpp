#include"iostream"
#include "string"
using namespace std;
class demo
{
    char name[50];
public:
    void input(char *p);
    void logic();
    
};
void demo::input(char *m)
{
    strcpy(name,m);
}



int main()
{
    char m[50];
    cin>>m;
    demo d;
    d.input(m);
    d.logic();
}
