#include <iostream>
#include<iomanip>
using namespace std;
class Item
{
    string name;
    string type;
    double cost ;
    int day;
public:
    Item(string n,string t,double c);
    void display();
    double getCost();
    void fun_try(int x);
};
Item::Item(string n,string t, double c)
{
    cin>>name>>type>>cost;
}
void Item::fun_try( int x)
{
    if(x<=0)
        cout<<"Number of days cannot be negative or zero"<<endl;
    else
        cout<<name<<endl<<type<<endl<<fixed<<setprecision(2)<<cost/x<<endl;
}
int main()
{
    string a,b;
    double c;
    int x;
    Item ob(a,b,c);
    cin>>x;
    ob.fun_try(x);
    return 0;
}
