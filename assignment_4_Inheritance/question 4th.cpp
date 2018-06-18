#include<iostream>
using namespace std;
class demo2
{
protected:
    int  a[50],n;
public:
    void input(void);
};
void demo2::input()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
}
class demo1:public demo2
{
protected:
    int b[50],p,j=0;
public:
    void logic()
    {
    cin>>p;
    for(int i=0;i<n;i++)
        {
        int x=a[i];
        while(x>0)
            {
            if(x%10==p)
                { b[j++]=a[i];
                    break;
                }
            x/=10;
            }
        }
    }
};
class demo3:public demo1{
public:
    void display();
};
void demo3::display()
{
    for(int i=0;i<j;i++)
        cout<<b[i]<<" ";
}

int main()
{
    demo3 p;
    p.input();
    p.logic();
    p.display();
}

