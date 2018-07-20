#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<int> a (101, 0);
  while (n--) {
    int x;
    cin >> x;

    a[--x]++;
  }

  int ans = 0;
  for (int i = 0; i < 101; i++) ans += a[i] / 2;

  cout << ans << endl;

  return 0;
}

