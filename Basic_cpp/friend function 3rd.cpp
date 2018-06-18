//print the name of which having max even digit in age(using friend function)


#include "iostream"
using namespace std;
class flipkart;
class amazon
{
    char name[50];
    int age;
public:
    friend void display(flipkart a,amazon b);
    void input()
    {
    cin>>name>>age;
    }
    
    
};


class flipkart
{
    char name[50];
    int age;
public:
    friend void display(flipkart a,amazon b);
    void input()
    {
    cin>>name>>age;
    }
    
    
};
void display(flipkart a,amazon b)
{
    int c1=0,c2=0,rem;
    while(a.age!=0)
        {
        rem=a.age%10;
        if(rem%2==0)
            c1++;
        
        a.age/=10;
        }
    
    while(b.age!=0)
        {
        rem=b.age%10;
        if(rem%2==0)
            c2++;
        
        b.age/=10;
        }
    
    if(c1>c2)
        cout<<a.name<<endl;
    else if(c2>c1)
        cout<<b.name<<endl;
    
}
int main()
{
    flipkart p;
    amazon q;
    p.input();
    q.input();
    display(p, q);
    
    
    return 0;
}
