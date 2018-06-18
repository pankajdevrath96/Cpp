#include "iostream"
#include "iomanip"
#include "string"
using namespace std;
class student
{
protected:
    unsigned int roll_no,fee,pend_amt=0,sbmt_amt,fine;
    string name,fname,stream,venue;
public:
    
    student()
    {
    cout<<"Enter the name of the student: ";
    cin.ignore();
    getline(cin,name);
    cout<<endl<<"Enter the Father's name of the student: ";
    //cin.ignore();
    getline(cin,fname);
    cout<<endl<<"Enter the roll number of the student: ";
    cin>>roll_no;
}
    virtual void display()
    {}
};
class BE:public student
{
public:
   BE()
    {
   int m,l;
    cout<<"Enter 1 for CSE"<<endl<<"Enter 2 for ME"<<endl<<"Enter 3 for ECE"<<endl;
    cin>>m;
   if(m==1)
    {
    fee=75000;
    cout<<"Enter the amount of fine: ";
    cin>>fine;
    cout<<"If fee is submitted press 1 else press 0"<<endl;
    cin>>l;
    if(l==1)
        pend_amt=fee+fine;
    else
        pend_amt=fine;
    stream="CSE";
    venue="Turing Block";
    }
    else if(m==2)
        {
        fee=75000;
        cout<<"Enter the amount of fine: ";
        cin>>fine;
        cout<<"If fee is submitted press 1 else press 0"<<endl;
        cin>>l;
        if(l==1)
        pend_amt=fee+fine;
        else
        pend_amt=fine;
        stream="ME";
        venue="Tesla Block";
        }
   else if(m==3)
            {
            fee=75000;
            cout<<"Enter the amount of fine: ";
            cin>>fine;
            cout<<"If fee is submitted press 1 else press 0"<<endl;
            cin>>l;
            if(l==1)
                pend_amt=fee+fine;
            else
                pend_amt=fine;
            stream="ECE";
            venue="Edision Block";
            }
    else
        {
            cout<<"Wrong input"<<endl<<"Code is Terminated"<<endl;
            exit(0);
        }
        }
    void display()
    {
    cout<<setw(40)<<left<<"Name of the student  "<<left<<"= "<<name<<endl<<setw(40)<<left<<"Father's name of the student  "<<left<<"= "<<fname<<endl<<setw(40)<<left<<"Roll number of the student "<<left<<"= "<<roll_no<<endl<<setw(40)<<left<<"Branch of the student  "<<left<<"= "<<stream<<endl<<setw(40)<<left<<"Venue of the student  "<<left<<"= "<<venue<<endl<<setw(40)<<left<<"Remaining amount of fee the student  "<<left<<"= "<<pend_amt<<endl;
    }};
class ME:public student
{
public:
    ME()
    {
   int m,l;
    cout<<"Enter 1 for CSE"<<endl<<"Enter 2 for ME"<<endl<<"Enter 3 for ECE"<<endl;
    cin>>m;
    if(m==1)
        {
        fee=50000;
        cout<<"Enter the amount of fine: ";
        cin>>fine;
        cout<<"If fee is submitted press 1 else press 0"<<endl;
        cin>>l;
        if(l==1)
            pend_amt=fee+fine;
        else
            pend_amt=fine;
        stream="CSE";
        venue="Babbage Block";
        }
    else if(m==2)
        {
        fee=50000;
        cout<<"Enter the amount of fine: ";
        cin>>fine;
        cout<<"If fee is submitted press 1 else press 0"<<endl;
        cin>>l;
        if(l==1)
            pend_amt=fee+fine;
        else
            pend_amt=fine;
        stream="ME";
        venue="Babbage Block";
        }
    else if(m==3)
        {
        fee=50000;
        cout<<"Enter the amount of fine: ";
        cin>>fine;
        cout<<"If fee is submitted press 1 else press 0"<<endl;
        cin>>l;
        if(l==1)
            pend_amt=fee+fine;
        else
            pend_amt=fine;
        stream="ECE";
        venue="Babbage Block";
        }
    else
        {
        cout<<"Wrong input"<<endl<<"Code is Terminated"<<endl;
        exit(0);
        }
    }
    void display()
    {
    cout<<setw(40)<<left<<"Name of the student  "<<left<<"= "<<name<<endl<<setw(40)<<left<<"Father's name of the student  "<<left<<"= "<<fname<<endl<<setw(40)<<left<<"Roll number of the student "<<left<<"= "<<roll_no<<endl<<setw(40)<<left<<"Branch of the student  "<<left<<"= "<<stream<<endl<<setw(40)<<left<<"Venue of the student  "<<left<<"= "<<venue<<endl<<setw(40)<<left<<"Remaining amount of fee the student  "<<left<<"= "<<pend_amt<<endl;
    }};
class MASSCOM:public student
{
public:
    MASSCOM()
    {
   int l;
    fee=60000;
        cout<<"Enter the amount of fine: ";
        cin>>fine;
        cout<<"If fee is submitted press 1 else press 0"<<endl;
        cin>>l;
        if(l==1)
            pend_amt=fee+fine;
        else
            pend_amt=fine;
        stream="MASS COMMUNICATION";
        venue="Fleming Block";}
    void display(){
    cout<<setw(40)<<left<<"Name of the student  "<<left<<"= "<<name<<endl<<setw(40)<<left<<"Father's name of the student  "<<left<<"= "<<fname<<endl<<setw(40)<<left<<"Roll number of the student "<<left<<"= "<<roll_no<<endl<<setw(40)<<left<<"Branch of the student  "<<left<<"= "<<stream<<endl<<setw(40)<<left<<"Venue of the student  "<<left<<"= "<<venue<<endl<<setw(40)<<left<<"Remaining amount of fee the student  "<<left<<"= "<<pend_amt<<endl;
}};
int main()
{
    student *ptr;
    cout<<"Press"<<endl<<" 1 for B.tech"<<endl<<" 2 for M.tech "<<endl<<" 3 for MassCom"<<endl;
    int l;
    cin>>l;
    if(l==1)
        {
    BE Obj;
    ptr=&Obj;
        ptr->display();}
    else if(l==2)
        {
        ME Obj;
        ptr=&Obj;
        ptr->display();
        }
    else if(l==3)
        {
        MASSCOM Obj;
        ptr=&Obj;
        ptr->display();
        }
    else
        cout<<"Wrong Input"<<endl<<"Code Terminated"<<endl;
    return 0;
}
