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
int a[n];

for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
int res=0;
for(int i=0;i<n;i++)
{
	if(a[i]>a[0]&&a[i]<a[n-1])
		res++;
}
cout<<res;
return 0;
}