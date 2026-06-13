#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, q;

  cin >> x >> q;

  priority_queue<int> left_heap;
  priority_queue<int, vector<int>, greater<int>> right_heap;

  left_heap.push(x);

  while(q--) {
    int a, b;

    cin >> a >> b;

    if(a <= left_heap.top()) left_heap.push(a);
    else right_heap.push(a);

    if(b <= left_heap.top()) left_heap.push(b);
    else right_heap.push(b);

    while(left_heap.size() != right_heap.size() + 1) {
      if(left_heap.size() <= right_heap.size()) {
        left_heap.push(right_heap.top());
        right_heap.pop();
      } else {
        right_heap.push(left_heap.top());
        left_heap.pop();
      }
    }

    cout << left_heap.top() << '\n';
  }

  return 0;
}
