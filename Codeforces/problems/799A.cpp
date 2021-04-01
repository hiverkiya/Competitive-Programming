/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
long n,t,k,d;
cin>>n>>t>>k>>d;
 int currt = 0;
 
    while (currt <= d) {
        n -= k;
        currt += t;
    }
 
    if (n > 0) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

return 0;
}