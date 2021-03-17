#include<iostream>
#include<string>
using namespace std;
bool checks(string str,int start,int end)
{
    if(start>=end)
    return true;
    return (str[start]==str[end])&& checks(str,start+1,end-1);
}
int main()
{
    string str;
    cin>>str;
if(checks( str,0,str.length()-1))
cout<<"Yes";
else
cout<<"No";
}