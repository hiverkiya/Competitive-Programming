#include<bits/stdc++.h>
#define push_back pb
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
long n;
cin>>n;
string str,st;
cin>>str;
n--;
int c=1;
while(n--)
{	
	cin>>st;
	if(str==st)
	{	str=st;
		continue;
	}
	else
	{
		c++;
		str=st;
	}
	
}
cout<<c;
return 0;
}

