#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    //code
    int t,i,j;
    string s;
    cin>>t;
    while(t>0)
    {
        cin>>s;
        i=s[0];
        if(i>64&&i<91)
        {transform(s.begin(), s.end(), s.begin(), ::toupper);
            cout<<(s);
        }
        else if(i>96&&i<127)
        {transform(s.begin(), s.end(), s.begin(), ::tolower);
            cout<<(s);
        }
        cout<<endl;
        t--;
    }
    return 0;
}
