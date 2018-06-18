#include "iostream"
using namespace std;
class demo
{
    char name[50];
public:
    void input(char *p);
    int logic();
    
};
void demo::input(char *p)
{
    int i;
    for(i=0;p[i]!='\0';i++)
        name[i]=p[i];
    name[i]='\0';
}
int demo::logic()
{
    int c=0,count=0,i,j,k,l,a[1000];

    for(i=0;name[i]!='\0';i++)
        {
        count++;
        a[name[i]]++;
        }
    
    if(count%2==1)
        {
        for(i=0;name[i]!='\0';i++)
            {
            if(name[i]%2!=0)
                {
                c++;
                
                }
            }
        }
    return c;
}
int main()
{
    char m[50];
    cin>>m;
    demo d;
    d.input(m);
    int z=d.logic();
    cout<<z;
}
