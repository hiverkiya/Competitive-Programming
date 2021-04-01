/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
bool check(int n)
{
	for(int i=2;i<=10;i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{ 
fastio();
int n,m;
cin>>n>>m;
vector<int>v;
int i=1;
v.push_back(2);
v.push_back(3);
v.push_back(5);
v.push_back(7);
for(int i=10;i<=50;i++)
{
	if(check(i))
		v.push_back(i);
}
int in;
for(int i=0;i<v.size();i++)
{
	if(v[i]==n)
	{
		if(v[i+1]==m)
		{
			cout<<"YES";
			return 0;
		}
	}
}	
	cout<<"NO";
return 0;
}