#include "iostream"
using namespace std;
class A
{
    int x[10][10],l,b;
public:
    void getdata( int a,int m)
    {
    l=a;
    b=m;
    for(int i=0;i<l;i++)
        for(int j=0;j<b;j++)
            cin>>x[i][j];
    }
    void friend add(A ,class B);
    
    
};
class B
{
    int x[10][10],l,b;
public:
    void getdata( int a,int m)
    {
    l=a;
    b=m;
    for(int i=0;i<l;i++)
        for(int j=0;j<b;j++)
            cin>>x[i][j];
    }
    void friend add(A , B);
    
    
};
void add( A p, B q)
{
    if(p.l==q.l&& p.b==q.b)
        for(int i=0;i<p.l;i++)
            {for(int j=0;j<p.b;j++)
                {cout<<(p.x[i][j]+q.x[i][j])<<" ";}
                cout<<endl;
                }
    
    else
        cout<<"Dimensions are not same...Addition not possible"<<endl;
}




int main()
{
    int a,b;
    cin>>a>>b;
    A p;
    p.getdata(a,b);
    cin>>a>>b;
    B q;
    q.getdata(a, b);
    add(p,q);
    
    
}



