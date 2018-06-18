#include "iostream"
using namespace std;
class demo
{
    int a[100];
    float m[100];
    int x,y;
public:
    void input(int a,int b);
    friend class result;
};
class result
{
private:
    int choice;
public:
    void input(int z);
    void logic(demo d);
};

void demo::input(int t, int b)
{
    int i;
    x=t;
    y=b;
    for(i=0;i<x;i++)
        cin>>a[i];
    for(i=0;i<y;i++)
        cin>>m[i];
    
}
void result::input(int z)
{
    choice=z;
    
}
void result::logic(demo d)
{
    int i,sum=0,min;
    float s=0,m1;
    
    
    
    
    switch (choice) {
        case 1:
            for(i=0;i<d.x;i++)
                sum+=d.a[i];
            sum/=d.x;
            
            for(i=0;i<d.y;i++)
                s=s+d.m[i];
            s/=d.y;
            
            cout<<sum<<endl<<s<<endl;
            break;
        
        case 2:
            min=d.a[0];
            for(i=0;i<d.x;i++)
                if(d.a[i]<min)
                    min=d.a[i];
            
            m1=d.m[0];
            for(i=0;i<d.y;i++)
                if(d.m[i]<m1)
                    m1=d.m[i];
            
            cout<<min<<endl<<m1<<endl;
            break;
            
        case 3:
            min=d.a[0];
            for(i=0;i<d.x;i++)
                if(d.a[i]>min)
                    min=d.a[i];
            
            m1=d.m[0];
            for(i=0;i<d.y;i++)
                if(d.m[i]>m1)
                    m1=d.m[i];
           
            cout<<min<<endl<<m1<<endl;
            break;
    }
}


int main()
{
    int x,y;
    cin>>x>>y;
    demo p;
    result q;
    p.input(x, y);
    int z;
    cin>>z;
    q.input(z);
    q.logic(p);
    
    
}
