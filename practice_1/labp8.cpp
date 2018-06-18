#include<iostream>
using namespace std;
int decimalToOctal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
        {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
        }
    return octalNumber;
}

long long convertDecimalToBinary(long int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1;
    
    while (n!=0)
        {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
        }
    return binaryNumber;
}
class number
{
protected:
    int *num;
public:
    void getdata();
    virtual void show()=0;
};
void number::getdata()
{
    
}
class octnum:public number
{
public:
    int rem, i ;
    int octalNumber;
    void initialise();
    void show();
};
void octnum::initialise()
{
    cin>>i;
    num=&i;
}
void octnum::show()
{
    cout<<decimalToOctal(*num)<<endl;
}
class binary:public octnum
{
public:
    long int rem,i;
    int bin_no;
    void initialise_b();
    void show();
};
void binary::initialise_b()
{
    cin>>bin_no;
    num=&bin_no;
    
}

void binary::show()
{
    cout<<convertDecimalToBinary(*num)<<endl;
}

int main()
{
    octnum ob;
    binary ob2;
    ob.initialise();
    ob2.initialise_b();
    ob.show();
    ob2.show();
}

