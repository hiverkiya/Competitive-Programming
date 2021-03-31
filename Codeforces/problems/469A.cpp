/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();

set <int> s;
s.clear();
int n;
cin>>n;
for(int i=1;i<=n;i++)s.insert(i);
int i=2;
set<int>ss;
ss.clear();
while(i--)
{
int nn;
cin>>nn;
while(nn--)
{
	int aa;
	cin>>aa;
	ss.insert(aa);
}
}
if(ss.size()==n)
cout<<"I become the guy.";
else
cout<<"Oh, my keyboard!";



return 0;
}