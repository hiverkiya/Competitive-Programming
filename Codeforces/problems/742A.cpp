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
cin>>n;
if(n==0)
	cout<<1;
else switch(n%4)
{
	case 0:cout<<6;break;
	case 1:cout<<8;break;
	case 2:cout<<4;break;
	case 3:cout<<2;break;
}
return 0;
}