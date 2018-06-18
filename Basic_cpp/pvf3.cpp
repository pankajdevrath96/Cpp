#include "iostream"
using namespace std;
class test
{
public:
    int a,b;
    test()
    {
    cin>>a>>b;
    }
    void logic();
};
void test::logic()
{
    int t=a;
    a=b;
    b=t;
    cout<<a<<endl<<b<<endl;
}
int main()
{
    test *p;
    p=new test();
    p->logic();
}
