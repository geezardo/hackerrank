#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    int h = 1;
    for (int i = 1; i <= n; i++)
      if (i & 1)
        h *= 2;
      else
        h++;

    cout << h << endl;
  }

  return 0;
}

