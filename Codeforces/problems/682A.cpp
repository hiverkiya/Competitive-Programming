/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define ll long long
#define endl "\n"
int main()
{ 
fastio();
int a[5050],b[50505];
long long aa,bb;
cin>>aa>>bb;
for(long long int i=1;i<=aa;i++)
a[i%5]++;
for(long long int i=1;i<=bb;i++)
b[i%5]++;
long long ans=0;
for(long long int i=0;i<5;i++)
	for(long long int j=0;j<5;j++)
		if((i+j)%5==0)
			ans+=a[i]*1ll*b[j];
cout<<ans;
return 0;
}