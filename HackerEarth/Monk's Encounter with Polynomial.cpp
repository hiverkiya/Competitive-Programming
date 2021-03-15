/* Default - Himanshu Verkiya */
// INCLUDING MACROS
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<unordered_set>
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<map>
#include<chrono>
#include<iostream>
using namespace std;
// DEFINING HEADERS
#define pb push_back
#define F(i,n) for(int i=0;i<n;i++)
#define vi vector<int>
#define MAX INT_MAX
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
#define MOD 1000000007
#define ppb pop_back;
#define mp make_pair
#define lli long long int
#define ff first
#define ss second
#define PI 3.141592653589793238462
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
lli A,B,C,K;
lli Fx(lli x)
{
    return A*x*x+B*x+C;
}
int BSearch()
{
    if(C>=K)
    return 0;
    int L=1;
    int H=ceil(sqrt(K));
    while(L<=H)
    {
        int mid= (L+H)/2;
        lli x=Fx(mid);
        lli y= Fx(mid -1);
        if(x>=K && y<K)
        return mid;
        if(x<K)L=mid+1;
        else
        H=mid-1;
    }
}
int main()
{ 

fastio();
lli t;
cin>>t;
while(t--)
{
    cin>>A>>B>>C>>K;
    cout<<BSearch()<<endl;
}
return 0;
}