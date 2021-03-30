/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
int n;
string str;
cin>>n>>str;
int a=0;
for(int i=0;i<n;i++)
{
if(str[i]=='A')
	a++;
else if(str[i]=='D')
	a--;
}
if(a>0)
	cout<<"Anton";
else if(a<0)
	cout<<"Danik";
else
	cout<<"Friendship";

return 0;
}