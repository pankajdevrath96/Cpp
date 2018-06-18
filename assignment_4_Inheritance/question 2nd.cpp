#include<iostream>
using namespace std;

class demo{
    
protected:
    int x1;
public:
    demo(int x1);
    
};

demo::demo(int x)
{
    x1=x;
}
class demo2:public demo{
protected:
    int y1;
public:
    demo2(int x,int y):demo(x)
    {
    y1=y;
    }
    
    
    void logic(demo2 p);
};

void demo2::logic(demo2 q)
{
    
    if((x1)*(q.y1-y1)==y1*(q.x1-x1))
       {
       cout<<"yes"<<endl;
       }
    else
        cout<<"NO"<<endl;
}
int main(){
    //int x1,x2,y1,y2;
    //cin>>x1>>y1>>x2>>y2;
    demo2 p(10,20),q(30,40);
    p.logic(q);
    
}

