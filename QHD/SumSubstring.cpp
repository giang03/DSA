#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

ll dp[100];

int main(){
    string s; cin >> s;
    ll ans = 0;
    for(int i = 1; i <= s.size(); i++){
        int x = s[i-1] -'0';
        dp[i] = dp[i - 1] * 10 + x * i;
        ans += dp[i];
    }
    cout << ans << endl;
    return 0;
}