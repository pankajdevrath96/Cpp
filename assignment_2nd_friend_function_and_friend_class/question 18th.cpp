#include "iostream"
#include "string"
using namespace std;
class demo
{
    char pass[50];
public:
    void input(char *p);
    friend void logic(demo);
};
void demo::input(char *p)
{
    strcpy(pass,p);
}

void logic( demo d)
{
    int z=0,x=0,c=0,i;
    for(i=0;i<d.pass[i]!='\0';i++)
        {
        if(isalpha(d.pass[i]))
           z=1;
        else if(isnumber(d.pass[i]))
               x=1;
        else
            c=1;
        }
    if(z>0&&x>0&&c>0)
        cout<<"valid"<<endl;
    else
        cout<<"invalid"<<endl;
}
int main()
{
    char a[50];
    cin>>a;
    demo p;
    p.input(a);
    logic(p);
}
