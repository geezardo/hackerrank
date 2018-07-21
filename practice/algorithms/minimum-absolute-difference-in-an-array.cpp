#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  ll a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  sort(a, a + n);
  adjacent_difference(a, a + n, a, [](int x, int y) {
    return abs(x - y);
  });

  cout << (*min_element(a + 1, a + n)) << endl;

  return 0;
}

