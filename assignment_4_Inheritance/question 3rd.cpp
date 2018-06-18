#include<iostream>
using namespace std;
class demo1{
protected:
    int a[100],n;
public:
    void input()
    {
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    }
    

};

class demo2:public demo1{
public:
    void logic(demo2);
};
void demo2::logic( demo2 q )
{
    int p[100000]={0};
    for(int i=0;i<n;i++)
        p[a[i]]++;
    for(int i=0;i<q.n;i++)
        p[q.a[i]]++;
    for(int i=0;i<n;i++)
        if(p[a[i]]==1)
            cout<<a[i]<<" ";
    for(int i=0;i<q.n;i++)
        if(p[q.a[i]]==1)
            cout<<q.a[i]<<" ";
}

int main(){
    demo2 p,q;
    p.input();
    q.input();
    p.logic(q);
}

