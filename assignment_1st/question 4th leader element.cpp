#include<iostream>
using namespace std;
class test
{
  
    int n,a[30];
public:
    void input();
    void logic();
    
    
};
void test::input()
{
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void test::logic()
{
    int large,i,j,flag=0;
    for(i=0;i<n;i++)
        {
        large=a[i];
        for(j=i+1;j<n;j++)
            {
            if(a[j]>large)
                {
                flag=1;
                break;
                }
            }
        if(flag==0)
            cout<<large<<" ";
         flag =0;
        }
   
    
    
}




int main()
{
    test t;
    t.input();
    t.logic();
    return 0;
}
