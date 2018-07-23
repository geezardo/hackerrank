#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int q;
  cin >> q;

  while (q--) {
    int x, y, z;
    cin >> x >> y >> z;

    int d = abs(x - z) - abs(y - z);
    if (d > 0)
      cout << "Cat B";
    else if (d < 0)
      cout << "Cat A";
    else
      cout << "Mouse C";
    cout << endl;
  }

  return 0;
}

