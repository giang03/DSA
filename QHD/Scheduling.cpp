#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

struct pj{
    int f , s, w;
};

bool cmp(pj a, pj b){
    return a.s < b.s;
}

ll dp[200005];

int binary(pj a[], int i){
    int l = 0, r = i - 1, res = -1;
    while(l <= r){
        int m = (l + r) / 2;
        if(a[m].s < a[i].f){
            res = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    return res;
}

int main(){
    int n; cin >> n;
    pj a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].f >> a[i].s >> a[i].w;
    }
    sort(a, a + n, cmp);
    dp[0] = a[0].w;
    for(int i = 1; i < n; i++){
        ll tmp = a[i].w;
        int res = binary(a,i);
        if(res != -1){
            tmp += dp[res];
        }
        dp[i] = max(dp[i - 1], tmp);
    }
    cout << dp[n-1];
    return 0;
}