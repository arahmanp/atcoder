#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;

  cin >> s;

  int size = s.size();

  long long ans = 0;

  for(int i = 0; i < size; i++) {
    if(s[i] == 'C') {
      int longest_substr = min(i, size - i - 1) * 2 + 1;
      
      ans += (longest_substr + 1) / 2;
    }
  }

  cout << ans << '\n';

  return 0;
}
