#include "iostream"
using namespace std;

class demo
{
    int age,roll_no;
    char name[50];
    // static int large;
public:
    void input()
    {
    cin>>name>>roll_no>>age;
    
    }
    void logic(demo m[],int n)
    {
    int i;
    for(i=0;i<n;i++)
        if(m[i].age%2==0)
            cout<<m[i].name<<" "<<m[i].roll_no<<" "<<m[i].age<<endl;
    }
    
    
};

int main()
{
    demo a[50],t;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
        a[i].input();
    t.logic(a,n);
    
    return 0;
}
