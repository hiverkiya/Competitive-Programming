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
int s=0,d=0;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	
}
int j=n-1;
for(int i=0;i<n;i++)
{
	if(j>=i)
	break;
	if(a[i]>a[j])
	{
		s+=a[i];
		
	}else
	{
		d+=a[j];
		j--;
	}
}
cout<<s<<" "<<d;
return 0;
}

