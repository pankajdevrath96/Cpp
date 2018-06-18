#include "iostream"
using namespace std;
/*class demo
{
    int age;
    char name[50];
    static int large;
public:
    void input()
    {
    cin>>name>>age;
    
    }
    void logic()
    {
    if(age>large)
        large=age;
    }
    void display()
    {
    cout<<large<<endl;
    }
    
};
int demo:: large;
int main()
{
    demo a[50];
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        a[i].input();
    
    for(i=0;i<n;i++)
        a[i].logic();
    a[i].display();
    
    return 0;
}

*/
//passing array to function

class demo
{
    int age;
    char name[50];
   // static int large;
public:
    void input()
    {
    cin>>name>>age;
    
    }
    void logic(demo m[],int n)
    {
    int large=0,i;
    for(i=0;i<n;i++)
    if(m[i].age>large)
        large=m[i].age;
    cout<<large<<endl;
    }
   
    
};

int main()
{
    demo a[50],t;
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
        a[i].input();
    t.logic(a,n);
    
    return 0;
}


