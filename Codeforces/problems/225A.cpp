/* Default - Himanshu Verkiya */
#include<bits/stdc++.h>
using namespace std;
// DEFINING HEADERS
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define endl "\n"

int main()
{
    bool possible(true);
    int n, x, a, b;
    cin >> n >> x;
    while (n--)
    {
        cin >> a >> b;
        if (x == a || x == b || x == 7 - a || x == 7 - b)
        {
            possible = false;
        }
        x = 7 - x;
    }
    cout << (possible ? "YES" : "NO") << endl;
    return 0;
}