#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  int p = 0, m = 0, z = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (x == 0)
      z++;
    else if (x > 0)
      p++;
    else
      m++;
  }

  float x = n;
  printf("%.6f\n%.6f\n%.6f\n", p / x, m / x, z / x);

  return 0;
}

