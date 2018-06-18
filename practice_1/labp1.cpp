#include<iostream>
using namespace std;
int isprime(int a)
{
    for(int i=2;i<=a/2;i++)
        {
        if(a%i==0)
            return 0;
        }
    return 1;
}
class find_
{
protected:
    int lb,ub;
    //STUDENT CODE HERE
public:
    void get()
    {
    cin>>lb>>ub;
    }
};
class der_prime:public find_
{
    int a[10]={0};
public:
    
    void detect_prime()
    {
    for(int i=lb+1;i<ub;i++)
        {
        int m=i;
        if(isprime(m))
            {
            while(m>0)
                {
                a[m%10]++;
                m/=10;
                }
            
            }
        
        }
    }
    void print_()
    {
    int max=a[9],index=9;
    for(int i=8;i>=0;i--)
        if(a[i]>max)
            {
            max=a[i];
            index=i;
            }
    cout<<index<<endl<<max<<endl;
    
    }
    
};
    int main()
    {
    static der_prime d1;
    d1.get(); //function in base class to enter lower bound(lb) and upper bound values(ub)
    d1.detect_prime(); // this function is responible for logic building in derived class(der_prime)
    d1.print_();//print the desired output in derived class
    return 0;
    }

