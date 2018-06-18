#include "iostream"
using namespace std;
class demo
{
    char student_name[50];
    int student_id;
    char grade;
    char ans[21];
public:
    
    void input();
    friend void dis(demo m[],int z);
};
void demo::input()
{
    cin>>student_id>>student_name>>ans;
    int i=0,count=0;
    for(i=0;i<21;i++)
        {
        if(ans[i]=='t')
            count++;
        }
    if(count>17)
        grade='A';
    else if(count>13)
        grade='B';
    else if (count>9)
        grade='C';
    else if (count>5)
        grade='D';
    else
        grade='E';
}
void dis(demo m[],int n)
{
    int i=0;
    for(i=0;i<n;i++)
        cout<<m[i].student_id<<","<<m[i].student_name<<","<<m[i].grade<<endl;
}
int main()
{
    int n,i;
    cin>>n;
    demo p[n];
    for(i=0;i<n;i++)
        p[i].input();
    dis(p,n);
    return 0;
}
