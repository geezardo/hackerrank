#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int b, n, m;
  cin >> b >> n >> m;

  int kb[n];
  for (int i = 0; i < n; i++) cin >> kb[i];

  int ms[m];
  for (int i = 0; i < m; i++) cin >> ms[i];

  sort(kb, kb + n, greater<int>());
  sort(ms, ms + m);

  int ans = -1;
  for (int i = 0, j = 0; i < n; i++) {
    for (; j < m; j++) {
      int x = kb[i] + ms[j];
      if (x > b) break;

      ans = max(ans, x);
    }
  }

  cout << ans << endl;

  return 0;
}

