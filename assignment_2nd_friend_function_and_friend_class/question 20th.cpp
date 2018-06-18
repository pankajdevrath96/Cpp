#include "iostream"
using namespace std;
class demo
{
   unsigned long int phono;
public:
    void input(unsigned long int z);
    friend void logic(demo);
};
void demo::input(unsigned long int z)
{
    phono=z;
}
void logic(demo p)
{
   unsigned long int z=p.phono,rem;
    int flag=0;
    while(z>0)
        {
         rem=z%10000;
        if(rem==4444)
            {flag=1; break;}
        z=z/10;
        
        }
    if(flag==1)
        cout<<"valid"<<endl;
    else
        cout<<"invalid"<<endl;
}


int main()
{
    unsigned long int a;
    cin>>a;
    demo p;
    p.input(a);
    logic(p);
}
