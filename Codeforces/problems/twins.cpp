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
int n;
cin>>n;
int fsum=0,lsum=0,res=0;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
lsum+=a[i];
}
sort(a,a+n,greater<int>());
for(int i=0;i<n;i++)
{	fsum+=a[i];
	if(fsum>lsum-fsum)
	{
		res=i;
		break;
	}
}
cout<<res;
    return 0;
}



