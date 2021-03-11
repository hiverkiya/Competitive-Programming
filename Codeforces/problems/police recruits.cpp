#include<bits/stdc++.h>
#define push_back pb
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
int a,n,neg=0;
cin>>n;
long long sum=0;
bool flag=true;int ar[n];
for(int i=0;i<n;i++)
{
	cin>>a;
	if(a>0&&a<=10)
	sum+=a;
	if(a<0)
	{
		if(sum>0)
		sum--;
		else
		neg++;
	}
	
	
}

cout<<neg;


return 0;
}

