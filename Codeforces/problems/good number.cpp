/* Himanshu Verkiya */

/* INCLUDING HEADERS*/

#include<bits/stdc++.h>

/*DEFINING MACROS*/
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462

using namespace std;
bool check(long int n,int k)
{
	while(n>9)
	{
		if(n%10>k||n%10<0)
		{
			return false;
		}
		n/=10;
	}
	if(n>k||n%10<0)return false;
	return true;
}
int main()
{   fastio();
int n,k;
cin>>n>>k;
int long long a[n];
for(int i=0;i<n;i++)
cin>>a[i];
int c=0;
for(int i=0;i<n;i++)
{
	if(check(a[i],k))
	{
		c++;
	}
}
cout<<c;
    return 0;
}



