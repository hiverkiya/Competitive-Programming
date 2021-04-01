/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
int n,k;
cin>>n>>k;
string str="qwertyuiopasdfghjklzxcvbnm";
string s="";
for(int i=0;i<k;i++)
{
s+=str[i];
}
for(int i=0;i<n-k;i++)
{
	s+=s[i];
}
cout<<s;
return 0;
}