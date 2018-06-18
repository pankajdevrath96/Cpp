#include<iostream>
using namespace std;
class demo
{
    int z;
public:
    void input(int a)
    {
    z=a;
    
    }
    int logic();
    
    
};

int demo::logic()
{
    for(int i=1;i<z;i++)
        {
        if(z%i==0&& i!=1)
            return 0;
        }
    
    return 1;
}


int main()
{
    demo p;
    int item;
    cin>>item;
    p.input(item);
    int k=p.logic();
    if(k==1)
        cout<<"number is prime\n";
    else
        cout<<"number is not prime\n";
    return 0;
}
