#include "iostream"
#include "string"
using namespace std;
class demo2;
class demo1
{
    char name[50];
public:
    void input(char *p);
    friend void logic(demo1,demo2);
    
};

class demo2
{
    char name[50];
public:
    void input(char *p);
    friend void logic(demo1,demo2);
    
};
void demo1::input(char *p)
{
    strcpy(name,p);
}
void demo2::input(char *p)
{
    strcpy(name,p);
}
void logic(demo1 p, demo2 q)
{
    int a[1000]={0},i,flag=0;
    for(i=0;p.name[i]!='\0';i++)
        a[p.name[i]]++;
    for(i=0;q.name[i]!='\0';i++)
        a[q.name[i]]--;
    for(i=0;p.name[i]!='\0';i++)
        if(a[p.name[i]]!=0)
             flag=1;
    if(flag==0)
        for(i=0;q.name[i]!='\0';i++)
            if(a[q.name[i]]!=0)
                flag=1;
    if(flag==0)
                 cout<<"anagram";
    else
        cout<<"not anagram";
}
int main()
{
    char w[50],z[50];
    demo1 p;
    demo2 q;
    cin>>w>>z;
    p.input(w);
    q.input(z);
    logic(p,q);
}
