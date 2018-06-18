#include "iostream"
using namespace std;
class demo
{
    char name[50];
public:
    void input(char *name);
    void logic();
    void display();
};
void demo:: input(char *t)
{int i;
    for(i=0;t[i]!='\0';i++)
        name[i]=t[i];
    name[i]='\0';
}
void demo::logic()
{int i,count=0;
    
    for(i=0;name[i]!='\0';i++)
        {
        if(name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u')
            {
            name[count]=name[i];
            count++;
            
            }
        }
    name[count]='\0';
    
    
}
void demo::display()
{
    cout<<name<<endl;
    
}


int main()
{
    demo p;
    char t[50];
    cin>>t;
    p.input(t);
    p.logic();
    p.display();
}
