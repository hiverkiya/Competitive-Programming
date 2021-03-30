/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
string str;
cin>>str;
string n="";
bool flag=false;
for(int i=0;i<str.length();i++)
	{
		if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B')
	{i+=2;
		if(flag)
			cout<<" ";
		continue;
			}
	else
	{	flag=true;
		cout<<str[i];
		
	}
	
}
return 0;
}