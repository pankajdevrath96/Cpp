#include "iostream"
using namespace std;
class demo
{
    int n;
public:
    void input(int z);
    friend void logic(demo);
};

void demo::input(int z)
{
    n=z;
}
void logic(demo t)
{
    int x=t.n;
    int i,j,l1=0,flag=0,x1;
    for(i=1;i<x/2;i++)
        {
        x1=i;
        l1=0;
        for(j=2;j<x1;j++)
            if(x1%j==0 && x1!=1)
                l1=1;
        x1=x-x1;
        
      if(l1==0)
          for(j=2;j<x1;j++)
              if(x1%j==0 && x1!=1)
                    l1=1;
                if(l1==0)
            flag=1;
        if(flag==1)
            {
            cout<<x-x1<<endl<<x1<<endl;
            break;
            }
        }
    if(flag==0)
        cout<<"0"<<endl;
    
}
int main()
{
    demo d1;
    int z;
    cin>>z;
    d1.input(z);
    logic(d1);
}
