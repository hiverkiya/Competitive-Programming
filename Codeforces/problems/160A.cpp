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
cin>>n;int sum=0;
int a[n];
for(int i=0;i<n;i++)
	{cin>>a[i];
		sum+=a[i];}
sort(a,a+n);
int c=0;
int nsm=0;
for(int i=n-1;i>=0;i--)
{
	nsm+=a[i];c++;
	if(nsm>sum/2)
	{
		break;
	}
}		
cout<<c;
return 0;
}