#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  ll mod = 1000000007;
  function<ll(ll,ll)> modpow = [&modpow, mod](ll x, ll n) {
    if (n == 0) return 1LL;

    ll m = modpow(x, n / 2);
    m = (m * m) % mod;
    if (n & 1) m = (m * x) % mod;

    return m;
  };

  while (t--) {
    string a, b;
    cin >> a >> b;

    ll x = 0;
    for (char c : a) {
      ll p = c - '0';
      x = ((x * 10) + p) % mod;
    }

    ll y = 0;
    for (char c : b) {
      ll p = c - '0';
      y = ((y * 10) + p) % (mod - 1);
    }

    ll ans = modpow(x, y);
    cout << ans << endl;
  }

  return 0;
}

