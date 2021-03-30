#include<bits/stdc++.h>
#define pb push_back 
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
int n;
cin>>n;
int res=0;
vector <pair<int,int>>v(n);
for(int i=0;i<n;i++)
{	int a,b;cin>>a>>b;
	v[i].first=(a),v[i].second=(b);
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
	{
		if(v[i].first==v[j].second&&i!=j){
			res++;
		}
	}
}
cout<<res;
return 0;
}
 