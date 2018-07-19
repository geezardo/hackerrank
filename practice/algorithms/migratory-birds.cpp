#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef pair<int, int> pii;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  map<int, int> b;
  b[1] = b[2] = b[3] = b[4] = b[5] = 0;
  
  while (n--) {
    int x;
    cin >> x;

    b[x]++;
  }

  int ans = 0, best = 0;
  for (pii m : b) {
    if (m.second > best) {
      best = m.second;
      ans = m.first;
    }
  }

  cout << ans << endl;

  return 0;
}

