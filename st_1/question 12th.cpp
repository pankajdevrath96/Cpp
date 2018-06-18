#include "iostream"
using namespace std;
class Array
{
    int n;
    float *t;
    float avg=0;
public:
    Array()
    {
    
    }
    
  Array(int m)
    {
    n=m;
    t=new float[n];
    for(int i=0;i<n;i++)
        cin>>t[i];
    }
    void find_avg()
    {
    
    for(int i=0;i<n;i++)
        avg+=t[i];
    avg/=n;
    }
    void show_data()
    {
    find_avg();
    cout<<avg<<endl;
    }
};
int main()
{
    int n;
    cin>>n;
    Array p(n);
    p.show_data();
    
    
}
 
