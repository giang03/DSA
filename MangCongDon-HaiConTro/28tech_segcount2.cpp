#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    ll cnt = 0;
    unordered_set <int> us;
    unordered_multiset <int> ums;
    for(int &x : a) cin >> x;
    int l = 0;
    for(int r = 0 ; r < n; r++){
        us.insert(a[r]);
        ums.insert(a[r]);
        while(us.size() > k){
            auto it = ums.find(a[l]);
            if(it != ums.end()){
                ums.erase(it);
            }
            it = ums.find(a[l]);
            if(it == ums.end()){
                auto id = us.find(a[l]);
                us.erase(id);
            }
            l++;
        }
        cnt += r - l + 1;
    }
    cout << cnt << endl;
    return 0;
}