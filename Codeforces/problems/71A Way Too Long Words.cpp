#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main() {
  cin.sync_with_stdio(false);
 int t;
 cin>>t;
 string str;
 while(t--)
 {
cin>>str;
if(str.length()>10)
{
cout<<str[0]<<(str.length()-2)<<str[str.length()-1]<<endl;
}
else
cout<<str<<endl;
 }
return 0;
}
