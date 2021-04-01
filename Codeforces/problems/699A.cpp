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
vector<long long> v;
string str;
cin>>str;
long long mini=INT_MAX;
long long int a[n];
long long int min=0;
for(long long int i=0;i<n;i++)
{
	cin>>a[i];
}
for(long long  int i=0;i<n;i++)
{
	
		if(str[i]=='R'&&str[i+1]=='L')
		{
			long long time=(a[i+1]-a[i])/2;
			if(time<mini)
				mini=time;
		}

	
}
if(mini==INT_MAX)
cout<<-1;
else
cout<<mini;



return 0;
}