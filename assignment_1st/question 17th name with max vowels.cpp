#include "iostream"
using namespace std;
class test
{
    char name[50];
public:
    void input();
    test logic(test,test);
    void display();
    
};
void test::input()
{
    cin>>name;
}
test test::logic(test t1,test t2)
{
    test t;
    int c1=0,c2=0,c3=0,i;
    for(i=0;name[i]!='\0';i++)
        {
        if(name[i]=='a'|| name[i]=='e'|| name[i]=='i'|| name[i]=='o'|| name[i]=='u')
            {
            c1++;
            }
        }
    for(i=0;t1.name[i]!='\0';i++)
        {
        if(t1.name[i]=='a'|| t1.name[i]=='e'|| t1.name[i]=='i'|| t1.name[i]=='o'|| t1.name[i]=='u')
            {
            c2++;
            }
        }
    
    for(i=0;t2.name[i]!='\0';i++)
        {
        if(t2.name[i]=='a'|| t2.name[i]=='e'|| t2.name[i]=='i'|| t2.name[i]=='o'|| t2.name[i]=='u')
            {
            c3++;
            }
        }
    
    if(c1>=c2&&c1>=c3)
        for(i=0;name[i]!='\0';i++)
            {
            t.name[i]=name[i];
            }
    else if(c2>=c1&&c2>=c3)
        for(i=0;t1.name[i]!='\0';i++)
            {
            t.name[i]=t1.name[i];
            }
    else
        for(i=0;t2.name[i]!='\0';i++)
            {
            t.name[i]=t2.name[i];
            }
        
    
    return t;
}
void test::display()
{
    cout<<name<<endl;
}
int main()
{
    test t1,t2,t3,t4;
    t1.input();
    t2.input();
    t3.input();
    t4=t1.logic(t2,t3);
    t4.display();
    return 0;
    
}
