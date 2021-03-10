#include<bits/stdc++.h>
#define push_back pb
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
int n;
cin>>n;
int a=0,d=0;
string s;
cin>>s;
for(int i=0;i<n;i++)
{
	if(s[i]=='A')
	a++;
	else
	d++;
}
if(a>d)
cout<<"Anton";
else if(a<d)
cout<<"Danik";
else if(a==d)
cout<<"Friendship";
return 0;
}

