/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
int n,k;
cin>>n>>k;
n=2*n+1;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];

}
for(int i=0;i<n;i++)
{
	if(i%2==1&&k&&a[i - 1] < a[i]-1 && a[i]-1 > a[i + 1]){a[i]=a[i]-1;
	k--;}
	}
for(int i=0;i<n;i++)
cout<<a[i]<<" ";
return 0;
}