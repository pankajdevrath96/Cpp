#include "iostream"
using namespace std;

int sum(int n,int &x)
{
    
    if(n==0)
        return x;
    else
        {
        x+=n%10;
        return sum(n/10,x);
        }
}
int main()
{
    int n,x=0;
    cin>>n;
    
    cout<<sum(n,x)<<endl;
}

