#include "iostream"
using namespace std;
class demo
{
    int lw,up;
public:
    void input(int a,int b);
    int fact();
};
void demo::input(int a,int b)
{
    lw=a;
    up=b;
}
int demo::fact()
{
    int i,j,k,sum=0;
    for(i=lw;i<up;i++)
        {
        k=1;
        j=i;
        while(j>0)
            {
            k=k*j;
            j--;
            }
        sum=sum+k;
        }
    return sum;
}
int main()
{
    int x,y;
    cin>>x>>y;
    demo d1;
    d1.input(x, y);
    int z=d1.fact();
    cout<<z<<endl;
}
