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
string a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
}
sort(a,a+n);
unordered_map<string,int>hash;
for(int i=0;i<n;i++)
hash[a[i]]++;
int max=0;string res="";
for(auto i:hash)
{
	if(max<i.second){
		res=i.first;
		max=i.second;
	}
}
cout<<res;
return 0;
}