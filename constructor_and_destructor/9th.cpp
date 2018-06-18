#include"iostream"
using namespace std;
class demo
{
public:
    demo();
    ~demo();
    
};

demo::demo()
{
    cout<<"memory is allocated"<<endl;
    
}
demo::~demo()
{
    cout<<"memory is deallocated"<<endl;
}
int main()
{
    demo *p,*q;
    p=new demo();
    q=new demo();
    delete p;
    delete q;
}
