#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    while (n--) {
      int x;
      cin >> x;

      if (x < 1) k--;
    }

    if (k > 0)
      cout << "YES";
    else
      cout << "NO";
    cout << endl;
  }

  return 0;
}

