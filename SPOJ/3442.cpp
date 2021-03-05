#include<iostream>
using namespace std;
long long expo(long long a,long long b, int c=10)
{
    if(a==0)
        return 0;
    if(b==0)
        return 1;
    long long y;
    if(b%2==0)
    {

        y=expo(a,b/2,c);
        y=(y*y)%c;
    }else
    {

        y=a%c;
        y=(y*expo(a,b-1,c)%c)%c;
    }
    return (int)((y+c)%c);

}
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {long long a,b;
    cin>>a>>b;


    cout<<expo(a,b)<<endl;
    }


return 0;
}
