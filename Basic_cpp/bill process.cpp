#include<iostream>
using namespace std;

class BILL
{
 
    int r;
    float amount;
    char name[50];
public:
    void input()
    {
    cin>>name>>r;
    
    }
    void output()
    {
    if(r<=100)
        amount=r*0.6;
    
    
    else if(r>100 && r<=300)
        amount=60+((r-100)*0.8);
    else
        amount=60+160+((r-300)*0.9);
    
    if(amount>300)
        amount=amount+((amount*15)/100);
    cout<<name<<"::"<<amount<<endl;
        
        }
    
};
int main()
{
    BILL p;
    p.input();
    p.output();
    return 0;
}
