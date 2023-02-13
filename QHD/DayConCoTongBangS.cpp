#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int f[500001];
int a[1000];

int main(){
    int n, s; cin >> n >> s;
    f[0] = 1;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= n; i++){
        for(int j = s; j >= 0; j--){
            if(f[j - a[i]]){
                f[j] = 1;
            }
        }
    }
    if(f[s]){
        cout << 1;
    }
    else cout << 0;
    return 0;
}