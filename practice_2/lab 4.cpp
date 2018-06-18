#include "iostream"
using namespace std;
class emp
{
protected:
    int empno;
    char ename[50],ed[50];
public:
    void get()
    {
    cin>>empno>>ename>>ed;
    }
};
class salary:public emp
{
    unsigned long basic_pay,hra,pf,da,total=0;
public:
    void cal()
    {
    get();
    cin>>basic_pay>>hra>>pf>>da;
    total=basic_pay+hra+da-pf;
    
    }
    void display()
    {
    cout<<empno<<endl<<ename<<endl<<ed<<endl<<basic_pay<<endl<<hra<<endl<<pf<<endl<<da<<endl<<total<<endl;
    }
};
int main()
{
    salary p;
    p.cal();
    p.display();
}
