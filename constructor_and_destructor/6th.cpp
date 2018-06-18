#include "iostream"
using namespace std;
class demo
{
    int arr[1000],pos,n;
public:
    demo(int n,int pos);
    void logic();
};
demo::demo(int q,int x)
{
    int i;
    n=q;
    for(i=0;i<n;i++)
        cin>>arr[i];
    cin>>pos;
    
}
void demo::logic()
{
    int i;
    for(i=pos;i<n;i++)
        cout<<arr[i];
    for(i=0;i<pos;i++)
        cout<<arr[i];
    cout<<endl;
    
}
int main()
{
    int x,y=0;
    cin>>x;
    demo p(x,y);
    p.logic();
    
}
