#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  vector<string> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  function<bool(string, string)> comp = [](string a, string b) {
    if (a.size() == b.size()) return a < b;

    return a.size() < b.size();
  };

  sort(a.begin(), a.end(), comp);
  for (string s : a) cout << s << endl;

  return 0;
}

