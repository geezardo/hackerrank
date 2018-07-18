#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  int b[m];
  for (int i = 0; i < m; i++) cin >> b[i];

  function<int(int,int)> gcd = [&gcd](int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
  };

  function<int(int,int)> lcm = [&gcd](int a, int b) {
    return (a * b) / gcd(a, b);
  };

  int g = a[0];
  for (int i = 1; i < n; i++) g = lcm(g, a[i]);

  int h = b[0];
  for (int i = 1; i < m; i++) h = gcd(h, b[i]);

  int sum = 0;
  for (int i = g; i <= h; i += g)
    if (h % i == 0) sum++;

  cout << sum << endl;

  return 0;
}

