#include "iostream"
#include "string"
using namespace std;
class demo
{
  
    char pass[50];
public:
    void input(char *p);
    friend void logic(demo);
};

void demo::input(char *p)
{
    strcpy(pass,p);
}
void logic(demo p)
{
    int i=0,flag=0;
    if(!isnumber(p.pass[0]))
        {
        flag =1;
        cout<<"expression is invalid"<<endl;
        }
    if(flag==0)
        {
        i=1;
        while(p.pass[i]!='\0')
            {
            if(p.pass[i]=='+'|| p.pass[i]=='-'|| p.pass[i]=='*'|| p.pass[i]=='/')
                {
                if(!isnumber(p.pass[i-1]) || !isnumber(p.pass[i+1]))
                    {
                    cout<<"expression is invalid"<<endl;
                    flag=1;
                    break;
                    }
                }
            i++;
            }
}
    if(flag==0)
        cout<<"expression is valid"<<endl;
}

int main()
{
    demo p;
    char a[50];
    cin>>a;
    p.input(a);
    logic(p);
    
    return 0;
}

