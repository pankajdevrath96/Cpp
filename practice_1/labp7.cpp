#include<iostream>
using namespace std;
class student
{
private:
    int rollno;
    char name[100];
public:
    void get_stu_data();
    void show_stu_data();
};
void student::get_stu_data()
{
    cin>>rollno>>name;
}
void student::show_stu_data()
{
    cout<<rollno<<endl<<name<<endl;
}
class academics:virtual public student
{
protected:
    int marks;
    char grade;
public:
    void get()
    {
        get_stu_data();
        cin>>marks;
        if (marks>=90) grade ='A';
        else if (marks>=75)grade='B';
        else if (marks >=60 ) grade='C';
        else if (marks >=45) grade='D';
        else grade='F';
    }
};
class accounts:virtual public student
{
protected:
    int fees=0,dues=0;
public:
    void get()
    {
    cin>>fees;
    }
};
class guardian:public accounts,academics
{
public:
    void get()
    {
    academics::get();
    accounts::get();
    }
    void show()
    {
    show_stu_data();
    cout<<marks<<endl<<grade<<endl<<fees<<endl<<dues<<endl;
    }
};
int  main()
{
    guardian g;
    g.get();
    g.show();
    
}

