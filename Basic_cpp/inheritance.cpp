#include "iostream"
using namespace std;
class base
{
protected:
    int x;
public:
    vo-d setij(int a,int b)
    {
    i=a;
    j=b;
    
    }
    void showij()
    {
    cout<<i<<" "<<j<<endl;
    }
};


class derived1:protected base
{
    int k;
public:
    void setk(int t)
    {
    setij(10,20);
        k=i*j;
    }
        void showk()
        {
        showij();
        cout<<k<<endl;
        }
};

class derived2:protected derived1
{
    int q;
public:
    void set()
    {
    setij(15,20);
    q=i*j;
    setk(3);
    }
    void show()
    {
    showk();
    cout<<q<<endl;
    
    }
};

int main()
{
    derived2 o;
    o.set();
    o.show();
    
}
