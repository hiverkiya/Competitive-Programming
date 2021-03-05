#include<algorithm>
#include<iostream>
using namespace std;
long long solve(long long n)
{
    long long sum=0;
    if(n==0)
        return 0;
    else
        return sum+(solve(n/3),solve(n/2),solve(n/4));
    return sum;

}

int main()
{ long long n;

    while(cin>>n)
    {



                cout<<solve(n);

    }
    return 0;

}
