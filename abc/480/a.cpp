#include <ios>
#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    std::string a, b;
    std::cin >> a >> b;

    if(a == "AD" || a == "DA") std::cout << "Yes\n";
    else if(b == "AD" || b == "DA") std::cout << "Yes\n";
    else if(a[0] == 'A' && b[0] == 'D') std::cout << "Yes\n";
    else if(a[0] == 'D' && b[0] == 'A') std::cout << "Yes\n";
    else if(a[1] == 'A' && b[1] == 'D') std::cout << "Yes\n";
    else if(a[1] == 'D' && b[1] == 'A') std::cout << "Yes\n";
    else std::cout << "No\n";
}