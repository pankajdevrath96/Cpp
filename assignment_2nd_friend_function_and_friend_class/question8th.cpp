#include "iostream"
using namespace std;
class demo
{
    int array1[10],array2[10];
public:
    void input(int m[],int n[]);
    friend void logic(demo p);
};
void demo::input(int *m, int *n)
{
    int i;
    for(i=0;i<4;i++)
        array1[i]=m[i];
    
    for(i=0;i<4;i++)
        array2[i]=n[i];
}
void logic(demo p)
{int i,j=0,flag=0,t;
    
    for(i=0;i<4;i++)
        if(p.array2[i]!=0)
            {flag=1;
                break;}
    
    
    if(flag==1)
        for(i=4;i<8;i++)
            { p.array1[i]=p.array2[j];
                j++;
            }
    else
        {
        j=0;
        cout<<"ARRAY 2 IS EMPTY"<<endl;
        for(i=4;i<8;i++)
            { p.array1[i]=3*p.array2[j];
                j++;
            }
        }
    for(i=0;i<8-1;i++)
        {
        for(j=0;j<8-i-1;j++)
            {
            if(p.array1[j]>p.array1[j+1])
                {
                t=p.array1[j];
                p.array1[j]=p.array1[j+1];
                p.array1[j+1]=t;
                }
            }
        }
    for(i=0;i<8;i++)
        cout<<p.array1[i]<<" ";
    
}
int main()
{
    int a[10],b[10],i;
    for(i=0;i<4;i++)
        cin>>a[i];
    for(i=0;i<4;i++)
        cin>>b[i];
    demo p;
    p.input(a, b);
    logic(p);
    return 0;
}

