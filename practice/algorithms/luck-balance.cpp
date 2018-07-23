#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  int ans = 0;
  vector<int> a;
  for (int i = 0; i < n; i++) {
    int l, t;
    cin >> l >> t;

    if (t == 0)
      ans += l;
    else
      a.push_back(l);
  }

  sort(a.begin(), a.end(), greater<int>());

  int i = 0;
  n = a.size();

  while (i < n) {
    if (k > 0) {
      ans += a[i];
      k--;
    }
    else
      ans -= a[i];

    i++;
  }

  cout << ans << endl;

  return 0;
}

