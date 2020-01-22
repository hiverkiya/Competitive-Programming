#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t,a,b,c,sum=0;
	cin>>t;
	while(t--)
	{
		cin>>a>>b>>c;
		if(a==0||a==1||b==0||b==1||c==0||c==1)
		{
			if((a+b+c)>=2)
			sum++;
		}
	
	}
	cout<<sum;
return 0;
}
