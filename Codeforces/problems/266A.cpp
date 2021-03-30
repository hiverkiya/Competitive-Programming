#include<bits/stdc++.h>
#define push_back pb
#define endl '\n'
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
int n;
cin>>n;
n=0;
string str="";
cin>>str;
for(int i=0;i<str.length()-1;i++)
{
	if(str[i]==str[i+1])
	{
		n++;
		
	}
}
cout<<n;
return 0;
}
 