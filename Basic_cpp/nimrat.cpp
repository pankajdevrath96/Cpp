#include <iostream>
using namespace std;

class demo
{
private:
    char name[350];
public:
    void input();
    void logic(demo d);
};
void demo::input()
{
    cin >>name;
}
void demo::logic(demo d)
{
    int a[1000]={0},i;
    for(i=0;name[i]!='\0';i++)
        {
        a[name[i]]++;
        
        }
  
    for(i=0;d.name[i]!='\0';i++)
        {
        a[d.name[i]]--;
        
        
        }
   
    for(i=0;name[i]!='\0';i++)
        {
        if(a[name[i]]==0)
            { cout<<name[i];
                a[name[i]]++;
                  }
        }
    
}
int main() {
    demo p,q;
    p.input();
    q.input();
    p.logic(q);
    return 0;
}

