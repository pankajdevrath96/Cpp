#include<iostream>
using namespace std;
class STUDENT
{
    char name[50];
    int age;
public:
    void input()
    {
    cin>>this->name>>this->age; // same as cin>>name>>age;
    }
    
    void logic(STUDENT a,STUDENT b)
    {
    cout<<name<<endl<<age<<endl<<a.name<<endl<<a.age<<endl<<b.name<<endl<<b.age<<endl;
    }
    
    
};
int main()
{
    STUDENT p,q,r;
    p.input();
    q.input();
    r.input();
    p.logic(q,r);
    
    return 0;
}
