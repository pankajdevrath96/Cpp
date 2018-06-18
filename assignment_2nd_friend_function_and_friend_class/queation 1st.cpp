#include "iostream"
using namespace std;
class image;
class real
{
    int x1,y1;
public:
    void getdata();
    friend void sum(real,image);
    
};

void real::getdata()
{
    cin>>x1>>y1;
}
class image
{
    int x2,y2;
public:
    void getdata();
    friend void sum(real,image);
    
};

void image::getdata()
{
    cin>>x2>>y2;
}

void sum(real p,image q)
{
    p.x1+=q.x2;
    p.y1+=q.y2;
    cout<<"sum is "<<p.x1<<"+i"<<p.y1<<endl;
}
int main()
{
    real p;
    image q;
    p.getdata();
    q.getdata();
    sum(p, q);
    return 0;
}

