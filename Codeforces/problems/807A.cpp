/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++)
	{cin>>a[i]>>b[i];
		if(a[i]!=b[i])
		{
			cout<<"rated"; return 0;
		}
	}

for(int i=0;i<n-1;i++)
{
if(a[i]<a[i+1]||b[i]<b[i+1])
{
	cout<<"unrated";return 0;
}	
}
cout<<"maybe";
return 0;
}