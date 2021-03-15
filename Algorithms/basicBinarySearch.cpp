#include<iostream>
using namespace std;
int bSearch(int l, int r,int *a,int key)
{
    while(l<=r)
    {int mid=(l+r)/2;
    if(a[mid]==key)
    return mid;
    if(a[mid]<key)
    l=mid+1;
    else
    r=mid-1;

    }
    return -1;
}
int main(){
int a[4]={1,2,3,9};
cout<<bSearch(0,3,a,9);
}
