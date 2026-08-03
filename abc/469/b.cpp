#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;

    cin >> n >> s;

    if(n == 1 && s[0] == 'x') {
        cout << 1 << '\n';

        return 0;
    }

    int ans = 0;

    if(s[0] == 'x' && s[1] == 'x') ans++;
    if(s[n - 1] == 'x' && s[n - 2] == 'x') ans++;

    for(int i = 1; i < n - 1; i++) {
        if(s[i] == 'x') {
            if(s[i - 1] == 'x' && s[i + 1] == 'x') ans++;
        }
    }

    cout << ans << '\n';
    
    return 0;
}