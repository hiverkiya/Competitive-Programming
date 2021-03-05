#include<iostream>
#include<string>
using namespace std;
int main()
{

   long long int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
         long long int a[n];
         long long sum=0;
        for(long long int i=0;i<n;i++)
        {

            cin>>a[i];
            sum+=a[i];
        }
        if(sum%n==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
