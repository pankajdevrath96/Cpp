#include "iostream"
using namespace std;
int main()
{
    int a,b,c,d;
    double x,y;
    cin>>a>>b>>c>>d;
    x=a+double(b)/12+c*3.28 +(double(d)/100)*3.28 ;
    cout<<double(b)/12<<endl;
    cout<<c*3.28<<endl;
    cout<<double(d)/100*3.28<<endl;
    //cout<<x<<endl;
    cout<<int (x)<<endl<<x-int (x);
}
