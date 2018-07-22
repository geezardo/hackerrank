#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  string s;
  cin >> s;

  int h = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    int t = h;
    if (s[i] == 'U')
      h++;
    else
      h--;

    if (t < 0 && h == 0) ans++;
  }

  cout << ans << endl;

  return 0;
}

