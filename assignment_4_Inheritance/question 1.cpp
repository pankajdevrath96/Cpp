#include "iostream"
using namespace std;
class demo{
protected:
    
    int a[50],n;
public:
    demo(int a[],int n);
    void logic(void);
};

demo ::demo(int p[],int m)
{
    n=m;
    for(int i=0;i<n;i++)
        a[i]=p[i];
}
void demo::logic()
{
    int flag=0;
   
    for(int i=0;i<n-1;i++)
        {
        for(int j=i+1;j<n;j++)
            if(a[i]==a[j])
                {
                cout<<a[i]<<endl;;
                flag=1;
                break;
                }
        if(flag==1)
            break;
        }

}
class demo2:public demo
{

public:
   
    demo2(int a[],int n):demo(a,n)
    {
    demo::logic();
    
    }
};


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    demo2 t(a,n);
   
    
    
}
