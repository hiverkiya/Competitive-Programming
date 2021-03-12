/* Himanshu Verkiya */

/* INCLUDING HEADERS*/

#include<bits/stdc++.h>

/*DEFINING MACROS*/
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462

using namespace std;

int main()
{   fastio();
string str;
int n;
cin>>n;
cin>>str;
int s=0,t=0;

for(int i=0;i<n;i++)
{
	if(str[i]=='R')
	{
		s=i;
		break;
	}
	if(str[i]=='L')
	{
		s=i+1;
		break;
	}
}
for(int i=s;i<n;i++)
{
	if(str[i]=='R')
	{
		t++;
	}
	if(str[i]=='L')
	t--;
}
cout<<s+1<<" "<<t+1;
    return 0;
}



