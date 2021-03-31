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
int sum=0;
cin>>n>>k;
while(n--)
{
	int a,b;
	cin>>a>>b;
	sum+=(b-a+1);
}
cout<<(k-(sum%k))%k;
return 0;
}