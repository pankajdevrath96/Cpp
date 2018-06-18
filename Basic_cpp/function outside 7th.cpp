#include<iostream>
using namespace std;
class demo
{
              char name[50];
              int count=0;
    int a[1000]={1};
public:
    void input();
    void logic(demo t);
    void display();
    
};
void demo::input()
{
    cin>>name;
    
}
void demo::logic(demo t)
{
    int i;
    for(i=0;name[i]!='\0';i++)
        {
        if((name[i]=='a')||(name[i]=='e')||(name[i]=='i')||(name[i]=='o')||(name[i]=='u'))
            a[name[i]]=1;
        }
    for(i=0;t.name[i]!='\0';i++)
        {
        if((t.name[i]=='a')||(t.name[i]=='e')||(t.name[i]=='i')||(t.name[i]=='o')||(t.name[i]=='u'))
            a[t.name[i]]=0;
        }
    for(i=0;name[i]!='\0';i++)
        {
        if((name[i]=='a')||(name[i]=='e')||(name[i]=='i')||(name[i]=='o')||(name[i]=='u'))
            if(a[name[i]]==0)
                {count++;
                    a[name[i]]=1;
                }
        }
}
void demo::display()
{
    cout<<count<<endl;
    
}
int main()
{
    demo d1,d2;
    d1.input();
    d2.input();
    d1.logic(d2);
    d1.display();
    return 0;
}
