#include "iostream"
#include "string"
using namespace std;
class demo
{
    char pattern[50];
public:
    void input(char *p);
    friend void logic(demo p);
};

void demo::input(char *p)
{
    strcpy(pattern,p);
}
void logic(demo p)
{
    int i=1,k=0,count=0;
    char m[1000];
    m[0]=p.pattern[0];
    while(p.pattern[i]!=0)
        {
        if(p.pattern[i]==m[k])
           {
           count++;
           }
           else
           {
           m[++k]=p.pattern[i];
           
           }
           i++;
        
        
        }
    
    
    
    
    /* int b[1000],count=0,i;
    for(i=1;p.pattern[i]!='\0';i++)
        {
        b[p.pattern[i]]++;
        
        if(b[p.pattern[i]]>=1&& b[p.pattern[i-1]]==b[p.pattern[i]])
            {
            count++;
            b[p.pattern[i]]--;
            }
        else
            b[p.pattern[i]]=0;
        }*/
    cout<<count<<endl;
}

int main()
{
    demo z;
    char a[50];
    cin>>a;
    z.input(a);
    logic(z);
    return 0;
}
