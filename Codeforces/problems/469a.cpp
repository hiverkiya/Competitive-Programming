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
bool find(vi v,int k)
{
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==k)
        return true;
    }
    return false;
}
int main()
{ 
fastio();
int n,t,aa,bb;
cin>>n>>t;
vi a,v;
for(int i=0;i<n;i++)
v.pb(i+1);
while(t--)
{
    cin>>aa>>bb,a.pb(aa),a.pb(bb);
}

bool flag=true;
for(int i=0;i<v.size();i++)
{
    
    if(a,v[i]==false)
    {
        flag=false;
        break;
    }
}
if(flag==true)
cout<<"I become the guy.";
else cout<<"Oh, my keyboard!";
return 0;
}