#include<bits/stdc++.h>
#define push_back pb
using namespace std;
int main()
{cin.tie(NULL);
ios_base::sync_with_stdio(false);
	string s,ss;
	cin>>s>>ss;
	int res=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		s[i]=s[i]-32;
		if(ss[i]>='a'&&ss[i]<='z')
		ss[i]=ss[i]-32;
		
	}
	if(s<ss)
	cout<<-1;
	else if(s>ss)
	cout<<1;
	else if(s==ss)
	cout<<0;
	cout<<endl;
	

return 0;
}

