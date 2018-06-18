#include "iostream"
using namespace std;
class rahul;
class parul
{
    int x;
public:
    friend void ankit(parul p,rahul r);
    void input()
    {
    cin>>x;
    }
    
};
class rahul
{
    int y;
public:
    friend void ankit(parul p,rahul r);
    void input()
    {
    cin>>y;
    }
    
};
void ankit(parul p,rahul r)
{
    cout<<p.x<<endl<<r.y<<endl;
    
}
int main()
{
    parul p;
    rahul q;
    p.input();
    q.input();
    ankit(p,q);
    
    return 0;
}


