#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  int a[n];
  cin >> a[0];

  int p = 0, q = 0;
  int min = a[0], max = a[0];
  for (int i = 1; i < n; i++) {
    int x;
    cin >> x;

    if (x > max) {
      q++; max = x;
    }
    else if (x < min) {
      p++; min = x;
    }
  }

  printf("%d %d\n", q, p);

  return 0;
}

