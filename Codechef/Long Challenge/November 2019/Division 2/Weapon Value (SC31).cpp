#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int count(int);
long int func(string str,int i=0)
{
    int n=str.length();
    if(i==n-1)
    return str[i]-'0';
    return((str[i]-'0')<<(n-i-1))+func(str,i+1);
}
unsigned int count(unsigned int n)
{
    unsigned int count=0;
    while (n) { 
        count += n & 1; 
        n >>= 1; 
    } 
    return count; 
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long int a[n];
	    string str;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>str;
	        a[i]=func(str);
	    }
	    for(int i=1;i<n;i++)
	    {
	        a[0]^=a[i];
	    }
	    unsigned int num=a[0];
	    cout<<count(num)<<endl;
	    
	}
	return 0;
}
