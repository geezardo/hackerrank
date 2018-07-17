#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int l, r;
  cin >> l >> r;

  int best = 0;
  for (int i = l; i <= r; i++)
    for (int j = i; j <= r; j++) best = max(best, i ^ j);

  cout << best << endl;

  return 0;
}

