#include<iostream>
using namespace std;

class demo
{
    int sec;
public:
    void input(int z)
    {
    sec=z;
    
    }
    void display();
    
    
    
};

void demo::display()
{
    int h,m;
    
    h=sec/3600;
    sec=sec%3600;
    m=sec/60;
    sec=sec%60;
    cout<<h<<"hours "<<m<<"min "<<sec<<"sec "<<endl;
    
    
}


int main()
{
    demo x;
    int p;
    cin>>p;
    x.input(p);
    x.display();
    return 0;
    
}
