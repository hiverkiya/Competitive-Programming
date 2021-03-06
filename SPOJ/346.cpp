#include<iostream>
using namespace std;
int sum=0;
int solve(int n)
{   if(n%2!=0&&n%3!=0&&n%4!=0)
     return 0;
    else
        sum+=solve(n/2)+solve(n/3)+solve(n/4);


}
int main()
{
solve(12);
cout<<sum;
return 0;

}
