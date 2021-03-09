#include<bits/stdc++.h>
#define push_back pb
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);

long long int k,n,w;
cin>>k>>n>>w;
 long long int res=0;
for(int i=1;i<=w;i++)
{
	res+=(k*i);
}

if(n>=res)
cout<<0;
else
cout<<res-n;

return 0;
}

