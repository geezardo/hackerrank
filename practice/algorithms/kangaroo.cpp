#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int x1, x2, v1, v2;
  cin >> x1 >> v1 >> x2 >> v2;

  float y = (float) (x2 - x2) / (v1 - v2);

  if (v1 < v2)
    cout << "NO";
  else if (v1 != v2 && ((x2 - x1) % (v1 - v2) == 0))
    cout << "YES";
  else
    cout << "NO";
  cout << endl;

  return 0;
}

