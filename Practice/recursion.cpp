#include<iostream>
using namespace std;
int solve(int n)
{
    if(n==0)
        return 0;
    else {cout<<n<<endl;
            return solve(n-1);
    }

}
int main()
{

    int n;
    cin>>n;
    solve(n);
}
