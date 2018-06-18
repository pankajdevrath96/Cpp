#include"iostream"
using namespace std;
class employee
{
protected:
    int id;
    char name[20];
    char des[20];
public:
    void get_emp_data();
    void show_emp_data();
};
void employee::get_emp_data()
{
    cin>>id>>name>>des;
}
void employee::show_emp_data()
{
    cout<<id<<endl<<name<<endl<<des<<endl;
}
class contract:public employee
{
    int h,w;
    
public:
    void get_cont_data()
    {
    get_emp_data();
    cin>>h>>w;
    }
    void show_cont_data()
    {
     show_emp_data();
    cout<<h*w<<endl;
    
    }
    
};
class permanent:public employee
{
    double basic_sal,HRA,TA;
public:
    void get_per_data()
    {
    cin>>basic_sal>>HRA>>TA;
    }
    void show_per_data()
    {
   cout<<basic_sal+HRA+TA+(basic_sal*0.10);
    }
};
int main()
{
    static contract c;
    c.get_cont_data();
    permanent p;
    p.get_per_data();
    c.show_cont_data();
    p.show_per_data();
    return 0;
}

