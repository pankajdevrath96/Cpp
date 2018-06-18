#include<iostream>
using namespace std;
class S
{
    char name[50];
    int age;
public:
    void input()
    {
    cin>>name>>age;
    
    }
    void logic(S q)
    {
    if(age>q.age)
        cout<<name<<endl<<age<<endl;
    else
        cout<<q.name<<endl<<q.age<<endl;
    }
    
};
int main()
{
    S a,b;
    a.input();
    b.input();
    a.logic(b);
    
    return 0;
}
