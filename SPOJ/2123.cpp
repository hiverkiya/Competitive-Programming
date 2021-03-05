#include<iostream>
using namespace std;
int main()
{   long long int n;
cin>>n;
    while(n>0)
    {
       long long int a[n];
       long long int sum=0,ct=0;
       for(int i=0;i<n;i++)
       {

           cin>>a[i];
           sum+=a[i];
       }
       if(sum%n==0)
       {long long mean=sum/n;
       for(int i=0;i<n;i++)
       {

           if(mean>a[i])
           {

               ct+=mean-a[i];
           }
       }
       cout<<ct<<endl;
       }
       else
        cout<<-1<<endl;
        cin>>n;
    }
    return 0;
}
