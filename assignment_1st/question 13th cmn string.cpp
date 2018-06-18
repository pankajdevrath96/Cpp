#include "iostream"
using namespace std;
int main()
{
    int a[1000]={0},b[1000]={0},i,count=0;
    char s1[500],s2[500];
    cin>>s1>>s2;
    for(i=0;s1[i]!='\0';i++)
        a[s1[i]]++;
    for(i=0;s2[i]!='\0';i++)
        b[s2[i]]++;
    
    for(i=0;s1[i]!='\0';i++)
        { if(a[s1[i]]>0 && b[s1[i]]>0)
            {
                if(a[s1[i]]>=b[s1[i]])
                    count+=b[s1[i]];
                else
                    count+=a[s1[i]];
                        a[s1[i]]=0;
            
            }
           
               }
    cout<<count<<endl;
    return 0;
    
    
}
