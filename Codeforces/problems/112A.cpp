/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
#include<string>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
void lower(string &s)
{
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
			s[i]=char(s[i]+32);
	}
	
}
int main()
{ 
fastio();
string s,ss;
cin>>s>>ss;
lower(s);
lower(ss);
if(s<ss)
	cout<<(-1);
else if(s>ss)
	cout<<1;
else
	cout<<0;

return 0;
}