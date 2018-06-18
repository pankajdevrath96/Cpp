#include<iostream>
using namespace std;
class DEMO
{
    char name[50];
    int age;
public:
    void input()
    {
    cin>>name>>age;
    }
    void logic(DEMO m)
    {
    cout<<name<<endl<<m.name<<endl;
    cout<<age<<endl<<m.age;
    
    }
    
};
int main()
{
    DEMO p,q;
    p.input();
    q.input();
    p.logic(q);
    return 0;
    
}
