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
  while (t--) {
    ll n;
    cin >> n;

    ll m = n % mod;
    cout << ((m * m) % mod) << endl;
  }

  return 0;
}

