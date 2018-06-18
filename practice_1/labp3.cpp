#include "iostream"
using namespace std;
#define size 100
class country
{
protected:
    char cname[size];
    float pprc;
    float Iprc;
    float ratio;
public:
    virtual void disp()=0;
    country(){ }
    virtual void getdata()
    {
        //        cout<<"Enter Country Name ";
        cin>>cname;
        //       cout<<"Enter the % of Polio ";
        cin>>pprc;
        //     cout<<"Enter the % of Literacy ";
        cin>>Iprc;
    }
    virtual void display()
    {
        
        cout<<"Country Name "<<cname<<endl;
        cout<<"Country Polio% "<<pprc<<endl;
        cout<<"Country Lit. % "<<Iprc<<endl;
        cout<<"The Measure of Interdependency "<<float (pprc/Iprc)<<endl;
    }
};
class state: public country
{
public:
    
    char sname[size];
    float pprc;
    float Iprc;
    float ratio;
    void disp(){cout<<"Welcome";}
    //STUDENT CODE HERE
    
    void input()
    {
    getdata();
    //        cout<<"Enter Country Name ";
    cin>>sname;
    //       cout<<"Enter the % of Polio ";
    cin>>pprc;
    //     cout<<"Enter the % of Literacy ";
    cin>>Iprc;
    
    }
    void display()
    {
    cout<<endl<<endl;
    country::display();
    cout<<"State Name "<<sname<<endl;
    cout<<"%Age of Polio of State "<<pprc<<endl;
    cout<<"%Age of Lite. of State "<<Iprc<<endl;
    cout<<"The Measure of Interdependency "<<float (pprc/Iprc)<<endl;
    }
};
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    state p;
    p.input();
     p.disp();
    p.display();
   return 0;
}

