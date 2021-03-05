#include<iostream>
#include<algorithm>
using namespace std;
int main()
{cin.tie(NULL);
ios_base::sync_with_stdio(false);
    int t,n;
    long long sum=0;

    cin>>t;
    while(t--){
    cin>>n;
    sum=0;
    long long a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        long long int aa;
    for(int i=0;i<n;i++)
    {cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++)
    {

        a[i]=a[i]*b[i];
        sum+=a[i];
    }

        cout<<sum<<endl;
    }
    return 0;
}
