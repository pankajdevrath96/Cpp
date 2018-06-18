/*claass name student
 assume name of student rahul
 rahul like word which contain consicative element
 abab is ok
 but
 aabb is not ok
 he can also delete element
 */

#include "iostream"
using namespace std;
class student
{
  
    char a[50];
public:
    void input();
    void logic();
    
};
void student::input()
{
    cin>>a;
}
void student::logic()
{
    int b[1000],count=0,i;
    for(i=1;a[i]!='\0';i++)
        {
        b[a[i]]++;
        
    if(b[a[i]]>=1&& b[a[i-1]]==b[a[i]])
        {
        count++;
        b[a[i]]--;
        }
    else
        b[a[i]]=0;
        }
    cout<<count<<endl;
    
}




int main()
{
    student s;
    s.input();
    s.logic();
    
    
    return 0;
}
