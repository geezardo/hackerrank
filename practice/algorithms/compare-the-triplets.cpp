#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n = 3;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];

  int p = 0, q = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (a[i] > x) p++;
    else if (a[i] < x) q++;
  }

  printf("%d %d\n", p, q);

  return 0;
}

