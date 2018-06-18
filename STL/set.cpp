#include "iostream"
#include "set"
using namespace std;
int main()
{
    set<int> s1;
    set<int> ::  iterator i;
    int n,x,l,l1=0;
    cin>>n;
    for(l=0;l<n;l++)
        {
        cin>>x;
        s1.insert(x);
        }
    for(i=s1.begin();i!=s1.end();i++)
        if(l1<*i)
            l1=*i;
    cout<<l1<<endl;
    
    
}
