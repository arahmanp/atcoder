#include <algorithm>
#include <cstdlib>
#include <ios>
#include <iostream>
#include <vector>

typedef long long ll;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, s;
    ll l;
    std::cin >> n >> s >> l;

    std::vector<ll> a(n - 1);
    for(int i = 0; i < n - 1; i++) std::cin >> a[i];

    std::vector<ll> dist(n);
    dist[0] = 0;
    for(int i = 1; i < n; i++) {
        dist[i] = dist[i - 1] + a[i - 1];
    }

    int best = 1;
    for(int lo = 0; lo < n - 1; lo++) {
        for(int hi = lo + 1; hi < n; hi++) {
            if(lo <= s - 1 && s - 1 <= hi) {
                ll d1 = dist[hi] + dist[s - 1] - 2 * dist[lo];
                ll d2 = 2 * dist[hi] - dist[lo] - dist[s - 1];
                int n_town = hi - lo + 1;

                if(d1 <= l || d2 <= l) best = std::max(best, n_town);
            }
        }
    }

    std::cout << best << '\n';

    return 0;
}