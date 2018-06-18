#include<iostream>
using namespace std;
class demo
{
    int sec;
public:
    
    void input(int x);
    void display();
    
    
};
void demo::input(int x)
{
    sec=x;
    display();
}
void demo:: display()
{
    int h,m;
    h=sec/3600;
    sec=sec%3600;
    m=sec/60;
    sec=sec%60;
    cout<<h<<"hours"<<m<<"minutes"<<sec<<"seconds"<<endl;
}

int main()
{
    int i;
    cin>>i;
    demo d;
    d.input(i);
    
    return 0;
}
