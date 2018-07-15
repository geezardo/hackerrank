#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> a (n);
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a.begin(), a.end());
  auto lb = lower_bound(a.begin(), a.end(), a[n - 1]);

  int sum = 0;
  for (auto it = lb; it != a.end(); it++) sum++;

  cout << sum << endl;

  return 0;
}

