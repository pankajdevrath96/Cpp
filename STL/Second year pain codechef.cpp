#include"iostream"
#include"map"
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
        {
        long long a,b,i;
        cin>>a>>b;
        map <long long,int> m;
        long long t;
        for( i=0;i<a;i++)
            {
            cin>>t;
            m[t]=1;
            }
        for( i=0;i<b;i++)
            {
            cin>>t;
            if(m[t]) cout<<"YES"<<endl;
            else {cout<<"NO"<<endl;
            m[t]=1;}
            }
        }
    }


/*#include <cstdio>
 #include <map>
 
 using namespace std;
 
 int main() {
 int T;
 scanf("%d", &T);
 
 while (T--) {
 int N, M;
 scanf("%d %d", &N, &M);
 
 map<long long, int> m;
 
 long long c;
 for (int i = 0; i < N; i++) {
 scanf("%lld", &c);
 m[c] = 1;
 }
 
 for (int i = 0; i < M; i++) {
 scanf("%lld", &c);
 if (m[c]) printf("YES\n");
 else {
 m[c] = 1;
 printf("NO\n");
 }
 }
 }
 
 return 0;
 } */
