#include<bits/stdc++.h>
#define push_back pb
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
string str="";
cin>>str;
sort(str.begin(),str.end());
int res=1;
for(int i=0;i<str.length()-1;i++)
{	res++;
	if(str[i]==str[i+1])
	{
	res--;continue;
	
	}
}
if(res%2==0)
cout<<("CHAT WITH HER!")<<endl;
else cout<<("IGNORE HIM!");
return 0;
}

