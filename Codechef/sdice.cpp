#include <bits/stdc++.h>
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long int
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,ans;
		cin>>n;
		vector<ll>base={0,20,36,51};
		ll top=n%4; 
		ll h=n/4;
		ll close=(h-1)*44+60;
		if(h==0)
			ans=base[n];
		else
			ans=close+base[top]-4*top;
		cout<<ans<<endl;
	}
	return 0;
}