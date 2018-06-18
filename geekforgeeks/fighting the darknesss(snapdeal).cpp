#include <iostream>
using namespace std;

int main() {
    //code
    int t,i,j,n,k,l;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        long int a[n];
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        l=a[0];
        k=0;
        
        for(j=0;j<i;j++)
        {
            if(a[j]>l)
            {
                l=a[j];
            }
        }
        
        
        
        cout<<l<<endl;
        t--;
        
    }return 0;
}
