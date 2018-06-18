#include "iostream"
#include "map"
#include "vector"
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    map<int,int>m1;
    vector<int> v1;
    
    for(int i=0;i<n;i++)
        {
        cin>>x;
        if(m1[x]==0)
            v1.push_back(x);
        m1[x]++;
        }
    map<int,vector<int>>mp;
    
    for(int i=0;i<v1.size();i++){
        int val=m1[v1[i]];
        mp[val].push_back(v1[i]);
    }
    int ar[n];
    int idx=n-1;
    for(auto const &ent1:mp){
        int t=ent1.first;
        vector<int>v=mp[t];
        
        for(int i=v.size()-1;i>=0;i--){
           
            for(int j=0;j<t;j++){
                ar[idx--]=v[i];
            }
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }


    
}
