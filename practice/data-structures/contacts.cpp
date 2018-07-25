#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef unsigned int uint;

struct Trie {
  map<string, uint> record;

  void push(string s) {
    uint n = s.size();
    string t = "";
    for (uint i = 0; i < n; i++) {
      t += s[i];
      if (this->record.find(t) == this->record.end())
        this->record[t] = 0;

      this->record[t]++;
    }
  }

  uint count(string s) {
    if (this->record.find(s) == this->record.end())
      return 0;

    return this->record[s];
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;

  Trie trie;

  while (n--) {
    string t, s;
    cin >> t >> s;

    if (t == "add")
      trie.push(s);
    else
      cout << trie.count(s) << endl;
  }

  return 0;
}

