#include "iostream"
using namespace std;

class degree
{
   
public:
     float temp;
    degree()
    {
    cin>>temp;
    }
};
class fer
{
    float temp;
public:
    void display()
    {
    cout<<temp<<endl;
    }

fer operator =( degree x)
{
    temp=(1.8*x.temp)+32;
    return *this;
}
};
int main()

{
    
    degree p;
    fer q;
    q=p;
    q.display();
    
}
