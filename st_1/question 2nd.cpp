#include "iostream"
using namespace std;
class student
{
    char name[50];
    int marks;
public:
    void getdata(void);
    friend void sort(student s[],int z);
};

void student::getdata()
{
    cin>>name>>marks;
    
}
void sort(student a[],int n)
{
    int i,j;
    student t;
    
    for(i=0;i<n-1;i++)
        {
        for(j=0;j<n-i-1;j++)
            {
            if(a[j].marks<a[j+1].marks)
                {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                }
            }
        }
    
   
        cout<<a[0].name<<endl;
    
}
int main()
{
    int i,n;
    cin>>n;
    student p[n];
    for(i=0;i<n;i++)
        p[i].getdata();
    sort(p,n);
    
    
    return 0;
}
