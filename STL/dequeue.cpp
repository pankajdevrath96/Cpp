#include "iostream"
#include "deque"
using namespace std;

int main()
{
    deque<int> q1;
    int i,x,n,l1=0,sl=0;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>x;
        q1.push_back(x);
        }
    
    for(i=0;i<n;i++)
        {
        x=q1.front();
        q1.pop_front();
        if(x>l1)
            {
            sl=l1;
            l1=x;
            }
        else if(x>sl)
            sl=x;
        
        }
    cout<<sl;
}
