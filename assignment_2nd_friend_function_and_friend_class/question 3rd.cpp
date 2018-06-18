#include "iostream"
using namespace std;
class info
{
    char name[50];
    int age,rollno;
public:
    void getdata();
    friend class sorting;
    
    
};

void info::getdata()
{
    cin>>name>>age>>rollno;
}

class sorting
{
  
public:
    void logic(info a[],int n)
    {
    int i,j;
    info t;
    for(i=0;i<n-1;i++)
        {
        for(j=0;j<n-i-1;j++)
            {
            if(a[j].rollno>a[j+1].rollno)
                {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                }
            }
        }
    for(i=0;i<n;i++)
        cout<<a[i].name<<" "<<a[i].age<<" "<<a[i].rollno<<endl;
    cout<<endl;
    }
};
int main()
{
    int i,n;
    
    cin>>n;
    info a[n];
    sorting p;
    for(i=0;i<n;i++)
        a[i].getdata();
    p.logic(a,n);
    
    
    
    return 0;
}
