#include<iostream>
using namespace std;
int sum=0;
int func(int n){

if(n==0)
return 0;
func(n-1);
sum+=n;
}
int main()
{
cout<<(func(5));

}