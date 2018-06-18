#include "iostream"
using namespace std;

int revs(int n,int &rev)
{
    if(n>0)
        {
        rev=rev*10+n%10;
        return revs(n/10, rev);
        }
        else
            return rev;
}

int main()
{
    int n,rev=0;
    cin>>n;
    cout<<revs(n,rev);
}
