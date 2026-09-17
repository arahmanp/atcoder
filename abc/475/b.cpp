#include <cmath>
#include <ios>
#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for(int i = 0; i < n; i++) std::cin >> a[i];

    int total_1, total_10, total_100;
    total_1 = total_10 = total_100 = 0;

    for(int i = 0; i < n; i++) {
        int x = ceil((double)a[i] / 1000);
        int change = 1000 * x - a[i];

        total_100 += change / 100;
        change %= 100;

        total_10 += change / 10;
        change %= 10;

        total_1 += change;
    }

    std::cout << total_1 << ' ' << total_10 << ' ' << total_100 << '\n';

    return 0;
}