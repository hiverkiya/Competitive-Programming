#include <bits/stdc++.h>
#define endl "\n"
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
using namespace std;
int main()
{	fastio();
	int t;
	cin>>t;
	int a[t];
	int size=t;
	for(int i=0;i<size;i++)
	cin>>a[i];
	sort(a,a+t);
	int max=1,res=a[0],cur=1;
	for(int i=1;i<t;i++)
	{
		if(a[i]==a[i-1])
		cur++;
		else
		{if(cur>max){
			max=cur;
			res=a[i-1];}
			
			cur=1;}
	
	}
	if(cur>max)
	{
		max=cur;
		res=a[t-1];
		}
	cout<<res;
	
		
	return 0;
}
