#include<iostream>
using namespace std;
template<class t>
class sets_theory
{
    t *arr1;
    t *arr2;
    int s_arr1;
    int s_arr2;
public:
    sets_theory(int a,int b)
    {
    arr1=new t(a+b);
    arr2=new t(b);
    s_arr1=a;
    s_arr2=b;
    
    }
    void get()
    {
    int x=0;
    for(int i=0;i<s_arr1 ;i++)
        cin>>arr1[i];
    int j=0;
    for(int i=0;i<s_arr2 ;i++)
        {
        t a;
        cin>>a;
        int flag=0;
        for(int j=0;j<s_arr1;j++)
             if(arr1[j]==a)
                 { flag=1;x++;
                     break;
                 }
        if(flag==0)
        arr2[j++]=a;
                    
                    
        }
   
    s_arr2-=x;
    
    }
    void sets_union()
    {
    t *a= new t(s_arr2+s_arr1);
    int i;
    for(i=0;i<s_arr1;i++)
        a[i]=arr1[i];
    int j=i;
    
    for(i=0;i<s_arr2;i++,j++)
        a[j]=arr2[i];
    
    sort(a,a+s_arr2+s_arr1);
   
    
    for(i=0;i<s_arr2+s_arr1;i++)
        cout<<a[i]<<" ";
    
    

  
    }
};
int main()
{
    int n1,n2;
    int ch;
    cin>>ch;
    cin>>n1>>n2;
    switch(ch)
    {
        case 1:{
            sets_theory<int>s1(n1,n2);
            s1.get();
            s1.sets_union();
            break;
        }
        case 2:{
            sets_theory<char>s2(n1,n2);
            s2.get();
            s2.sets_union();
            break;
        }
        case 3:{
            sets_theory<float>s3(n1,n2);
            s3.get();
            s3.sets_union();
            break;
        }
    }
    return 0;
}


