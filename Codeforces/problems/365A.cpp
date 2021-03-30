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
ll cnt=0,ans=0;
string s,s1;
int n,k;
cin>>n>>k;
set <char> st;
for(int i=0;i<n;i++)
{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if((s[i]-'0')%10<=k){
			st.insert(s[i]);
		}
	}
	if(st.size()==k+1)ans++;
	st.clear();

}
cout<<ans;

return 0;
}