#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      a[i][j] = x;
    }
  }

  int x = 0;
  for (int i = 0; i < n; i++) x += a[i][i];

  int y = 0;
  for (int i = n - 1; i >= 0; i--) y += a[n - i - 1][i];

  cout << abs(x - y) << endl;

  return 0;
}

