#include "iostream"
using namespace std;
class car
{
   float s,e,f;
public:
    car()
    {
    cin>>s>>e>>f;
    }
    friend class mileage;
};
class mileage
{
public:
    void display(car p,car q)
    {
    if((p.e-p.s)/p.f>(q.e-q.s)/q.f)
        cout<<"Mileage of car1 is more than car2"<<endl;
    else if((p.e-p.s)/p.f<(q.e-q.s)/q.f)
        cout<<"Mileage of car2 is more than car1"<<endl;
    else
        cout<<"Equal Mileage"<<endl;



    }
};

int main()
{
    car p,q;
    mileage s;
    s.display(p,q);
}
