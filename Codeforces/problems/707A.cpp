/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
int n,m;
cin>>n>>m;
char a;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
	{
		cin>>a;
		if(a=='C'||a=='M'||a=='Y')
		{
			cout<<"#Color";return 0;
		}
	}
}
cout<<"#Black&White";
return 0;
}