#include "iostream"
#include "string"
using namespace std;
class test{
    char str[50];
public:
    test(char *p);
    friend class demo;
};
class demo
{
public:
    void logic(test);
};
test::test(char *a)
{
    strcpy(str,a);
}
void demo::logic(test t)
{
    int a[1000]={0};
    int i;
    for(i=0;i<strlen(t.str);i++)
        a[t.str[i]]++;
    int max=0;
    char ch;
    for(i=0;i<strlen(t.str);i++)
        if(a[t.str[i]]>max && a[t.str[i]]!=' ')
            {
            max=a[t.str[i]];
            ch=t.str[i];
            }
    cout<<ch<<endl;
}
int main()
{
    char a[50];
    cin.getline(a, 50);
    test x(a);
    demo p;
    p.logic(x);
}

