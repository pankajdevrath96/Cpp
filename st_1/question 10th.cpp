#include "iostream"
using namespace std;
class demo
{
    int feet,inches;
public:
    void get_data()
    {
    cin>>feet>>inches;
    }
    demo operator+(demo p)
    {
    demo x;
    x.feet=feet+p.feet;
    x.inches=inches+p.inches;
    if(x.inches>11)
        {
        x.inches-=12;
        x.feet++;
        }
    return x;
    }
    demo operator+(int p)
    {
    demo x;
    x.feet=feet+p;
    x.inches=inches;
    return x;
    }
    void display()
    {
    cout<<feet<<" "<<inches<<endl;
    }
    
    
};
int main()
{
    demo p,q,r;
    int x;
    p.get_data();
    q.get_data();
    cin>>x;
    r=p+q;
    r.display();
    r=p+x;
    r.display();
    r=q+x;
    r.display();
}
