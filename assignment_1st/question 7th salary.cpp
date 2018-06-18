#include<iostream>
using namespace std;
class demo
{
    int basic_sal;
public:
    void input(int a)
    {
    basic_sal=a;
    }
    void logic();
};
void demo::logic()
{
    float hra,da;
    if(basic_sal<1500)
        {
        hra=(basic_sal*10)/100;
        da=(basic_sal*90)/100;
        basic_sal+=da+hra;
        
        }
    else
        
        {
        hra=500;
        da=(basic_sal*98)/100;
        basic_sal+=da+hra;
        
        }
    cout<<basic_sal<<endl;
    
}
int main()
{
    demo d1;
    int i;
    cin>>i;
    d1.input(i);
    d1.logic();
    return 0;
}
