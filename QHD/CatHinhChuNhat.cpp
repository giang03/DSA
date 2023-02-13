#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 1e9 + 7;

ll dp[501][501];

int main(){
    int a,b; cin >> a >> b;
    for(int i = 1; i <= 500; i++){
        for(int j = 1; j <= 500; j++){
            dp[i][j] = MOD;
            if(i == j){
                dp[i][j] = 0;
            }
        }
    }
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b ; j++){
            for(int k = 1; k < j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j-k] + 1);
            }
            for(int k = 1; k < i; k++){
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
            }
        }
    }
    cout << dp[a][b] << endl;
    return 0;
}