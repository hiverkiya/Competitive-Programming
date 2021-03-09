#include<iostream>
using namespace std;
int main()
{
	int x=0,t;
	cin>>t;
	string str;
	while(t--)
	{cin>>str;
		if(str=="++X"||str=="X++")
		x+=1;
		if(str=="--X"||str=="X--")
		x-=1;
	}
	cout<<x;
	return 0;
	
}
