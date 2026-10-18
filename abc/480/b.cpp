#include <ios>
#include <iostream>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

bool match(std::string s1, std::string s2) {
    if(s1.size() != s2.size()) return false;
    int n = s1.size();
    int cntdiff = 0;
    for(int i = 0; i < n; i++) {
        if(s1[i] != s2[i]) cntdiff++;
    }

    if(cntdiff == 1) return true;
    else return false;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, m;
    std::cin >> n >> m;

    std::vector<std::string> s(n), t(m);
    std::unordered_set<std::string> us;
    std::unordered_map<std::string, int> mp;
    std::vector<int> vote(n, 0);
    for(int i = 0; i < n; i++) {std::cin >> s[i]; us.insert(s[i]); mp[s[i]] = i;}
    for(int i = 0; i < m; i++) std::cin >> t[i];

    for(auto el : t) {
        if(us.contains(el)) vote[mp[el]]++;
        else {int cnt = 0; std::string sol;
        for(auto ss : s) {
            if(match(el, ss)) {
                cnt++;
                sol = ss;
            }
        }
        if(cnt == 1) vote[mp[sol]]++;}
        
    }

    for(auto el : vote) std::cout << el << '\n';
}