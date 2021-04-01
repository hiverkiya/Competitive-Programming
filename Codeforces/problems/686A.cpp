/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define long long long int
int main()
{ 
fastio();
long n,x;
cin>>n>>x;
long sm=x;
long res=0,dist=0;
char c;long d=0;

while(n--)
{
	
	cin>>c>>d;
	if(c=='+')
		sm+=d;
	else if(c=='-'&&sm-d>=0)
		sm-=d;
	else if(sm-d<0)
		dist++;
	
}
res=sm;
if(res<0)
res=0;
cout<<res<<" "<<dist;
return 0;
}