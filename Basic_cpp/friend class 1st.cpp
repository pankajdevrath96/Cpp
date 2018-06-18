#include "iostream"
using namespace std;
class tcs
{
    int profit;
public:
    void input()
    {
    cin>>profit;
    }
    friend class amazon;
};

class amazon
{
    int profit;
public:
    void input()
    {
    cin>>profit;
    }
    void logic(tcs p)
    {
    if(profit>p.profit)
        cout<<"AMAZON"<<endl;
    else
        cout<<"TCS"<<endl;
    }
};

int main()
{
    tcs p;
    amazon z;
    p.input();
    z.input();
    z.logic(p);
    return 0;
}

