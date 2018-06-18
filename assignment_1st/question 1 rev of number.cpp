#include<iostream>
using namespace std;
class test
{
    int num;
public:
    int input();
    int logic();
    
};

int test::input()
{
    cin>>num;
    logic();
    
    return num;
}
int test::logic()
{
    int i,j=0;
    while(num>0)
        {
        i=num%10;
        j=j*10+i;
        num/=10;
        }
    num=j;
    return num;
}


int main()
{
    test p;
    int z;
    z=p.input();
    cout<<z<<endl;
    return 0;
}


