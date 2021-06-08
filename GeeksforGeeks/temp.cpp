#include<cstring>
#include<iostream>
using namespace std;
int main()
{

string s,ss;
cin>>s>>ss;
int res=0;
for(int i=1;i<s.length();i++)
{
	s[0]^=s[i];
	ss[0]^=ss[i];
}

if(int(s[0]^ss[0])==0)
cout<<"Yes";
else
cout<<"no";
return 0;
}