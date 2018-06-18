//create two classes tcs and amazon ,scan name and profit in both classes and print the name whose having maximum profit and having even digits unless name of the other class
// in this tcs is a fried of amazon


#include "iostream"
using namespace std;
class amazon
{
    int profit;
    char name[50];
public:
    void input()
    {
    cin>>name>>profit;
    }
    friend class tcs;
};

class tcs
{
    int profit;
    char name[50];
public:
    void input()
    {
    cin>>name>>profit;
    }
    void logic(amazon p)
    {
    //int f=0;
    if(p.profit>profit)
        {
        int f=0;
        int x;
        x=p.profit;
        while(x>0)
            {
            int rem;
            rem=x%10;
            if((rem%2)!=0)
                {
                f=1;
                break;
                }
            x=x/10;
            }
        
    if(f==0)
        cout<<p.name<<endl;
    else
        cout<<name<<endl;
        }
    else
        {
        int f=0;
        int x;
        x=profit;
        while(x>0)
            {
            int rem;
            rem=x%10;
            if((rem%2)!=0)
                {
                f=1;
                break;
                }
            x=x/10;
            }
        if(f==0)
            cout<<p.name<<endl;
        else
            cout<<name<<endl;
        }
    }
};

int main()
{
    tcs p;
    amazon z;
    z.input();
    p.input();
    p.logic(z);
    return 0;
}

