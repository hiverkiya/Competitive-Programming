/* Default - Himanshu Verkiya */
// INCLUDING MACROS
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<string>
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
#define lli long long int
#define ff first
#define ss second
#define PI 3.141592653589793238462
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

int main()
{ 
fastio();
int n;
cin>>n;
string str;
vector <string> st;
for(int i=0;i<n;i++)
{cin>>str,st.pb(str);}
sort(st.begin(),st.end());

return 0;
}