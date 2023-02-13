#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll dp[10001];

int main(){
    int n; cin >> n;
    for(int i = 1;i <= n; i++){
        dp[i] = MOD;
        for(int j = 1; j*j <= i; j++){
            dp[i] = min(dp[i],dp[i - j*j] + 1);
        }
    }
    cout << dp[n] << endl;
    return 0;
}