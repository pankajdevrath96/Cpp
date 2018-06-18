#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,m[1000],c=0,v[1000];
    
    cin>>t;
    string s;
    while(t>0)
    {
        cin>>s;
        int l=s.length();
        int x=s[l-1];
        if(l==2)
        {
            int y=s[0]%2;
            int m=s[1]%2;
            if(y==0&&m!=0)
            {
                int k=s[0];
                s[0]=s[1];
                s[1]=k;
            }
            else if(m==0&&y!=0)
            {
                
            }
            else if(s[0]<s[1]&&m==0&&y==0)
            {
                int k=s[0];
                s[0]=s[1];
                s[1]=k;
            }
        }
        
        
        
        else
        {
            
            for(int i=0;i<l;i++)
            {
                if(s[i]%2==0)
                {
                    m[c]=s[i];
                    v[c]=i;
                    c++;
                    for(int j=0;j<c;j++)
                    {
                        if(m[c-1]<=m[j])
                        {
                            s[v[c-1]]=x;
                            s[l-1]=m[c-1];
                            
                        }
                    }
                }
            }
            
        }
        cout<<s<<endl;
        t--;
    }
}
