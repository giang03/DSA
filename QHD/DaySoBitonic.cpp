#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int MOD = 1e9 + 7;

int a[1001];
ll f1[1001],f2[1001];

int main(){
    int n; cin >> n;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        f1[i] = a[i];
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                f1[i] = max(f1[i], f1[j] + a[i]);
            }
        }
    }
    for(int i = n - 1; i >= 0; i--){
        f2[i] = a[i];
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                f2[i] = max(f2[i], f2[j] + a[i]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        ans = max(ans , f1[i] + f2[i] - a[i]);
    }
    cout << ans << endl;
    return 0;
}