#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int f[1005][1005];

int main(){
    string s,t; cin >> s >> t;
    int n = s.size(), m = t.size();
    for(int i = 1;i <= n; i++){
        f[i][0] = i;
    }
    for(int j = 1; j <= m; j++){
        f[0][j] = j;
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s[i-1] == t[j-1]){
                f[i][j] = f[i-1][j-1];
            }
            else {
                f[i][j] = min({f[i][j-1], f[i-1][j], f[i-1][j-1]}) + 1;
            }
        }
    }
    cout << f[n][m] << endl;
    return 0;
}