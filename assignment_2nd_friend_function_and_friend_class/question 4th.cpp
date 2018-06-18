#include "iostream"
using namespace std;
class canada;
class india
{
    int hours,min,sec;
public:
    void getdata();
    friend void logic(india ,canada);
    
};
void india::getdata()
{
    cin>>hours>>min>>sec;
}
class canada
{
    int hours,min,sec;
public:
    void getdata();
    friend void logic(india ,canada);
    
};

void canada::getdata()
{
    cin>>hours>>min>>sec;
}
void logic(india p,canada q)
{
    p.hours+=q.hours;
    p.min+=q.min;
    p.sec+=q.sec;
    if(p.sec>59)
        {
        p.min++;
        p.sec-=59;
        }
    if(p.min>59)
        {
        p.hours++;
        p.min-=60;
        }
    if(p.hours<=9)
        cout<<"0";
    cout<<p.hours<<":"<<p.min<<":"<<p.sec<<endl;
}
int main()
{
    india p;
    canada q;
    p.getdata();
    q.getdata();
    logic(p, q);
    
    return 0;
    
}
