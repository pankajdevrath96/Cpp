#include <iostream>
using namespace std;

class OUT
{
    int s,h,m;
public:
    void display()
    {
    cin>>s;
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s%60;
    cout<<h<<"hours "<<m<<"min "<<s<<"sec "<<endl;
    
    }
    
};
int  main()
{
    OUT p;
    p.display();
    return 0;
    
}

