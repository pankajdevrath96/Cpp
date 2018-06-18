#include "iostream"
#include "string"
using namespace std;
class test
{
    char name[50];
public:
    void input(char *p);
    friend void logic(test t1);
};

void test:: input(char *p)
{
    strcpy(name,p);
}
void logic(test t)
{
    int i=0,k=0;
    char m[1000];
    while(t.name[i]!='\0')
        {
        if(t.name[i]=='(' || t.name[i]== '{' ||t.name[i]=='[')
            {
            m[k]=t.name[i];
            k++;
            }
        else
            {
            if(t.name[i]==')' && m[k-1]=='(')
            {
            k--;
            }
            else if(t.name[i]=='}' && m[k-1]=='{')
            {
            k--;
            }
            else if(t.name[i]==']'&& m[k-1]=='[')
                {
                k--;
                }
        
            else
                {
                k=1;
                break;
                }
            }
        
        
         i++;
}
    if(k==0)
    cout<<"balanced"<<endl;
    else
        cout<<"unbalanced"<<endl;
   
}
int main()
{
    char exp[50];
    cin>>exp;
    test t1;
    t1.input(exp);
    logic(t1);
    return 0;
}
