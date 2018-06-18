#include "iostream"
#include "string"
using namespace std;
class demo

{
    
public:
   
    void check(char *s)
    {
    int i,m=0,f=0;
    for(i=0;s[i]!='\0';i++)
        {
        if(s[i]=='M')
            m++;
        else
            f++;
        }
    if(m==f)
        cout<<"Valid"<<endl;
    else
        cout<<"Invalid"<<endl;
    }
    
};
int main()
{
    char s[50];
    cin>>s;
    demo p;
    p.check(s);
}
