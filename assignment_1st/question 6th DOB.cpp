#include<iostream>
using namespace std;
int main()
{
    int m1,m2,y1,y2;
    cin>>y1>>m1>>m2>>y2;
    y1=y2-y1;
    if(m2>m1)
        m1=m2-m1;
    else{
        y1--;
        m1=m2-m1+12;
    }
    cout<<y1<<" years And "<<m1<<" Months"<<endl;
    return 0;
}
