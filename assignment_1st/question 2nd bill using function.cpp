#include"iostream"
using namespace std;
class demo
{
    char name[50];
    int units;
public:
    void input(char *p,int b);
    void logic();
};
void demo::input(char *p,int b)

{
    for(int i=0;p[i]!='\0';i++)
        name[i]=p[i];
    units=b;
}
void demo::logic()
{
    float amount;
    if(units<=100)
        amount=units*0.6;
    
    
    else if(units>100 && units<=300)
        amount=60+((units-100)*0.8);
    else
        amount=60+160+((units-300)*0.9);
    
    if(amount>300)
        amount=amount+((amount*15)/100);
    cout<<"Electricty bill"<<endl<<name<<":"<<"RS "<<amount<<endl;
    

}



int main()
{
    char z[50];
    int m;
    cin>>z;
    cin>>m;
    demo d;
    d.input(z,m);
    d.logic();
    
    
    
    return 0;
}
