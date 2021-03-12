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
cin>>str;
stack <char> s;
for(int i=0;i<str.length();i++)
{
	if(str[i]!='A'&&str[i]!='a'&&str[i]!='E'&&str[i]!='e'&&str[i]!='O'&&str[i]!='o'&&str[i]!='I'&&str[i]!='i'&&str[i]!='U'&&str[i]!='u')
{s.push('.');
	if(str[i]>='A'&&str[i]<='Z')
	{	
		s.push(tolower(str[i]));
	}else
	{
		s.push(str[i]);
	}
}
}// .x.n.h.c.g.y.t.n.q.c.m.y
stack <char> ss;
while(!s.empty())
{
	ss.push(s.top());
	s.pop();
}
while(!ss.empty())
{
	cout<<ss.top();
	ss.pop();
}
    return 0;
}



