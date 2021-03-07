#include<iostream>
#include<vector>
#define vi vector<int>
#define lli long long int
#define ff first
#define ss second
#define endl '\n'
#define pb push_back
#define REP(i,n) for(int i=1;i<=n;i++)
#define mod 1000000007
using namespace std;
vi ar[1000001];
int vis[1000001];
int cc[1000001];
int curr_cc;
void dfs(int node)
{
	vis[node]=1;
	cc[node]=curr_cc;
	for(int child:ar[node])
	if(vis[child]==0)
	dfs(child);
}
int main()
{
int t,n,k,a,b;
string op;
cin>>t;
while(t--)
{
	cin>>n>>k;
	curr_cc=0;
	vector<pair<int,int>> edgeList;
	for(int i=1;i<=n;i++)
	ar[i].clear(),vis[i]=0;
	for(int i=1;i<=k;i++)
	{
		cin>>a>>op>>b;
		if(op=="=") 
		ar[a].pb(b),ar[b].pb(a);
		else
		edgeList.pb({a,b});// we can also use make pair function
	}
		for(int i=1;i<=n;i++)
		if(vis[i]==0)
		{
			curr_cc++;
			dfs(i);
		}
		bool flag=true;
		for (int i=0;i<edgeList.size();i++)
		{
			a=edgeList[i].first;
			b=edgeList[i].second;
			if(cc[a]==cc[b]){
				flag=false;
				break;
			}		
		}
		if(flag)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
		

}


