#include<iostream>
using namespace std;
class x
{
private:
    int a,b,c;
public:
    void input()
    {
    cin>>a>>b>>c;
    if(a>=b&&a>=c)
        cout<<"a is greatest";
    else if(b>=a&&b>=c)
        cout<<"b is greatest";
    else
        cout<<"c is greatest";
    }
    
    
};
int main()
{
    x z;
    z.input();
    return 0;
}
