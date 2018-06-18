#include "iostream"
#include "string"
using namespace std;
class mystring
{
    string s;
public:
    void input()
    {
    getline(cin, s);
    
    }
    void display(int x)
    {
    if(x==0)
        cout<<"Strings are equal"<<endl;
    else
        cout<<"Strings are not equal"<<endl;
    }
    int operator==(mystring x)
    {
    if(s.compare(x.s)==0)
        return 0;
    else
        return 1;
    }
    
};

int main()
{
    mystring p,q;
    p.input();
    q.input();
    int x=(p==q);
    p.display(x);
}
