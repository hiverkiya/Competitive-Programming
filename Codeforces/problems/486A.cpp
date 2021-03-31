/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
long long n;
cin>>n;
if(n%2==0)
	cout<<n/2;
else
	cout<<-(n+1)/2;
return 0;
}