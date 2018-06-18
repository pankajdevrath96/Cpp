#include "iostream"
using namespace std;
class matrix
{
    int a[2][2],b[2][2];
public:
    matrix()
    {
    cin>>a[0][0]>>a[0][1]>>a[1][0]>>a[1][1];
    }
    matrix operator+(matrix x)
    {
    a[0][0]+=x.a[0][0];
    a[0][1]+=x.a[0][1];
    a[1][0]+=x.a[1][0];
    a[1][1]+=x.a[1][1];
    return *this;
    }
    matrix operator+(int x)
    {
    a[0][0]++;
    a[0][1]++;
    a[1][0]++;
    a[1][1]++;
    return *this;
    }
    matrix operator*(matrix x)
    {
    matrix p;
    for(int i = 0; i < 2; ++i)
        for(int j = 0; j < 2; ++j)
            for(int k = 0; k < 2; ++k)
                {
                p.a[i][j] += a[i][k] * x.a[k][j];
                }
    return p;
    }
    void display()
    {
    cout<<a[0][0]<<" "<<a[0][1]<<endl<<a[1][0]<<" "<<a[1][1]<<endl;
    }
};

int main()
{
    matrix a,b,c;
    matrix d=a+b*c+1;
    d.display();
}
