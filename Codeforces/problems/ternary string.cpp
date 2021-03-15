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

string st;

bool isValid(int k)
{
	int ar[4] = {0};
	for(int i=0;i<k-1;i++)
	{
		int idx = st[i] - '0';
		ar[idx]++;
	}
	
	for(int i=k-1;i<st.size();i++)
	{
		int idx = st[i] - '0';
		ar[idx]++;
		
		if((ar[1] > 0) && (ar[2] > 0) && (ar[3] > 0))
		return true;
		
		idx = st[i-k+1] - '0';
		ar[idx]--;
	}
	
	return false;
}

int getAns()
{
	int res = MAX;
	int L = 3;
	int R = st.size();
	
	while(L <= R)
	{
		int mid = (L + R) / 2;
		
		if(isValid(mid))
		res = min(res , mid) , R = mid-1;
		else
		L = mid + 1;
	}
	
	if(res == MAX) return 0;
	else		   return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>st;
		cout<<getAns()<<endl;
	}
}