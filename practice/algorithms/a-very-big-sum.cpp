#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  ll sum = 0;
  while (n--) {
    ll x;
    cin >> x;
    sum += x;
  }

  cout << sum << endl;

  return 0;
}

