#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int cnt[1000000];
int D[1000000];
int a[1000000];

int main(){
    int n, k, q; cin >> n >> k >> q;
    while(n--){
        int l , r; cin >> l >> r;
        D[l]++; D[r+1]--;
    }
    for(int i = 1; i <= 200000; i++){
        a[i] = a[i-1] + D[i];
    }
    for(int i = 1; i <= 200000; i++){
        if(a[i] >= k){
            cnt[i] = cnt[i-1] + 1;
        }
        else cnt[i] = cnt[i-1];
    }
    while(q--){
        int l,r; cin >> l >> r;
        cout << cnt[r] - cnt[l-1] << endl;
    }
    return 0;
}