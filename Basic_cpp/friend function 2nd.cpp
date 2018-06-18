#include "iostream"
using namespace std;
class microsoft;
class tcs
{
    int profit;
public:
    friend void profit(tcs x,microsoft n);
    void input()
    {
    cin>>profit;
    }
};

class microsoft
{
    int profit;
public:
    friend void profit(tcs x,microsoft n);
    void input()
    {
    cin>>profit;
    }
};
void profit(tcs m,microsoft n)
{
    if(m.profit>n.profit)
        cout<<m.profit<<endl;
    else
        cout<<n.profit<<endl;
}
int main()
{
    tcs p;
    microsoft q;
    p.input();
    q.input();
    profit(p,q);
    return 0;
}
