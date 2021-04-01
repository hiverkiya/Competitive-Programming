/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
long int x,y,z,n;
cin>>n;
long long xsm=0,ysm=0,zsm=0;
while(n--)
{
	cin>>x>>y>>z;
	xsm+=x;
	ysm+=y;
	zsm+=z;
}
if(xsm==0&&ysm==0&&zsm==0)
cout<<"YES";
else
cout<<"NO";

return 0;
}