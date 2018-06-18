#include <iostream>
using namespace std;

int main() {
    
    //code
    int t,n,x,i,j,a[1000];
    string s;
    cin>>t;
    while(t>0)
    {
        cin>>n>>s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            
            x=a[i];
            for(j=0;j<x;j++)
            {
                
                s[j]=s[j]+1;
            }
        }
        cout<<s<<endl;
        t--;
    }
    return 0;
}
