#include"iostream"
#include "string"
using namespace std;
int size;
class bill
{
protected:
    int items[10];
    float price[10];
public:
    bill(int items[],float price[],int size);
    virtual void total()=0;
    virtual void display()=0;
};
//STUDENT CODE HERE
bill::bill(int q[],float p[], int s)
{
    size =s;
    for(int i=0;i<size;i++)
        {
        items[i]=q[i];
        price[i]= p[i];
        }
        
}
class Cheque:public bill
{
    int no,t=0;
    char p[30];
public:
   
    Cheque(int item[],float price[],int c,char n[],int s):bill(item,price,s)
    {
    no=c;
    strcpy(p,n);
    }
    void total()
    {
    for(int i=0;i<size;i++)
        t+=price[i];
    }
    void display()
    {
    cout<<"payed by check"<<endl<<"Check number:"<<no<<endl<<"Name of Bank:"<<p<<endl<<"Total="<<t<<endl;
    }
};
class Cash:public bill
{
    int t=0;
public:
    
    Cash(int item[],float price[],int s):bill(item,price,s)
    {
   
    }
    void total()
    {
    for(int i=0;i<size;i++)
        t+=price[i];
    }
    void display()
    {
    cout<<"payed by cash"<<endl<<"Total="<<t<<endl;
    }
};
int main()
{
    int s;
    cin>>s;
    int item[s];
    for (int i=0;i<s;i++)
        cin>>item[i];
    float price[s];
    for(int i=0;i<s;i++)
        cin>>price[i];
    int option;
    cin>>option;
    if(option==1)
        {
            int c_no;
            char n[30];
            cin>>c_no;
            cin.ignore();
            cin.getline(n,30);
            Cheque Ch(item,price,c_no,n,s);
            Ch.total();
            Ch.display();
        }
    else if(option==2)
        {
        Cash C(item,price,s);
        C.total();
        C.display();
        }
    return 0;
}

