#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;
typedef pair<ll, ll> pll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n = 5;
  ll a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  pll best = {10e10, 0};
  for (int i = 0; i < n; i++) {
    ll sum = 0;
    for (int j = 0; j < n; j++)
      if (j != i) sum += a[j];

    best = make_pair(min(sum, best.first), max(sum, best.second));
  }

  printf("%ld %ld\n", best.first, best.second);

  return 0;
}

