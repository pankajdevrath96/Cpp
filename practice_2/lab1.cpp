#include "iostream"
using namespace std;
class electricity
{
    int units;
protected:
    float f;
public:
    
    void input()
    {
    cin>>units;
    
    }
    void bill()
    {
    if(units<=100)
        f=units*.5;
    else
        f=50+((units-100)*0.6);
    }
};
class More_Electricity:public electricity
{
    
    
    
};
