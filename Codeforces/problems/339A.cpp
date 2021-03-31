#include<bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
vector<int> v;
char a;
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{
	if(s[i]!='+')
	v.pb(s[i]-'0');
}
sort(v.begin(),v.end());
a='+';
pair<char,int> vv={'+',0};
vv.second=v.size()-1;
for(int i=0;i<v.size();i++)
{
	cout<<v[i];
	if(vv.second!=0)
	{
		cout<<vv.first;
	}
	vv.second--;
}
return 0;
}
 