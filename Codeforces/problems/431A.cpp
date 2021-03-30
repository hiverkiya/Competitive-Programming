#include<iostream>
#include<string>
using namespace std;
int main()
{
	int a[4];
	for(int i=0;i<4;i++)
	cin>>a[i];
	string str;
	cin>>str;
	long sum=0;
	for(int i=0;i<str.length();i++)
	{
		sum+=a[(str[i]-'0')-1];
	}
	cout<<sum;
}