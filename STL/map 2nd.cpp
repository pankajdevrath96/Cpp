#include "iostream"
#include "map"
#include "string"
using namespace std;
int main()
{
    int age,i,n,l;
    string s;
    map<int,string> p;
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>age;
        cin.ignore();
        getline(cin, s);
        p.insert(pair<int,string>(age,s));
        }
    map<int,string>::iterator x1;
    
    map<int,string>::iterator x2;
    x1=p.begin();
    l=x1->first;
    x2=x1;
    for(x1=p.begin();x1!=p.end();x1++)
        {
        if(x1->first>l)
            x2=x1;
        }
    cout<<x2->first<<" "<<x2->second;
    
}

