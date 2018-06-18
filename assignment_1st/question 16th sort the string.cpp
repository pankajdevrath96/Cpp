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
    int i,count=0,j;
    char ch;
    for(i=0;name[i]!='\0';i++)
        count++;
    
    for(i=0;i<count-1;i++)
        {
        
        for(j=0;j<count-i-1;j++)
            if(name[j]>name[j+1])
               {
               ch=name[j];
               name[j]=name[j+1];
               name[j+1]=ch;
               
               }
        }
    
    
    display();
}


int main()
{
    demo p;
    p.input();
    p.logic();
}

