#include "iostream"
using namespace std;

int revs(int n,int large)
{
    if(n>0)
        {
        if(n%10>large)
            large=n%10;
        return revs(n/10,large);
        }
    else
        return large;
}

int main()
{
    int n,large=0;
    cin>>n;
    cout<<revs(n,large)<<endl;
}

