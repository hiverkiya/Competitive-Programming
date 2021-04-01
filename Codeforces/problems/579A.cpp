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
int cnt=0;
while(n)
{
	n=n&(n-1);
	cnt++;
}
cout<<cnt;
return 0;
}
//536870911 29