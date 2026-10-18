#include <algorithm>
#include <cmath>
#include <cstddef>
#include <ios>
#include <iostream>
#include <utility>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, k, t;
    std::cin >> n >> k >> t;

    std::vector<int> a(n);
    for(int i = 0; i < n; i++) std::cin >> a[i];

    std::sort(a.begin(), a.end());

    std::vector<std::pair<int, int>> aokir;
    for(auto el : a) aokir.push_back({el, el + k});

    std::vector<int> hole;
    if(aokir[0].first > 0) hole.push_back(aokir[0].first);
    for(size_t i = 0; i < aokir.size() - 1; i++) {
        auto [x1, y1] = aokir[i];
        auto [x2, y2] = aokir[i + 1];
        if(y1 < x2) hole.push_back(x2 - y1);
    }
    if(aokir.back().second < t) hole.push_back(t - aokir.back().second);

    for(auto el : hole) std::cout << el << ' ' << ceil((double)el / k) << '\n';
}