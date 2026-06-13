#include <bits/stdc++.h>
using namespace std;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
  int h, w;

  cin >> h >> w;

  vector<vector<int>> grid(h, vector<int>(w, 0));

  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      for(int k = 0; k < 4; k++) {
        int adjX = i + dx[k];
        int adjY = j + dy[k];

        if(adjX >= 0 && adjX < h && adjY >= 0 && adjY < w) grid[i][j]++;
      }

      cout << grid[i][j] << ' ';
    }

    cout << '\n';
  }

  return 0;
}
