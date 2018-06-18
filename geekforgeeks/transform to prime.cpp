#include <iostream>
#include <math.h>
using namespace std;

int main() {
    //code
    int t,n,y,l,i,j,k,a[10000],c=0,x,count;
    long long sum=0,p=0;
    cin>>t;
    while(t>0)
    { cin>>n;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        j=3;
        p=2;
        while(c!=1)
        {
            count=0;
            for(i=2;i<=(j/2);i++)
            {
                if((j%i)==0)
                {
                    count =1;
                    
                    break;
                }
                
            }
            if(count==0&&j!=1)
            {
                p=p+j;
            }
            if(sum<p)
            {
                c=1;
                break;
            }
            
            j++;
            
        }
        if(sum!=p)
        { x=p-sum;
            cout<<x<<endl;}
        else if(sum==p)
            return 0;
        t--;
    }
    return 0;
}
