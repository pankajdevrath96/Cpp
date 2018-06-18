#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;
int main()
{
    vector<int> v1;
    int n,i,x;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>x;
        v1.push_back(x);
        }
    
   sort(v1.begin(),v1.end());
    
    for(i=0;i<n;i++)
        cout<<v1[i]<<" ";
    
    
}
