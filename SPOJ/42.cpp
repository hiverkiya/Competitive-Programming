#include<cmath>
#include<iostream>
using namespace std;
int reverse(int num)
{
int temp=num;
int l=0;
while(num>9)
{
    num/=10;
    l++;
}
int rev=0;
while(temp>9)
{
    rev+=(temp%10)*pow(10,l);

    temp/=10;
    l--;
}
return(rev+temp);
}
int main()
{
        cin.tie(NULL);
        ios_base::sync_with_stdio(false);
        int t;
        cin>>t;
        while(t--)
        {
                int a,b;
                cin>>a>>b;
                cout<<reverse(reverse(a)+reverse(b))<<endl;

        }
        return 0;

}
