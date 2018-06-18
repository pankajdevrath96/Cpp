#include "iostream"
using namespace std;
class demo
{
    float inch,feet;
public:
    void input();
    demo logic(demo m);
    void display();
    
};
void demo::input()
{
    cin>>feet>>inch;
}
demo demo::logic(demo m)
{
    m.feet=feet+m.feet;
    m.inch =inch+m.inch;
    if( m.inch >=12)
        {
        m.inch-=12;
        m.feet++;
        }
    return m;
}
void demo::display()
{
    cout<<feet<<" feet "<<inch<<" inches"<<endl;
}
int main()
{
    demo d1,d2,d3;
    d1.input();
    d2.input();
    d3=d1.logic(d2);
    d3.display();
}
