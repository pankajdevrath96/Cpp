#include"iostream"
using namespace std;
class person
{
protected:
    char name[20];
public:
    person()
    {
    cin>>name;
    }
};

class emp:public person
{
protected:
    int eid;
public:
    emp():person()
    {
    cin>>eid;
    }
    
};
class qua: virtual public emp
{
protected:
    int exp;
public:
    qua():emp()
    {
    cin>>exp;
    }
};
class salary: virtual public emp
{
protected:
    float sal;
public:
    salary():emp()
    {
    cin>>sal;
    }
};


class inrement: public qua, public salary
{
    float inc;
public:
    inrement(): qua(), salary()
    {
    if(exp>10)
        inc=0.7*sal;
    else if(exp>5)
        inc=0.5*sal;
    else
        inc=0.25*sal;
    }
    void display()
    {
    cout<<name<<endl<<eid<<endl<<exp<<endl<<sal<<endl<<inc<<endl;
    }
};
int main()
{
    inrement p;
    p.display();
}
