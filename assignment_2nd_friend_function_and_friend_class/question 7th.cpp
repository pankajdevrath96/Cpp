#include "iostream"
using namespace std;
class perfect
{
    char sa[99999];
public:
    friend int logic(perfect p);
};
/
int logic(perfect p)
{
    
    cin>>p.sa;
    int i=1,k=0,count=0;
    char m[1000];
    m[0]=p.sa[0];
    while(p.sa[i]!=0)
        {
        if(p.sa[i]==m[k])
            {
            count++;
            }
        else
            {
            m[++k]=p.sa[i];
            
            }
        i++;
        }
    return count;
}
int main()
{
    perfect m;
    int z=logic(m);
    cout<<z<<endl;
}
