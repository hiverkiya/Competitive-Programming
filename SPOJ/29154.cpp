#include<iostream>
#include<string>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
unsigned long long sum=0;
    string str="";
    cin>>str;
    for(int i=0;i<str.length();i++)
        sum+=str[i]-'0';
    cout<<sum<<endl;
}
}
