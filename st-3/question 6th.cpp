#include <iostream>
#include <vector>
using namespace std;

void displaySum(vector<int> vec1)
{
    vector<int>::iterator i,j;
    i=vec1.begin();
    j=vec1.end();
    int x=sizeof(vec1);
    if(x==1)
        cout<<"No Adjacent Value";
    else
        for(;i<j-1;)
            cout<<(*i)+(*++i)<<" ";
    
    
    
}
    int main()
    {
    vector<int> vec;
    int i, n;
    cin>>n;
    for(int j=0;j<n;j++)
        {
        cin>>i;
        vec.push_back(i);
        }
    displaySum(vec);
    return 0;
    }
