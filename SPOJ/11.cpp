#include<iostream>
using namespace std;
int solve(int n)
{
    int count=0;
    for(int i=5;n/i>=1;i*=5)
    {
        count+=n/i;
    }
    return count;
}
int main()
{
    int t,a;
    cin>>t;
    while(t--)
    {cin>>a;
    cout<<solve(a)<<endl;

    }
    return 0;
}
