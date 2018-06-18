#include "iostream"
using namespace std;
class demo
{
    char m[50];
    int n;
public:
    void input(char *p,int k);
    void display();
    
};

void demo::input(char *p, int k)
{
    int i=0;
    for(i=0;p[i]!='\0';i++)
        m[i]=p[i];
    m[i]='\0';
    n=k;
    display();
}
void demo::display()
{
    int j;
    for(j=0;m[j]!='\0';j++)
        {
        m[j]=m[j]+n;
        cout<<m[j];
 
        }   cout<<endl;
}



int main()
{
    char m[50];
    int k;
    demo d;
    cin>>m;
    cin>>k;
    d.input(m,k);
    return 0;
}
