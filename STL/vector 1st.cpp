#include "iostream"
#include "vector"
using namespace std;
int main()
{
    vector<int> vect;
    for(int i=0;i<10;i++)
        vect.push_back(i);
    cout<<"Elements in vector are: ";
    cout<<endl;
    for(int i=0;i<vect.size();i++)
        cout<<vect[i]<<" ";
    cout<<endl;
    vector<int>::iterator itr=vect.begin();
    vect.insert(itr+4,1,25);
    cout<<"Elements in vector after insertion are: ";
    cout<<endl;
    for(int i=0;i<vect.size();i++)
        cout<<vect[i]<<" ";
    cout<<endl;
    vect.erase(vect.begin()+8);
    
    vect.insert(vect.begin(), 21);
    cout<<"Elements in vector after deletion are: ";
    cout<<endl;
    for(int i=0;i<vect.size();i++)
        cout<<vect[i]<<" ";
    
    
    
    
    
}
