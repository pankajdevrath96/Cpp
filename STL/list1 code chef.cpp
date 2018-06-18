#include"iostream"
#include"list"
#include"algorithm"
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
        {
        
        int m,x;
        list<int> l1;
        list<int> l2;
        list<int> ::iterator it1,it2;
        cin>>m;
        for(int i=0;i<m;i++)
            {
            cin>>x;
            l1.push_back(x);
            }
        for(int i=0;i<m;i++)
            {
            cin>>x;
            l2.push_back(x);
            }
        l1.sort();
        l2.sort();
        it2=l2.begin();
        for(it1=l1.begin();it1!=l1.end();it1++,it2++)
           cout<<*it1<<" "<<*it2<<" ";
        cout<<endl;
        
        }
    
}
