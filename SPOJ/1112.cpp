#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--)
{
    int x,y;
    cin>>x>>y;

    if(x==0&&y==0)
        cout<<0;
    else if(x==y+2||x==y){
        if(x%2==0&&y%2==0)
            cout<<x+y;
        else
            cout<<x+y-1;
    }else
    cout<<"No Number";




    cout<<endl;

}
return 0;
}

