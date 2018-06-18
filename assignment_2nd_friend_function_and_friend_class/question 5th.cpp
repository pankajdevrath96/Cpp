#include "iostream"
using namespace std;
class student
{
    char name[50];
    int marks[5],total;
public:
    void getdata();
    friend class result;
};
void student::getdata()
{
    total=0;
    cin>>name;
    for(int i=0;i<5;i++)
        {
        cin>>marks[i];
        total+=marks[i];
        }
    
}
class result
{
  
public:
    void logic(student p[],int n)
    {
    int i,j;
    student t;
    for(i=0;i<n-1;i++)
        {
        for(j=0;j<n-i-1;j++)
            {
            if(p[j].total>p[j+1].total)
                {
                t=p[j];
                p[j]=p[j+1];
                p[j+1]=t;
                }
            }
        }
     cout<<p[n-1].name<<endl<<p[0].name<<endl;
   }
};
int main()
{
    student p[50];
    result r;
    int n,i;
    cin>>n;
    for (i=0;i<n;i++)
        p[i].getdata();
    r.logic(p,n);
}
