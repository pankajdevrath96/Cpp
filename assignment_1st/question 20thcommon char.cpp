#include "iostream"
using namespace std;
class demo
{
    char name[50];
public:
    void input();
    int logic(demo);
};
void demo::input()
{
    cin>>name;
}
int demo::logic(demo t)
{
    int c=0,i;
    int a[1000];
    for(i=0;name[i]!='\0';i++)
        a[name[i]]=1;
    for(i=0;t.name[i]!='\0';i++)
        a[t.name[i]]=0;
    
    for(i=0;name[i]!='\0';i++)
        if(a[name[i]]==0)
            { c++;
                a[name[i]]=1;}
    
    return c;
}



int main()
{
    demo p,q;
    p.input();
    q.input();
    int k=p.logic(q);
    cout<<k<<endl;
    return 0;
}
