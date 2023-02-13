#include <bits/stdc++.h>

using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

int main() {
    int n; cin >> n;
    pair<int, int> p[n];
    map<int, vector<int>> ms;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        cin >> p[i].first >> p[i].second;
        ms[p[i].first].push_back(p[i].second);
    }
    ll sum = 0, cnt = 0;
    multiset<int> se;
    for(auto x : ms){
        for(int i = 0; i < x.second.size(); ++i) se.insert(x.second[i]);
        while(se.size() > x.first) se.erase(se.begin());
    }
    for(int x : se) sum += x;
    cout << sum << endl;
    return 0;
}
