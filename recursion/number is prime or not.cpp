#include "iostream"
using namespace std;

int isprime(int n,int x)
{
    if(x==1)
        return 1;
    else
        {
        if(n%x==0)
            return 0;
        else
            return isprime(n, --x);
        }
        
}
int main()
{
    int n,x;
    cin>>n;
    x=n-1;
    cout<<(isprime(n,x/2)==1?"yes":"no")<<endl;
}
