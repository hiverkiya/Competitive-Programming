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
cin>>n;
string str;
cin>>str;
int z=0,o=0;
for(int i=0;i<n;i++)
{
	if(str[i]=='0')
		z++;
	else o++;
}
cout<<n-(2*(o<z?o:z));
return 0;
}