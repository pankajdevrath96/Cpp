#include "iostream"
using namespace std;
class test
{
    int a[5];
public:
    test();
    friend class demo;
    
};

class demo
{
    int a[5];
public:
    demo();
    void logic(test);
};
test::test()
{
    for(int i=0;i<5;i++)
        cin>>a[i];
    
}

demo::demo()
{
    for(int i=0;i<5;i++)
        cin>>a[i];
    
}
void demo::logic(test p)
{
    for(int i=0;i<5;i++)
        {
        for(int j=0;j<5;j++)
            if(a[i]==p.a[j])
                cout<<a[i]<<" ";
        }
}

int main()
{
    test t;
    demo q;
    q.logic(t);
}
