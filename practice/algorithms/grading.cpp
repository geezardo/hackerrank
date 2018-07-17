#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  scanf("%d", &n);

  while (n--) {
    int g;
    scanf("%d", &g);

    int p = 5 - (g % 5);
    if (g > 37 && p < 3) g += p;

    printf("%d\n", g);
  }
}

