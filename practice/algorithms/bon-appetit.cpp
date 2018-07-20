#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n, k;
  cin >> n >> k;

  int sum = 0, x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (i != k) sum += x;
  }

  int b;
  cin >> b;

  sum /= 2;
  if (sum == b)
    cout << "Bon Appetit";
  else
    cout << (b - sum);
  cout << endl;

  return 0;
}

