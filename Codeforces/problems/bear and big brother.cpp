/*
hiverkiya
2021-03-11
*/
#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	int count=0;
while(1)
{
	
	if(a>b)
	{
		break;
	}
	else
	count++;
	a*=3;
	b*=2;
}
cout<<count;
return 0;
}
