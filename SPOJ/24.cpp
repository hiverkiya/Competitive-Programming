#include<iostream>
#define MAX 500
using namespace std;
int mul(int x,int res[],int res_size);
void solve(int n);
void factorial(int n)
{

    int res[MAX];
    res[0]=1;
    int res_size=1;
    for(int x=2;x<=n;x++)
        res_size=mul(x,res,res_size);
    for(int i=res_size-1;i>=0;i--)
        cout<<res[i];
}

int mul(int x,int res[],int res_size)
{

    int c=0;
    for(int i=0;i<res_size;i++)
    {

        int prod=res[i]*x+c;
        res[i]=prod%10;
        c=prod/10;
    }
    while(c)
    {

        res[res_size]=c%10;
        c=c/10;
        res_size++;
    }
    return res_size;
}
void solve(int n)
{
factorial(n);

}
int main()
{

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        solve(n);
        cout<<endl;
    }
}
