#include"iostream"
using namespace std;
class milk
{
    int z;
public:
    void get(int x);
    int logic();
    
};
void milk:: get(int x)
{
    z=x;
}
int milk::logic()
{int c=0;
    
    
    if(z>=10)
        {
        c=z/10;
        z=z%10;
        }
    if(z>=7)
        {
        z-=7;
        c++;
        }
    if(z>=5)
        {
        z-=5;
        c++;
        }
    if(z>0)
        {
        c=z/1;
        z=z%1;
        }
    
    
    return c;
}
int main()
{
    int w;
    cin>>w;
    milk m1;
    m1.get(w);
    int p=m1.logic();
    cout<<p<<endl;
    return 0;
    
}
