#include <iostream>
using namespace std;

int main() {
    //code
    int t, n,m,i,j,k=0,l=0,ans,s1,s2,x,y;
    cin>>t;
    while(t>0)
    {
        cin>>n>>m;
        if(n>=0&&m>=0)
        {
            if((n%m)==0&&n!=0)
            {
                ans=n;
            }
            else
            {
                
                x=n-m;
                y=n+m;
                
                for(i=x;i<y;i++)
                {
                    if((i%m)==0)
                    {
                        l=k;
                        k=i;
                    }
                }
                s1=n-l;
                s2=k-n;
                if(s1<s2)
                {
                    ans=l;
                }
                else
                {
                    ans=k;
                }
            }
            
            
        }
        else if(n<0&&m<0)
        {
            if((n%m)==0)
            {
                ans=n;
            }
            else
            {
                
                x=n+m;
                y=n-m;
                
                for(i=y;i>x;i--)
                {
                    if((i%m)==0)
                    {
                        l=k;
                        k=i;
                    }
                }
                s1=l-n;
                s2=n-k;
                if(s1<s2)
                {
                    ans=l;
                }
                else
                {
                    ans=k;
                }
            }
        }
        else if(n<0&&m>0)
        {
            if((n%m)==0)
            {
                ans=n;
            }
            else
            {
                
                x=n+m;
                y=n-m;
                
                for(i=x;i>y;i--)
                {
                    if((i%m)==0)
                    {
                        l=k;
                        k=i;
                    }
                }
                s1=l-n;
                s2=n-k;
                if(s1<s2)
                {
                    ans=l;
                }
                else
                {
                    ans=k;
                }
            }
        }
        cout<<ans<<endl;
        
        t--;
    }
    return 0;
}
