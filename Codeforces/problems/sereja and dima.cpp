#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	long s=0,d=0;
	int r=n-1;
	for(int i=0;i<n;i++)
	{
	cin>>a[i];	
	}
	int l=0;
	int t=0;
	while(l<r+1)
	{	t++;
		
		if(a[l]>a[r])
		{
			if(t%2)
			s+=a[l];
			else
			d+=a[l];
			l++;
			
		}else
		{
			if(t%2)
			s+=a[r];
			else
			d+=a[r];
			r--;
		}
		
	}
	cout<<s<<" "<<d;
}
