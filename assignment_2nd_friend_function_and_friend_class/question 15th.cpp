#include "iostream"
using namespace std;
class demo
{
    int x;
public:
    void input(int z)
    {
    x=z;
    }
    friend void logic(demo);
};
void logic(demo t)
{
    int n=t.x,i,sum=0,j,k,fact =1;
    j=n;
    while(j>0)
        {
        k=j%10;
        fact =1;
        while(k>1)
            {
            
            fact*=k;
            k--;
        }
        sum+=fact;
        j/=10;;
        }
    if(sum==n)
        cout<<"strong number"<<endl;
    else
        
        cout<<"not a strong number"<<endl;
}
int main()
{
    demo d1;
    int z;
    cin>>z;
    d1.input(z);
    logic(d1);
    
}
