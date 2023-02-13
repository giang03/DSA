#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int f[1000005];

int main(){
    int n,s; cin >> n >> s;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 1; i <= s; i++){
        f[i] = MOD;
        for(int j = 0; j < n; j++){
            if(i >= a[j]){
                f[i] = min(f[i],f[i - a[j]] + 1);
            }
        }
    }
    if(f[s] >= MOD) cout << -1;
    else cout << f[s];
    return 0;
}