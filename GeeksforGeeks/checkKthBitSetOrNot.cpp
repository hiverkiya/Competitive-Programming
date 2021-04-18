#include <bits/stdc++.h>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define pb push_back
#define lli long long int
#define ff first
#define ss second
#define vi vector<int>
using namespace std;
int main()
{
fastio();
int n,k;
cin>>n>>k;
if(n&(1<<(k-1)))
cout<<"Yes";
else
cout<<"No";

return 0;
}
