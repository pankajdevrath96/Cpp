#include "iostream"
using namespace std;
class demo
{
    char name[50];
    char str[50];
public:
    demo();
    friend void lo(demo,demo,demo);
};
demo::demo()
{
    gets(name);
    gets(str);
    
}
void lo(demo p,demo q,demo r)
{
    int l1=0,l2=0,l3=0;
    int i,j;
    for(i=0;i<strlen(p.str);i++)
        {
        int l=i;
        for( j=i;p.str[j]!=' '&&p.str[j]!='\0';j++)
            {}
    
        l=j-l;
        if(l>l1)
            l1=l;
        }
    for(i=0;i<strlen(q.str);i++)
        {
        int l=i;
        for( j=i;q.str[j]!=' '&&q.str[j]!='\0';j++)
            {}
    
        l=j-l;
        if(l>l2)
            l2=l;
        }
    for(i=0;i<strlen(r.str);i++)
        {
        int l=i;
        for( j=i;r.str[j]!=' '&&r.str[j]!='\0';j++)
            {}
        l=j-l;
        if(l>l3)
            l3=l;
        }
    if(l1>l2&&l1>l3)
        cout<<p.name<<endl;
    else if(l2>l1&&l2>l3)
        cout<<q.name<<endl;
    else
        cout<<r.name<<endl;
    
   
    
}
int main()
{
    demo p,q,r;
    lo(p,q,r);
}
