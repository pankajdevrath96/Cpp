/*create two classes microsoft and amazon each having 20 object.
 classes having two data member name salary,print the name which having max. salary from both the company*/


#include "iostream"
using namespace std;
class amazon;
class microsoft
{
    int sal;
    char name[50];
public:
    friend void display( amazon a[], microsoft b[], int n);
    void input()
    {
    cin>>name>>sal;
    }
};
class amazon
{
    int sal;
    char name[50];
public:
    friend void display( amazon a[], microsoft b[], int n);
    void input()
    {
    cin>>name>>sal;
    }
};
void display(amazon a[], microsoft b[], int n)
{
    int i,l1=0,l2=0,x=0,y=0;
    
    for(i=0;i<n;i++)
        {
        if(a[i].sal>l1)
            {
            x=i;
            l1=a[i].sal;
            }
        if(b[i].sal>l2)
            {
            y=i;
            l2=b[i].sal;
            }
    }
    if(l1>l2)
        cout<<a[x].name<<endl;
    else
        cout<<b[y].name<<endl;
}
int main()
{
    int n;
    cin>>n;
    amazon p[50];
    microsoft q[50];
    int i;
    for(i=0;i<n;i++)
        {
        p[i].input();
        q[i].input();
        }
    display(p, q, n);
    return 0;
}
