#include<bits/stdc++.h>
#define vi vector<int>
#define lli long long int
#define ff first
#define ss second
#define endl '\n'
#define pb push_back
#define mod 1000000007
using namespace std;
vi ar[100001];
int in [100001],low[100001],vis[100001],timer;
bool hasBridge;
vector<pair<int,int>> edgeList;
void dfs(int node,int par)
{
	vis[node]=1;
	in[node]=low[node]=timer++;
	for(int child:ar[node])
	{
		if(child ==par)
		continue;
		if(vis[child])
		{
		low[node]=min(low[node],in[child]);
		//if we are descendant then we orient the graph
		//using in time concept
		if(in[node]>in[child])
		{edgeList.pb({node,child});}
			
		
		}
		else
		{
			dfs(child,node);
			if(low[child]>in[node])
			//node - child is a bridge
			{
				hasBridge=true;
				return;
			}
			//if a forward edge then
			edgeList.pb({node,child});
			low[node]-min(low[node],low[child]);
		}
	}
}
int main()
{
int n,m,a,b;
cin>>n>>m;
while(m--)
cin>>a>>b,ar[a].pb(b),ar[b].pb(a);
dfs(1,-1);
if(hasBridge)
cout<<0;
else
{
	for(pair<int,int> e:edgeList)
	{
		cout<<e.first<<" "<<e.second<<endl;
	}
}
return 0;
}

