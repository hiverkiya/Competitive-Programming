/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
string a,b;
cin>>a>>b;
if(a==b)
	cout<<-1;
else
	cout<<(max(a.length(),b.length()));
return 0;
}