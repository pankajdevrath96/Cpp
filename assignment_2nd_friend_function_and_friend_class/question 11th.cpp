#include "iostream"
#include "iomanip"
using namespace std;
class demo
{
    int n;
public:
    void inout(int z);
    friend void logic(demo);
    
};
void demo::inout(int z)
{
    n=z;
}
void logic(demo p)
{
    int n=p.n, x,y,rem;
    unsigned long num;
        for(int i=1;i<=n;i++)
        {
        x=i; num=0;
        y=1;
        while(x>0)
            {
            rem=x%2;
            x=x/2;
            
            num=num+(y*rem);
            y=y*10;
            
            }
        cout<<setw(8)<<std::right<<setfill('0')<<num<<endl;
        
        }
}

int main()
{
    int k;
    cin>>k;
    demo d;
    d.inout(k);
    logic(d);
}
