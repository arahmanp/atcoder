#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    while(1) {
        bool possible = true;

        for(auto &x : a) {
            if(x % 2 != 0) {
                possible = false;
                break;
            }
            x /= 2;
        }

        if(possible) ans++;
        else break;
    }

    cout << ans;

    return 0;
}