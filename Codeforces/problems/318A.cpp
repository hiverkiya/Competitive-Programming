/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define lli long long int
#define endl "\n"
int main()
{ 
fastio();
lli n,k;
cin>>n>>k;
if(k<=(n+1)/2)
	cout<<2*k-1;
else
	cout<<(k-(n+1)/2)*2;
return 0;
}