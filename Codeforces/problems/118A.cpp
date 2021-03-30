/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
bool check(char s)
{
char a[6]={'a','e','i','o','u','y'};
for(int i=0;i<6;i++)
{
	if(s==a[i])
		return false;
}
return true;
}
int main()
{ 
fastio();
string str;
cin>>str;
for(int i=0;i<str.length();i++)
	if(str[i]>='A'&&str[i]<='Z')
		str[i]=char(str[i]+32);
for(int i=0;i<str.length();i++)
{
	if(check(str[i]))
	{
		cout<<"."<<str[i];
	}
}
return 0;
}