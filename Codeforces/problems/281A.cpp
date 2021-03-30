#include<bits/stdc++.h>
#define push_back pb
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
string str;
cin>>str;
if(str[0]>='a'&&str[0]<='z')
{
	char a=str[0]-32;
	str[0]=a;
}
cout<<str;
return 0;
}
 