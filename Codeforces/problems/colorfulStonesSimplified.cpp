#include<bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
string st,str;
cin>>st>>str;
int res=0;
int j=0;
for(int i=0;i<str.length();i++)
{
	if(str[i]==st[j])
	{
		j++;
		res++;
	}
}
cout<<res+1;
return 0;
}

