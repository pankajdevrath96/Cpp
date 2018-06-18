#include "iostream"
using namespace std;

class MyFather
{
protected:
    char ec[50],hc[50];
    unsigned int fs,nc;
public:
    void get()
    {
    cin>>ec>>hc>>fs>>nc;
    }
    void display()
    {
    cout<<endl<<ec<<endl<<hc<<endl<<fs<<endl<<nc<<endl;
    }
};
class MyMother
{
protected:
    char ec[50],hc[50];
    unsigned int fh;
public:
    void get()
    {
    cin>>ec>>hc>>fh;
    }
    void display()
    {
    cout<<endl<<ec<<endl<<hc<<endl<<fh<<endl;
    }
};
class Myself:public MyFather
{
protected:
    char e[50],hc[50];
    unsigned int fs,nc;
public:
    void get()
    {
    cin>>hc>>e>>fs>>nc;
    }
    void display()
    {
    cout<<endl<<hc<<endl<<e<<endl<<fs<<endl<<nc<<endl;
    }
};
class MySister:public MyFather,public MyMother
{
    char e[50];
    unsigned int ma;
public:
    void get()
    {
    cin>>e>>ma>>fs>>nc;
    }
    void display()
    {
    cout<<endl<<e<<endl<<ma<<endl<<fs<<endl<<nc<<endl;
    }
};
//STUDENT CODE
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    MyFather p;
    p.get();
    MyMother q;
    q.get();
    Myself r;
    r.get();
    MySister s;
    s.get();
    cout<<"My Father's Data:";
    p.display();
    
    cout<<"My Mother's Data:";
    q.display();
    
    cout<<"My Data:";
    r.display();
   
    cout<<"My Sister's Data:";
    s.display();
    return 0;
}
