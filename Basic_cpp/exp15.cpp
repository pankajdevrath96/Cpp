#include<iostream>
using namespace std;
void read(int *a,int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void display(int *a,int n)
{
    for(int i=0;i<n;i++)
        cout<<" \n "<<a[i];
}
void check_bounds(int *a,int index,int n)
{
    if(index<0 || index>=n)
        throw(index);
    else
        cout<<"Value of index:"<<index<<" is "<<a[index];
}
int main()
{
    int a[10],n,i;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter array of elements:";
    read(a,n);
    cout<<"\n Array elements are:";
    display(a,n);
    cout<<"\nEnter index";
    cin>>i;
    try
    {
    check_bounds(a,i,n);
    }
    catch(int i)
    {
    cout<<"Index out of bounds"<<endl;
    }
    return 0;
}
