/* Default - Himanshu Verkiya */
 #include<bits/stdc++.h>
 using namespace std;
 // DEFINING HEADERS
 #define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
 #define endl "\n" 
int main() {
  ;
  int n;
  cin >> n;
  string s;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'R') {
      for (int j = i; j < n; j++) {
        if (s[j] != 'R') {
          cout << j << " " << j + 1 << '\n';
          return 0;
        }
      }
      return 0;
    }
    if (s[i] == 'L') {
      cout << i + 1 << " " << i << '\n';
      return 0;
    }
  }
  return 0;
}