#include<iostream>
using namespace std;
template<class T>
class sort_array
{
    T *a;
    int size;
    
public:
    sort_array(int x)
    {
    a=new T[x];
    size=x;
    }
    void read()
    {
    for(int i=0;i<size;i++)
    cin>>a[i];
    }
    void sort1()
    {
    sort(a,a+size);
    }
    void print()
    {
    for(int i=0;i<size;i++)
        cout<<a[i]<<endl;
    }
};
int main()
{
    int ch;
    int s;
    cin>>s;
    sort_array<string>c(s);
    sort_array<int>a(s);
    sort_array<float>b(s);
    cin>>ch;
    switch(ch)
    {
        case 1:
        a.read();
        a.sort1();
        a.print();
        break;
        
        case 2:
        b.read();
        b.sort1();
        b.print();
        break;
        
        case 3:
        c.read();
        c.sort1();
        c.print();
        break;
        
        default:
        cout<<"WRONG CHOICE";
        break;
    }
    return 0;
}
