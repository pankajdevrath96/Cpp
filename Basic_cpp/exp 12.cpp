#include <iostream>
using namespace std;
class Base
{
public:
    void show() // make it virtual for late binding
    {
    cout << "Base class"<<endl;
    }
};
class Derived:public Base
{
public:
    void show()
    {
    cout << "Derived Class"<<endl;
    }
};
int main()
{
    Base* b;       //Base class pointer
    Derived d;     //Derived class object
    b = &d;
    b->show();     //Early Binding Ocuurs
    
}
