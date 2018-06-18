
//#include<conio.h>
#include<iostream>

using namespace std;
int main()
{
     
    int n,i,j;
    cout<<"Enter the number of lines";
    cin>>n;
    if(n%2==0)
        n++;
    
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(i==0&&(j>=n/5&&j<=n/2-n/5)||i==0&&(j>=n/2+n/5&&j<=(n-1)-n/5))
                cout<<"* ";
            else if(i>0&&i<=n/5&&(j==n/5-i||j==n/2+n/5-i||j==n/2-n/5+i||j==(n-1)-n/5+i))
                cout<<"* ";
            else if((i>n/5&&i<=n/2)&&(j==0||j==n-1))
                cout<<"* ";
            else if(i>n/2&&(j==i-n/2||j==(n-1)-(i-n/2)))
                cout<<"* ";
            else
                cout<<"  ";
            }
        cout<<"\n";
        }
    
}
