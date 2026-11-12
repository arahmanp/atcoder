#include <algorithm>
#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, q;
    std::cin >> n >> q;

    std::vector<int> v(n);
    for(int i = 0; i < n; i++) v[i] = i + 1;

    while(q--) {
        int k;
        std::cin >> k;

        std::reverse(v.begin(), v.begin() + k);

        for(int i = 0; i < k; i++) v[i] *= -1;
    }

    for(auto el : v) std::cout << el << '\n';
}