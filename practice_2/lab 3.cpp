#include "iostream"
using namespace std;


class product
{
protected:
    char model[10];
    int manuf_year;
    int no_warranty_year;
};
class manufacturer
{
protected:
    char brand[20];
    char country[10];
};
class LCD :public product,public manufacturer
{
  
    unsigned long size,price;
public:
    void input()
    {
    cin>>brand>>country>>model>>manuf_year>>no_warranty_year>>size>>price;
    }
    void display()
    {
    if(no_warranty_year<3)
        no_warranty_year=3;
    cout<<brand<<endl<<country<<endl<<model<<endl<<manuf_year<<endl<<no_warranty_year<<endl<<size<<endl<<price<<endl;
    
    }
    
    
};
int main()
{
    LCD p;
    p.input();
    p.display();
}
