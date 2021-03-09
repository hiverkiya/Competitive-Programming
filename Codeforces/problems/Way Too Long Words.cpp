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
int t;
cin>>t;
while(t--)
{
	string str;
	cin>>str;
	if(str.length()>10)
	{
		cout<<str[0]<<str.length()-2<<str[str.length()-1]<<endl;
		
	}
	else
	cout<<str<<endl;
}

return 0;
}

