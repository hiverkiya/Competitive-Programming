/* Himanshu Verkiya */

/* INCLUDING HEADERS*/

#include<bits/stdc++.h>

/*DEFINING MACROS*/
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462

using namespace std;

int main()
{   fastio();

float n,t,k,d;
cin>>n>>t>>k>>d;
if(k>n)
cout<<"NO";
else if(2*(k/t)<((k/t+k/d)))
cout<<"YES";
else
cout<<"NO";
    return 0;
}



