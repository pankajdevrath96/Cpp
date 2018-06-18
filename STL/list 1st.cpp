#include "iostream"
#include "algorithm"
#include "list"
using namespace std;
int main()
{
    list<int> l1;
    list<int> l2;
    int x;
    list<int> ::iterator it,it2;
    for(int i=0;i<4;i++)
        {
        cin>>x;
        l1.push_back(x);
        }
    for(int i=0;i<4;i++)
        {
        cin>>x;
        l2.push_back(x);
        }
    it=l2.begin();
    for(int i=0;i<4;i++)
        {
        
        l1.push_back(*it);
        it++;
        }
    l1.sort();
    l1.reverse();
    for(it=l1.begin();it!=l1.end();it++)
        cout<<*it<<" ";
    
    

    
    
}
