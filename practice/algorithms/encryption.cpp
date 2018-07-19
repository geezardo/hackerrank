#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  string s;
  cin >> s;

  int n = s.size();
  int a = ceil(sqrt(n));
  int b = ceil(sqrt(n));

  for (int i = 0; i < a; i++) {
    for (int j = i; j < n; j += b)
      cout << s[j];
    cout << " ";
  }

  cout << endl;

  return 0;
}

