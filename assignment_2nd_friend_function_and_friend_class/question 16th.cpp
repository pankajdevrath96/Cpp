#include "iostream"
using namespace std;
class amazon;
class tcs;
class flipkart
{
    char name[50];
    int sal;
public:
    void input()
    {
    cin>>name>>sal;
    }
    friend void  logic(flipkart,amazon,tcs);
};
class amazon
{
    char name[50];
    int sal;
public:
    void input()
    {
    cin>>name>>sal;
    }
    
    friend void logic(flipkart,amazon,tcs);
};
class tcs
{
    char name[50];
    int sal;
public:
    void input()
    {
    cin>>name>>sal;
    }
    
    friend void logic(flipkart,amazon,tcs);
};

void logic(flipkart x,amazon y,tcs z)
{
    if(x.sal>=y.sal && x.sal>=z.sal)
        cout<<x.name<<" "<<x.sal<<endl;
    
   else if(y.sal>=x.sal && y.sal>=z.sal)
        cout<<y.name<<" "<<y.sal<<endl;
    else
        
        cout<<z.name<<" "<<z.sal<<endl;
}
int main()
{
    tcs tt;
    amazon aa;
    flipkart ff;
    tt.input();
    aa.input();
    ff.input();
    logic(ff, aa, tt);
    
}
