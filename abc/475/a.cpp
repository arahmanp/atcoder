#include <cstddef>
#include <ios>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string s;
    std::cin >> s;

    for(size_t i = 0; i < s.size() - 1; i++) {
        std::cout << s[i] << 'o';
    }

    std::cout << s.back() << '\n';

    return 0;
}