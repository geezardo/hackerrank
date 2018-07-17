#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int s, t;
  cin >> s >> t;

  int a, b;
  cin >> a >> b;

  int m, n;
  cin >> m >> n;

  int app = 0;
  while (m--) {
    int x;
    cin >> x;

    x += a;
    if (s <= x && x <= t) app++;
  }

  int org = 0;
  while (n--) {
    int x;
    cin >> x;

    x += b;
    if (s <= x && x <= t) org++;
  }

  cout << app << endl;
  cout << org << endl;

  return 0;
}

