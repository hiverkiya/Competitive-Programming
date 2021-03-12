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
bool check(long int ii)
{if(360 %(180-ii)==0)
return true;
else
return false;
}
int main()
{   fastio();
int t;
cin>>t;
int a;
while(t--)
{
	cin>>a;
	if(check(a))
	{
		cout<<"YES";
	}
	else
	cout<<"NO";
	cout<<endl;
	
}
    return 0;
}



