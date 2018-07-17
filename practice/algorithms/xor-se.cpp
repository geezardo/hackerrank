#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int q;
  cin >> q;

  function<ll(ll)> f = [](ll x) {
    ll res[] = {x, x, 2, 2, x + 2, x + 2, 0, 0};
    return res[x % 8];
  };

  while (q--) {
    ll l, r;
    cin >> l >> r;

    cout << (f(r) ^ f(l - 1)) << endl;
  }

  return 0;
}

