#include<bits/stdc++.h>
#define pb push_back
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
int a[4];
for(int i=0;i<4;i++)
{
	cin>>a[i];
}
sort(a,a+4);
int c=0;
for(int i=0;i<3;i++)
{
	if(a[i]==a[i+1])
	{
		c++;
		
	}
}
cout<<c;
return 0;
}

