/* Default - Himanshu Verkiya */
// INCLUDING MACROS
#include<algorithm>
#include<string>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<map>
#include<chrono>
#include<iostream>
using namespace std;
// DEFINING HEADERS
#define pb push_back
#define F(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define MAX INT_MAX
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define MOD 1000000007
#define ppb pop_back;
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

int main()
{ 
fastio();
vi v;
int a=0,b=0,c=0,n;
cin>>n;
while(n--)
{
int aa;
cin>>aa,v.pb(aa);
if(aa==1)a++;
else if(aa==2)b++;
else c++;
}
if(a==0||b==0||c==0)
cout<<0;
else
{int m=min(min(a,b),c);
vi aa,bb,cc;
for(int i=0;i<v.size();i++)
{if(i==m)
break;
if(v[i]==1)
aa.pb(i);
else if(v[i]==2)
bb.pb(i);
else cc.pb(i);
}
cout<<m<<endl;
for(int i=0;i<m;i++)
{
    cout<<aa[i]<<" "<<bb[i]<<" "<<cc[i]<<endl;
}
}
return 0;
}