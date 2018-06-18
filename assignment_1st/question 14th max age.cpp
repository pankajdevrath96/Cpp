#include "iostream"
using namespace std;
class student
{
    char name[50];
    int age;
public:
    void input();
    student logic(student t);
    void display();
};

void student :: input()
{
    cin>>name>>age;
    
}
student student::logic(student t)
{
    
    int i;
    
    
    if(age>t.age)
        {
        for(i=0;name[i]!='\0';i++)
            t.name[i]=name[i];
        t.age=age;
        }
    
    
    return t;
}
void student::display()
{
    cout<<name<<endl;
}


int main()
{
    student s1,s2,s3;
    s1.input();
    s2.input();
    s3=s1.logic(s2);
    s3.display();
    
    return 0;
}
