#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"To graycode"<<endl;
    cout<<n^(n>>1)<<endl;
    cout<<"To decimal again"<<endl;
    int inv=0;
    for(;n;n=n>>1)
    inv^=n;
    cout<<inv;
}