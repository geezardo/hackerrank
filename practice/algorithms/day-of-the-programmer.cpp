#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int m[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int y;
  cin >> y;

  if (y == 1918)
    m[1] = 15;
  else if (y <= 1917 && y % 4 == 0)
    m[1]++;
  else if (y > 1918 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)))
    m[1]++;

  int i = 0, n = 256;
  while (i < 12 && n > m[i]) {
    n -= m[i];
    i++;
  }

  if (n < 10) cout << '0';
  cout << n << '.';
  if (++i < 10) cout << '0';
  cout << i << '.' << y << endl;

  return 0;
}

