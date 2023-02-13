#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int f[105][105][105];

int main(){
    string s,t,r; cin >> s >> t >> r;
    int n = s.size(), m = t.size(), k = r.size();
    for(int i = 1;i <= n; i++){
        for(int j = 1; j <= m; j++){
            for(int l = 1; l <= k; l++){
                if(s[i-1] == t[j-1] && s[i - 1] == r[l - 1]){
                    f[i][j][l] = f[i-1][j-1][l-1] + 1;
                }
                else f[i][j][l] = max({f[i-1][j][l],f[i][j-1][l],f[i][j][l-1]});
            }
        }
    }
    cout << f[n][m][k] << endl;
    return 0;
}