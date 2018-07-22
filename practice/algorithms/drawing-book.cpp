#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, p;
  cin >> n >> p;

  int ans = min(p / 2, (n / 2) - (p / 2));
  cout << ans << endl;

  return 0;
}

