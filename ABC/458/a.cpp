#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int n;

  cin >> s >> n;

  cout << s.substr(n, s.size() - 2 * n) << '\n';

  return 0;
}
