#include "iostream"
using namespace std;
class test
{
    int n;
    int a[100];
public:
    void input(int z)
    {
    n=z;
    }
    friend void logic(test);
};

void logic(test t)
{
    int i,j,temp;
    for(i=0;i<t.n;i++)
        cin>>t.a[i];
    int k=t.n/2-1;
    for(i=0;i<k;i++)
        for(j=0;j<k-i;j++)
            if(t.a[j]>t.a[j+1])
                {
                temp=t.a[j];
                t.a[j]=t.a[j+1];
                t.a[j+1]=temp;
                }
    
    for(i=k;i<t.n;i++)
        for(j=k;j<t.n-1;j++)
            if(t.a[j]<t.a[j+1])
                {
                temp=t.a[j];
                t.a[j]=t.a[j+1];
                t.a[j+1]=temp;
                }
    
    for(i=0;i<t.n;i++)
        cout<<t.a[i]<<" ";
    
    
}



int main()
{
    test t1;
    int k;
    cin>>k;
    t1.input(k);
    logic(t1);
    
}
