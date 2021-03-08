#include<bits/stdc++.h>
#define vi vector<int>
#define lli long long int
#define ff first
#define REP(i,n) for(int i=1;i<=n;i++)
#define ss second
#define endl '\n'
#define pb push_back
#define mod 1000000007
using namespace std;
vi ar[10001];
int vis[10001],in[10001],low[10001];
set<int> AP;
int timer;
void dfs(int node,int par)
{
	vis[node]=1;
	in[node]=low[node]=timer++;
	int child_cnt=0;
	for(int child:ar[node])
	{
		if(child==par)continue;
		if(vis[child]==1)
		{
			low[node]=min(low[node],in[child]);
		}
		else
		{
			dfs(child,node);
			child_cnt++;
			low[node]=min(low[node],low[child]);
			if(in[node]<=low[child]&&par!=-1)
			AP.insert(node);
		}
	}
	if(par==-1&&child_cnt>1)
	AP.insert(node);
}
int main()
{int n,m,a,b;

while(1){cin>>n>>m;
if(n==0&&m==0)
break;
for(int i=1;i<=n;i++)
ar[i].clear(),vis[i]=0;
AP.clear();
timer=1;
REP(i,m)cin>>a>>b,ar[a].pb(b),ar[b].pb(a);
REP(i,n)
if(vis[i]==0)
dfs(i,-1);
cout<<AP.size()<<endl;
}
return 0;
}

