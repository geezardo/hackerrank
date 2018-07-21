#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s[n];
    for (int i = 0; i < n; i++) {
      cin >> s[i];

      sort(s[i].begin(), s[i].end());
    }

    bool valid = true;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i < n - 1)
          if (s[i][j] > s[i + 1][j]) valid = false;
        if (j < n - 1)
          if (s[i][j] > s[i][j + 1]) valid = false;

        if (!valid) break;
      }
    }

    cout << (valid ? "YES" : "NO") << endl;
  }

  return 0;
}

