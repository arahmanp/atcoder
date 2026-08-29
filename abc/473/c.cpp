#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, k;
    std::cin >> n >> k;

    std::vector<int> a(n), freq(k + 1, 0);
    for(int i = 0; i < n; i++) {
        std::cin >> a[i];
        freq[a[i]]++;
    }

    std::vector<int> v;
    for(auto el : freq) {
        if(el != 0) v.push_back(el);
    }

    std::sort(v.begin(), v.end());

    int ans = 0;
    for(int i = 1; i <= k; i++) {
        auto it = std::upper_bound(v.begin(), v.end(), freq[i] + 1);
        if(it == v.end()) {
            // std::cout << i << '\n';
            ans++;
        }
    }

    std::cout << ans << '\n';

    return 0;
}