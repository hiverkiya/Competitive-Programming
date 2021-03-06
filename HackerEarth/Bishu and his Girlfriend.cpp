#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int> ar[1000];
int vis[1000];
int dist[1000];
void dfs(int v,int d)
{
        vis[v]=1;
        dist[v]=d;
        for(int child:ar[v])
        {
            if(vis[child]==0)
            {
                dfs(child,dist[v]+1);
            }
        }
}
int main()
{
int n,q,a,b;
cin>>n;
for(int i=1;i<=n-1;i++)
    cin>>a>>b,ar[a].pb(b),ar[b].pb(a);
    dfs(1,0);
    cin>>q;
    int ans=-1,min_d=INT_MAX;
    while(q--)
    {

        int gc;
        cin>>gc;
        if(dist[gc]<min_d)
            min_d=dist[gc],ans=gc;
        else
        if(dist[gc]==min_d&&gc<ans)
        ans=gc;

    }
    cout<<ans;
    return 0;
}
