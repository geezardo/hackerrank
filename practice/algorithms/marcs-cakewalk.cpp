#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef long long ll;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  function<bool(int,int)> greater = [](int x, int y) {
    return x > y;
  };
  sort(a, a + n, greater);

  ll ans = a[0];
  for (int i = 1; i < n; i++) ans += pow(2, i) * a[i];

  cout << ans << endl;

  return 0;
}

