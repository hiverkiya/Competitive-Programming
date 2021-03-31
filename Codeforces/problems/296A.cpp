#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <stack>
#include <vector>
#include <cstring>
#include <set>
#include <map>
#include <bitset>
#include <string>
#include <queue>
using namespace std;

#define sz(a) int((a).size())
#define all(c) c.begin(),c.end() //all elements of a container
#define rall(c) c.rbegin(),c.rend() 
#define tr(container,it) for(typeof(container.begin()) it = container.begin(); it != container.end(); it++) //traversing a container..works for any type of container
#define present(container, element) (container.find(element) != container.end())    //used for set...return 1 if el is ps 0 otherwise
#define cpresent(container, element) (find(all(container),element) != container.end())  //same as present...but is for vectors
#define INF		INT_MAX
#define FOR(i,a,b) 	for(int i= (int )a ; i < (int )b ; ++i)
#define rep(i,n) 	FOR(i,0,n)
#define si(n) scanf("%d",&n)
#define pi(n) printf("%d ",n)
#define pil(n) printf("%d\n",n)
#define piL(n) printf("%lld ",n)
#define piLL(n) printf("%lld\n",n)
#define sl(n) scanf("%lld",&n)
#define sd(n) scanf("%lf",&n)
#define ss(n) scanf("%s",n)
#define PB push_back
#define MP make_pair
#define scan(v,n)	vector<int> v;rep(i,n){ int j;si(j);v.PB(j);}
#define mod (int)(1e9 + 7)
#define pn printf("\n")
typedef long long int LL;
typedef vector <int> VI;
typedef pair < int ,int > PII;
typedef vector < PII > VPII;
template<class T>inline T gcd(T a,T b){return b?gcd(b,a%b):a;}
int a[10001];
int main()
{
      int n,i,t; 
      si(n);
      rep(i,n)
      {
        si(t);
	a[t]++;
      }
     int maxi=0;
     rep(i,2000)
     if(maxi<a[i])
	     maxi=a[i];
     if(maxi>(n+1)/2) printf("NO\n");
     else printf("YES\n");
     return 0;
}
