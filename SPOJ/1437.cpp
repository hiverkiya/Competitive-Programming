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
int vis[10001];
int maxD,maxNode;
void dfs(int node,int d)
{
	vis[node]=1;
	if(d>maxD)maxD=d,maxNode=node;
	for(int child: ar[node])
	if(vis[child]==0)
	dfs(child,d+1);
}
int main()
{
int n,a,b;
cin>>n;
REP(i,n-1) cin>>a>>b,ar[b].pb(a),ar[a].pb(b);
dfs(1,0); //we pass first node and second parameter as distance from node
 	REP(i,n) vis[i]=0;
	 maxD=-1;	  //There will be atleast one node so we pass it in dfs
	dfs(maxNode,0); //Now we pass maxNode as new root and to find diameter through it
	cout<<maxD;
return 0;
}

