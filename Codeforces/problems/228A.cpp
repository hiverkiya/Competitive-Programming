/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
long int a[4];
cin>>a[0]>>a[1]>>a[2]>>a[3];
long int res=0;
sort(a,a+4);
for(long int i=0;i<3;i++)
{
	if(a[i]==a[i+1])
		res++;
}
cout<<res;
return 0;
}