#include<iostream>
#include<cmath>
using namespace std;
void solve(float a,float b,float c){
if(2*b==a+c){
    cout<<"AP"<<" "<<(int)a+3*(c-b);
}
else { if(a!=0)cout<<"GP"<<" "<<(int)a*pow((b/a),3);
else if(b!=0) cout<<"GP"<<" "<<(int)a*pow((c/b),3);
    }
}
int main()
{

float a,b,c;
cin>>a>>b>>c;
while(1)
{   if(a==0&&b==0&&c==0)
break;
    solve(a,b,c);
    cout<<endl;
    cin>>a>>b>>c;
}
return 0;
}
