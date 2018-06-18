#include "iostream"
using namespace std;
class demo
{
   unsigned long int arr[1000];
public:
    demo();
    demo(int n);
    void logic(int);
    
};
demo::demo(int n)
{
    int i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    
}
void demo::logic( int n)
{
    int i,j,flag=0;
    
    for(i=0;i<n;i++)
        {
        flag=0;
        for(j=0;j<i;j++)
            if(arr[i]==arr[j])
               flag=1;
               
               if(flag==1)
               cout<<"0"<<endl;
               else
               cout<<arr[i]<<endl;
        }
}
int main()
{
    int n;
    cin>>n;
    demo p(n);
    p.logic(n);
}
