
#include "iostream"
#include "string"
using namespace std;
class demo
{
    char *name;
public:
    demo(char *p);
    void logic(demo);
    
};

demo::demo( char *p)
{
    long int l;
    l=strlen(p);
    name=new char[l+1];
    strcpy(name,p);
}
void demo::logic(demo q)
{
    if(strcmp(name,q.name)==0)
        cout<<"same string"<<endl;
    else
        cout<<"different string"<<endl;
}
int main()
{
    char str1[50],str2[50];
    demo *p,*q;
    cin>>str1>>str2;
    p=new demo(str1);
    q=new demo(str2);
    p->logic(*q);
    
}
