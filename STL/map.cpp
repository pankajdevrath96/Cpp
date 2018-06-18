#include "iostream"
#include "map"
using namespace std;
int main()
{
    map<int,int> p;
    int n,i,a,b;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>a>>b;
        p.insert(pair<int,int>(a,b));
        }
    map<int,int>:: iterator t;
    for(t=p.begin();t!=p.end();t++)
        {
        cout<<t->first<<" "<<t->second<<endl;
        
        }
}
