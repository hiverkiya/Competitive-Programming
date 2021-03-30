/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define vi vector<int>
int main()
{ 
fastio();
int n;
cin>>n;
int a[n];
for(int i=1;i<=n;i++)
{
int aa;cin>>aa;
a[aa]=i;
}
for(int i=1;i<=n;i++)
cout<<a[i]<<" ";
return 0;
}