#include "iostream"
using namespace std;
class demo
{
    int age;
    char name[50];
public:
    void input()
    {
    cin>>name>>age;
    }
    void logic(demo a[],demo b[],int n)
    {
    int l1=0,l2=0,i,x=0,y=0;
    for(i=0;i<n;i++)
        {
        if(a[i].age>l1)
            {
            x=i;
            l1=a[i].age;
            }
        
        if(b[i].age>l1)
            {
            y=i;
            l2=b[i].age;
            }
        }
    if(x>y)
        cout<<a[x].name<<" "<<a[x].age<<endl;
    else
        
        cout<<b[y].name<<" "<<b[y].age<<endl;
    }
    
};


int main()
{
    demo a[50],b[50],t;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        { a[i].input();
            b[i].input();
        }
    t.logic(a,b,n);return 0;
}
