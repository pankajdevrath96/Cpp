#include "iostream"
#include "queue"
using namespace std;
int main()
{
    queue<int> q1;
    int i,x,n,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>x;
        q1.push(x);
        }
    
    for(i=0;i<n;i++)
        {
        x=q1.front();
        q1.pop();
        if(x%2==0)
            sum+=x;
        
        }
    cout<<sum;
}
