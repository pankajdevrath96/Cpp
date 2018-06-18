#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    
    cout<<setw(10)<<setfill('.')<<"ANKIT"<<endl;
    cout<<std::showpos<<2<<endl<<std::showpoint<<3<<endl;
    cout<<"HELLO"<<endl;
    cout<<setw(10)<<"HELLO"<<endl;
    
   // cout<<setw(10)<<setfill('.')<<"ANKIT"<<endl;
    
    cout<<"HELLO"<<setw(10)<<std::right<<"RAHUL"<<endl;
    cout<<setw(10)<<"HELLO"<<"RAHUL"<<endl;
    cout<<setw(10)<<std::left<<"HELLO"<<endl;
    cout<<setw(10)<<std::left<<"HELLO"<<"RAHUL"<<endl;
    cout<<setw(10)<<std::right<<"HELLO"<<"RAHUL"<<endl;
    cout<<setw(10)<<"HELLO"<<"RAHUL"<<endl;
    
    cout<<setw(10)<<left<<"RAHUL"<<"22"<<endl;
    cout<<setw(10)<<"ANKIT"<<"22"<<endl;
    cout<<setw(10)<<"VANSHIKA"<<"20"<<endl;
    cout<<setw(10)<<"RAM"<<"27"<<endl;
    
    for(int i=1;i<15;i++)
        cout<<"5*"<<setw(2)<<i<<"="<<(5*i)<<endl;
    
    
    cout<<setw(10)<<setfill('.')<<"ANKIT"<<endl;
    cout<<setw(10)<<std::right<<setfill('.')<<"ANKIT"<<endl;
    float i=12.0;
    cout<<setprecision(3)<<i<<endl;
    cout<<setprecision(9)<<i<<endl;
    int x=1234567;
    cout<<setw(4)<<x<<endl;
    
    return 0;
}
