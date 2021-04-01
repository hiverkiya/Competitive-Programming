/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
int x,n;
cin>>n>>x;
if(x==10&&n<2)
	cout<<-1;else
if(x==10&&n>=2)
{
	for(int i=0;i<n-1;i++)
	{
		cout<<1;
	}
	cout<<0;
}
else
for(int i=0;i<n;i++)
{
cout<<x;
}
return 0;
}