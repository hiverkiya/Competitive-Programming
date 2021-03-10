#include<bits/stdc++.h>
#define push_back pb
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
int n ,k;
int res=0;
cin>>n;
cin>>k;
int a;
while(n--)
{
	cin>>a;
	a>k?(res+=2):(res++);
	
}
cout<<res;
return 0;
}

