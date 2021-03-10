/*
hiverkiya
2021-03-11
*/
#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
	string str;
	cin>>str;
	int up=0,low=0;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{low++;
		}
		else{
		up++;
		}	
	}
	if(up>low)
	{
		for(int i=0;i<str.length();i++)
		{
			if(str[i]>='a'&&str[i]<='z')
			{
				str[i]=str[i]-32;
			}
		}
	}else {
		for(int i=0;i<str.length();i++)
		{
			if(str[i]>='A'&&str[i]<='Z')
			{
				str[i]=str[i]+32;
			}
		}
	}
	cout<<str;
return 0;
}
