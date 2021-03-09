#include<bits/stdc++.h>
#define vi vector<int>
#define lli long long int
#define ff first
#define ss second
#define endl '\n'
#define pb push_back
#define mod 1000000007
using namespace std;
int main()
{
int n;
cin>>n;
int a,b,c;
int res=0;
while(n--)
{
	cin>>a>>b>>c;
	if(a+b+c>=2)
	res++;
}
cout<<res<<endl;

return 0;
}

