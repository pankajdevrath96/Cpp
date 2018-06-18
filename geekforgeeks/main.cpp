#include <iostream>
#include <string>
using namespace std;

int main() {
    //code
    int t,i,j,k,l,m,c,n,a,l1,l2,m1=0,m2=0;
    string s1,s2;
    cin>>t;
    while(t>0)
    {
        cin>>s1;
        cin>>s2;
        j=s1.length();
        for(i=0;i<j;i++)
        {
            m=(int)s1[i];
            if(m==40)
            {m=0;
                n=(int)s1[i-1];
                
                if(n==45)
                    c=1;
                
                s1.erase (s1.begin()+i);
                s1.erase (s1.begin()+(i-1));
                j=j-2;
                i=i-2;
            }
            a=43;
            if(m==45&&c==1)
            {
                
                s1[i]=(char)a;
            }
            a=45;
            if(m==43&&c==1)
            {
                
                s1[i]=(char)a;
            }
            if(m==41)
            { c=0;
                s1.erase (s1.begin()+i);
                i--;
                j--;
            }
            
        }
        j=s2.length();
        for(i=0;i<j;i++)
        {
            m=(int)s2[i];
            if(m==40)
            {m=0;
                n=(int)s1[i-1];
                
                if(n==45)
                    c=1;
                
                s2.erase (s2.begin()+i);
                s2.erase (s2.begin()+(i-1));
                j=j-2;
                i=i-2;
            }
            a=43;
            if(m==45&&c==1)
            {
                
                s1[i]=(char)a;
            }
            a=45;
            if(m==43&&c==1)
            {
                
                s2[i]=(char)a;
            }
            if(m==41)
            { c=0;
                s2.erase (s2.begin()+i);
                i--;
                j--;
            }
            
        }
        
        l1=s1.length(); l2=s2.length();
        
        for(i=0;i<l1;i++)
        {
            m1=m1+s1[i];
            
        }
        for(i=0;i<l2;i++)
        {
            m2=m2+s2[i];
        }
        if(m1==m2||abs(m1-m2)==43||abs(m1-m2)==45)
        {
            cout<<"YES"<<endl;
            
            
        }
        
        else
        {
            cout<<"NO"<<endl;
        }
        // cout<<s1<<s2;
        
        
        
        t--;
    }
    
    return 0;
}
