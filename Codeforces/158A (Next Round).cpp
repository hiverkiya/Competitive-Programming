#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n,k,a;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	{	cin>>ar[i];
	}
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(ar[i]>0&&ar[i]>=ar[k-1])
		{c++;}
	}
	cout<<c;
}
