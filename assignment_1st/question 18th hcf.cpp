#include "iostream"
using namespace std;

class test
{
    int age;
public:
    void input();
    int logic(test);
};
void test::input()
{
    cin>>age;
}
int test::logic(test t)
{
    int c=0,x;
    if(age>t.age)
        {
        x=age;
        age=t.age;
        t.age=x;
        }
    x=t.age%age; 
    while(x!=0)
        {
        t.age=age;
        age=x;
        x=t.age%age;
        }
    
    
    return age;
}

int main()
{
    test t1,t2;
    t1.input();
    t2.input();
    int z=t1.logic(t2);
    cout<<z<<endl;
    return 0;
}
