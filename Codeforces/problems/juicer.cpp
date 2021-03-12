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

int main()
{   fastio();
	long a,n,b,d;
	cin>>n>>b>>d;
	int res=0,sum=0;
	while(n--)
	{
		cin>>a;
		if(a>b)
		continue;
		else
		sum+=a;
		if(sum>d)
		{
		sum=0;
		res++;
		}
			}
	cout<<res;
    return 0;
}



