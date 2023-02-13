#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll dp[1005][1005];

int main(){
    int n; cin >> n;
    char a[n + 1][n + 1];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    dp[1][1] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(a[i][j] == '.'){
                if(a[i - 1][j] == '.'){
                    dp[i][j] += dp[i-1][j];
                    dp[i][j] %= MOD;
                }
                if(a[i][j - 1] == '.'){
                    dp[i][j] += dp[i][j-1];
                    dp[i][j] %= MOD;
                }
            }
            dp[i][j] %= MOD;
        }
    }
    if(a[1][1] == '*') cout << 0;
    else 
        cout << dp[n][n] << endl;
    return 0;
}