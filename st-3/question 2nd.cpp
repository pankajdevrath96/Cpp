#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void showlist(list<int> x)
{
    int a=0,b;
    list<int>::iterator i;
    i=x.begin();
    b=*i;
    for(i=x.begin();i!=x.end();i++)
        {
        cout<<*i*2<<" ";
        if(*i>a)
            a=*i;
        if(*i<b)
            b=*i;
        }
    cout<<endl<<2*a<<endl<<2*b;
    
}

int main() {
    int n;    //no. of elements
    list<int> l;
    list<int>st;
    cin>>n;
    int num;
    for(int i=0; i<n; i++)
        {
        cin>>num;
        l.push_back(num);
        }
    showlist(l);
    return 0;
}
