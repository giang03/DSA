#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,k; cin >> n >> k;
    int a[n];
    ll cnt = 0;
    multiset <int> ms;
    for(int &x : a) cin >> x;
    int l = 0;
    for(int r = 0 ; r < n; r++){
        ms.insert(a[r]);
        int Max = *ms.rbegin(), Min = *ms.begin();
        while(Max - Min > k){
            auto it = ms.find(a[l]);
            ms.erase(it);
            Max = *ms.rbegin(), Min = *ms.begin();
            l++;
        }
        cnt += r - l + 1;
    }
    cout << cnt << endl;
    return 0;
}