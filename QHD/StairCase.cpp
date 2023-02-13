#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll solve(int n, int m){
    ll res[n + 1];
    res[0] = 1;
    res[1] = 1;
     
    for(int i = 2; i <= n; i++){
       res[i] = 0;
       for(int j = 1; j <= m && j <= i; j++){
            res[i] += res[i - j];
            res[i] %= MOD;
       }
    }
    return res[n];
}

int main(){
    int n,k; cin >> n >> k;
    cout << solve(n,k) << endl;
    return 0;
}