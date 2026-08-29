#include <ios>
#include <iostream>
#include <vector>

int n, k;

std::vector<int> solution;

void search(int i, int curr) {
    if(i > n || curr > k) {
        return;
    } else if(curr == k) {
        for(int j = 0; j < n; j++) {
            std::cout << solution[j] << ' ';
        }
        std::cout << '\n';
        return;
    } else {
        for(int j = 0; j * (i + 1) <= k - curr; j++) {
            solution[i] = j;
            search(i + 1, curr + (i + 1) * j);
            solution[i] = 0;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    std::cin >> n >> k;

    solution.assign(n + 1, 0);

    for(int i = 0; i <= k; i++) {
        solution[0] = i;
        search(1, i);
        solution[0] = 0;
    }

    return 0;
}