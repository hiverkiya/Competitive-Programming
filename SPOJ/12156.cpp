#include<iostream>
using namespace std;
int main()
{

    short t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.length()/2;i+=2)
            cout<<str[i];
        cout<<endl;
    }
}
