/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pb push_back
#define endl "\n"
int min(int a,int b)
{
	return a<b?a:b;
}
int main()
{ 
fastio();
int n,aa;
cin>>n;
vector<int> a,b,c;
for(int i=0;i<n;i++)
{
cin>>aa;
if(aa==1)
a.pb(i+1);
else if(aa==2)b.pb(i+1);
else if(aa==3)c.pb(i+1);
}
sort(a.begin(),a.end(),greater<int>());
sort(b.begin(),b.end(),greater<int>());
sort(c.begin(),c.end(),greater<int>());
int m=min(a.size(),min(b.size(),c.size()));
if(m>0){
	cout<<m<<endl;
for(int i=m-1;i>=0;i--)
{
	cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
}}
else
cout<<0;
return 0;
}