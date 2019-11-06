#include<bits/stdc++.h>
using namespace std;
int main()
{
int l=0,n;
int a[128];
a[l]=0;
for(int i=0;i<128;i++)
{int flag=0;
  int x=a[l];
  int cnt=0;
  for(int j=l, k=l;j>=0;j--)
  {
    if(a[j]==x)
    {
      cnt++;
    }
    if(cnt==2)
    {
      a[l+1]=k-j;
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    a[l+1]=0;
  }
  
  l++;
}
int t;
cin>>t;
while(t--)
{
cin>>n;
int t=n;
n=a[n-1];
int c=0;
for(int i=0;i<t;i++)
{
if(n==a[i])
c++;
}
cout<<c<<endl;
}
}