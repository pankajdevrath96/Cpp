#include "iostream"
#include "string"
using namespace std;
class demo
{
    char *p,*q;
public:
    demo(char *m,char *n);
    void logic();
};

demo::demo( char *s1,char *s2)
{
    long int l1,l2;
    l1=strlen(s1);
    l2=strlen(s2);
    p=new char[l1+1];
    q=new char[l2+1];
    strcpy(p,s1);
    strcpy(q,s2);
}
void demo::logic()
{
    int a[1000]={0},i,flag=0;
    if(strlen(p)==strlen(q))
        {  for(i=0;i<strlen(p);i++)
            {   a[p[i]]++;
                a[q[i]]--;
                
            }
            for(i=0;i<strlen(p);i++)
                if(a[p[i]]!=0 || a[q[i]]!=0)
                    flag=1;
            if(flag==0)
                cout<<"Anagram"<<endl;
            else
                cout<<"Not Anagram"<<endl;
            
        }
    else
        cout<<"Not Anamgram"<<endl;
    
}
int main()
{
    char str1[50],str2[50];
    cin>>str1>>str2;
    demo t(str1,str2);
    t.logic();
}
