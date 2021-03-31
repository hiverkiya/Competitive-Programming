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
{  // fastio();
	int res=1;
	string str;
	getline(cin,str);
	
	if(str.length()==2)
	{
	cout<<0;
	return 0;}
	
	
	vector<char>v;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
		v.pb(str[i]);
		
		}
	}
	
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++)
	{	
		if(v[i]==v[i+1])
		{
			continue;
		}
		else
		res++;
	}
	
	
	cout<<res;
	
    return 0;
}


 