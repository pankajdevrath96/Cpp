#include "iostream"
using namespace std;
class demo
{
    int a[20];
public:
    void input()
    {
    int i;
    for(i=0;i<5;i++)
        cin>>a[i];
    }
    friend demo operator+(demo,demo);
    void display()
    {
    int i;
    for(i=0;i<5;i++)
        cout<<a[i]<<endl;
    }
    
};

demo operator+(demo p,demo q)
{
    
    for(int i=0;i<5;i++)
        p.a[i]+=q.a[i];
    
    return p;
        
}
int main()
{
    demo p,q,r;
    p.input();
    q.input();
    r=p+q;
    

    r.display();
    
    
    
    
}
