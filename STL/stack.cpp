#include "iostream"
#include "stack"
using namespace std;
int main()
{
    
    stack<int>x;
    
    int n,i,m;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>m;
        x.push(m);
        }
    int large=0;
    for(i=0;i<n;i++)
        {
        if(x.top()>large)
            large=x.top();
        x.pop();
        }
    cout<<large;
    
}

