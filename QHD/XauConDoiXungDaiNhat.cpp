#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int f[1005][1005];

int main(){
    string s; cin >> s;
    int n = s.size();
    int ans = 1;
    for(int i = 0; i < n; i++)  f[i][i] = 1;
    for(int len = 2; len <= n; len++){
        for(int i = 0; i <= n - len; i++){
            int j = i + len - 1;
            if(len == 2){
                if(s[i] == s[j]) f[i][j] = 1;
                else f[i][j] = 0;
            }
            else {
                f[i][j] = (s[i] == s[j]) && f[i+1][j-1];
            }
            if(f[i][j]) ans = max(ans,j - i + 1);
        }
    }
    cout << ans << endl;
    return 0;
}