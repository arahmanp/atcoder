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

    std::vector<int> freq(101, 0);

    for(auto el : a) freq[el]++;

    int sum = 0;
    for(int i = 1; i <= 100; i++) {
        if(freq[i] != 0 && freq[i] % 2 != 0) sum += i;
    }

    std::cout << sum << '\n';

    return 0;
}