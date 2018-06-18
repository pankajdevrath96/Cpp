#include<iostream>
using namespace std;
class demo
{
    int a,b,c;
public:
    demo();
    void logic();
    
};
demo::demo()
{
    cin>>a>>b>>c;
}
void demo::logic()
{
    int n;
    n=a>>(b-1);
    if(c==1)
        {
        if((n&1)==1)
            n-=1;
            cout<<n<<endl;
        }
    else if(c==2)
        {
        if((n&1)==0)
            n+=1;
            cout<<n<<endl;}
    else
        cout<<"invalid input"<<endl;
}
int main()
{
    demo p;
    p.logic();
}
