#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  int m = 0;
  while (n--) {
    int x;
    cin >> x;

    m = max(m, x);
  }

  int dose = m - k;
  cout << (dose < 0 ? 0 : dose) << endl;

  return 0;
}

