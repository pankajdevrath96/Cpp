#include "iostream"
using namespace std;
class demo
{
    char name[50];
public:
    void input()
    {
    cin>>name;
    }
    void logic();
    void display()
    {
    cout<<name<<endl;
    }
};
void demo::logic()
{
    int i,count=0;
    char ch[50];
    for(i=0;name[i]!='\0';i++)
        {
        if(name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u')
            {
            ch[count]=name[i];
            count++;
            
            }
        }
    for(i=0;name[i]!='\0';i++)
        {
        if(name[i]!='a'&& name[i]!='e'&& name[i]!='i'&& name[i]!='o'&&name[i]!='u')
            {
            ch[count]=name[i];
            count++;
            }
        }
    ch[count]='\0';
    for(i=0;name[i]!='\0';i++)
        name[i]=ch[i];
    display();
}


int main()
{
    demo p;
    p.input();
    p.logic();
}
