#include "iostream"
using namespace std;

int revs(int n,int large,int sl)
{
    if(n>0)
        {
        if(n%10>large)
            {
            sl=large;large=n%10;}
        else if(n%10>sl)
            sl=n%10;
        return revs(n/10,large,sl);
        }
    else
        return sl;
}

int main()
{
    int n,large=0,sl=0;
    cin>>n;
    cout<<revs(n,large,sl)<<endl;
}


