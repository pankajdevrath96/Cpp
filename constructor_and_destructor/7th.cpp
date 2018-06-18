#include "iostream"
#include "string"
using namespace std;
class demo
{
    char *name;
public:
    demo(char *s);
    void logic();
};
demo::demo(char *s)
{
    long int q;
    q=strlen(s);
    name=new char[q+1]; //memory allocation dynamically
    strcpy(name,s);
}

void demo::logic()
{
    int i,c=0;
    for(i=0;i<strlen(name);i++)
        if(name[i]=='a'||name[i]=='e'||name[i]=='o'||name[i]=='i'||name[i]=='u'||name[i]=='A'|name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
            c++;
    cout<<c<<endl;
}
int main()
{
    char m[50];
    cin>>m;
    demo t(m);
    t.logic();
}
