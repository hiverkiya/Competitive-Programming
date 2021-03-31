/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{
	if(s[i]>'4')
		s[i]='9'-s[i]+'0';

}
if(s.front()=='0')
s.front()='9';
cout<<s<<endl;
return 0;
}