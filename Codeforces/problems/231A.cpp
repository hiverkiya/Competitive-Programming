/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"
int main()
{ 
fastio();
int a,b,c;
int n;int res=0;
cin>>n;
while(n--){
cin>>a>>b>>c;
if(a+b+c>=2)
	res++;

}
cout<<res;
return 0;
}