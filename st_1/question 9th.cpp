#include "iostream"
using namespace std;
class result
{
    char name[50],f_name[50];
    int marks;
public:
    result()
    {
    
    }
    void getdetails()
    {
    cin>>name>>f_name>>marks;
    }
    void find_student(result *p,int n)
    {
    int i,j=0,m=0;
    for(i=0;i<n;i++)
        if(p[i].marks>m)
            {
            m=p[i].marks;
            j=i;
            }
    cout<<p[j].name<<endl<<p[j].f_name<<endl<<p[j].marks<<endl;
    }
};
int main()
{
    result *t;
    int n;
    cin>>n;
    t=new result[n];
    for(int i=0;i<n;i++)
        t[i].getdetails();
    t[0].find_student(t,n);
    
}

