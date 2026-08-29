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

    int half_n = n / 2;
    int sum = 0;

    for(int i = half_n; i < n; i++) sum += a[i];

    std::cout << sum << '\n';

    return 0;
}